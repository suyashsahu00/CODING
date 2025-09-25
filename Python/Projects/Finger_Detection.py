import cv2
import mediapipe as mp

# Initialize Mediapipe hands module
mp_hands = mp.solutions.hands
hands = mp_hands.Hands(
    max_num_hands=2,  # dual hand detection
    min_detection_confidence=0.7,
    min_tracking_confidence=0.7
)
mp_draw = mp.solutions.drawing_utils

# Finger tip landmark IDs (Mediapipe hand landmarks)
FINGER_TIPS = [mp_hands.HandLandmark.INDEX_FINGER_TIP,
               mp_hands.HandLandmark.MIDDLE_FINGER_TIP,
               mp_hands.HandLandmark.RING_FINGER_TIP,
               mp_hands.HandLandmark.PINKY_TIP,
               mp_hands.HandLandmark.THUMB_TIP]

# Initialize webcam
cap = cv2.VideoCapture(0)

while cap.isOpened():
    success, frame = cap.read()
    if not success:
        break

    # Flip and convert color space
    frame = cv2.flip(frame, 1)
    rgb_frame = cv2.cvtColor(frame, cv2.COLOR_BGR2RGB)
    
    # Process hand detection
    results = hands.process(rgb_frame)
    
    if results.multi_hand_landmarks:
        for hand_landmarks in results.multi_hand_landmarks:
            # Draw full hand landmarks
            mp_draw.draw_landmarks(
                frame, 
                hand_landmarks, 
                mp_hands.HAND_CONNECTIONS
            )
            
            # Highlight fingertips
            for tip_id in FINGER_TIPS:
                landmark = hand_landmarks.landmark[tip_id]
                h, w, _ = frame.shape
                cx, cy = int(landmark.x * w), int(landmark.y * h)
                
                # Draw colored circles at fingertips
                cv2.circle(frame, (cx, cy), 15, (0, 255, 0), -1)  # Green fill
                cv2.circle(frame, (cx, cy), 15, (0, 0, 255), 2)   # Red border

    # Display output
    cv2.imshow('Finger Highlight', frame)
    
    # Exit on 'q'
    if cv2.waitKey(1) & 0xFF == ord('q'):
        break

cap.release()
cv2.destroyAllWindows()
