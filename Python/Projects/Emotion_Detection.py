import os
os.environ['TF_ENABLE_ONEDNN_OPTS'] = '0'  # Suppress TensorFlow warnings
os.environ['TF_CPP_MIN_LOG_LEVEL'] = '2'   # Hide INFO messages

import cv2
from deepface import DeepFace

# Initialize webcam
cap = cv2.VideoCapture(0)

while True:
    ret, frame = cap.read()
    if not ret: break
    
    try:
        # Analyze frame for emotion
        analysis = DeepFace.analyze(
            img_path=frame,
            actions=['emotion'],
            enforce_detection=False,  # Continue even if no face found
            detector_backend='opencv',
            silent=True
        )
        
        # Process detection results
        if isinstance(analysis, list):  # Multiple faces
            for idx, face in enumerate(analysis):
                emotion = face['dominant_emotion']
                confidence = face['emotion'][emotion]
                
                # Text to display
                text = f"Face {idx+1}: {emotion} ({confidence:.1f}%)"
                (text_width, text_height), _ = cv2.getTextSize(
                    text, cv2.FONT_HERSHEY_SIMPLEX, 0.8, 2
                )
                
                # White background
                cv2.rectangle(
                    frame, 
                    (10, 15 + idx*30), 
                    (10 + text_width, 15 + (idx+1)*30),
                    (255, 255, 255), -1
                )
                
                # Black text
                cv2.putText(
                    frame, text, (10, 30 + idx*30),
                    cv2.FONT_HERSHEY_SIMPLEX, 0.8, (0, 0, 0), 2
                )
                
        else:  # Single face
            emotion = analysis['dominant_emotion']
            confidence = analysis['emotion'][emotion]
            
            # Text to display
            text = f"Emotion: {emotion} ({confidence:.1f}%)"
            (text_width, text_height), _ = cv2.getTextSize(
                text, cv2.FONT_HERSHEY_SIMPLEX, 0.9, 2
            )
            
            # White background
            cv2.rectangle(
                frame, 
                (10, 15), 
                (10 + text_width, 15 + text_height + 10),
                (255, 255, 255), -1
            )
            
            # Black text
            cv2.putText(
                frame, text, (10, 40),
                cv2.FONT_HERSHEY_SIMPLEX, 0.9, (0, 0, 0), 2
            )
            
    except Exception as e:
        print("Detection error:", e)
        # Error message with white background
        cv2.rectangle(frame, (10, 15), (250, 50), (255, 255, 255), -1)
        cv2.putText(frame, "No Face Detected", (10, 40),
                   cv2.FONT_HERSHEY_SIMPLEX, 0.9, (0, 0, 0), 2)

    cv2.imshow('Emotion Detection', frame)
    if cv2.waitKey(1) & 0xFF == ord('q'):
        break

cap.release()
cv2.destroyAllWindows()
