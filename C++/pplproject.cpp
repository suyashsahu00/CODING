#include <iostream>
#include <unordered_map>

using namespace std; // This line brings all std identifiers into the global namespace

class TreasureMap {
private:
    unordered_map<int, int> treasures; // Map to store treasure locations and their values

public:
    // Constructor initializes the treasure map
    TreasureMap(int n) {
        treasures.reserve(n); // Reserves space for n locations
    }

    // Method 1: AddTreasure
    void AddTreasure(int location, int value) {
        // Add treasure only if the location doesn't already have a treasure
        if (treasures.find(location) == treasures.end()) {
            treasures[location] = value;
        } else {
            cout << "Treasure already exists at location " << location << endl;
        }
    }

    // Method 2: GetTreasureValue
    int GetTreasureValue(int location) {
        // Check if treasure exists at the location
        if (treasures.find(location) != treasures.end()) {
            return treasures[location];
        }
        return -1; // Return -1 if no treasure is found
    }

    // Method 3: RemoveTreasure
    void RemoveTreasure(int location) {
        // Erase the treasure at the specified location if it exists
        if (treasures.find(location) != treasures.end()) {
            treasures.erase(location);
        } else {
            cout << "No treasure found at location " << location << endl;
        }
    }

    // Method 4: TotalTreasureValue
    int TotalTreasureValue() {
        int totalValue = 0;
        // Sum all treasure values
        for (const auto& pair : treasures) {
            totalValue += pair.second;
        }
        return totalValue;
    }
};

int main() {
    int n, choice, location, value;
    
    cout << "Enter the number of treasure locations: ";
    cin >> n;
    
    TreasureMap map(n);
    
    do {
        cout << "\n1. Add Treasure\n";
        cout << "2. Get Treasure Value\n";
        cout << "3. Remove Treasure\n";
        cout << "4. Get Total Treasure Value\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice; // Ensure choice is updated here
        
        switch (choice) {
            case 1:
                cout << "Enter the location to add treasure: ";
                cin >> location;
                cout << "Enter the value of the treasure: ";
                cin >> value;
                map.AddTreasure(location, value);
                break;
            
            case 2:
                cout << "Enter the location to get treasure value: ";
                cin >> location;
                value = map.GetTreasureValue(location);
                if (value == -1) {
                    cout << "No treasure found at location " << location << endl;
                } else {
                    cout << "Treasure at location " << location << " has a value of " << value << endl;
                }
                break;
            
            case 3:
                cout << "Enter the location to remove treasure: ";
                cin >> location;
                map.RemoveTreasure(location);
                break;
            
            case 4:
                cout << "Total treasure value: " << map.TotalTreasureValue() << endl;
                break;
            
            case 5:
                cout << "Exit Succesful....!" << endl;
                break;
            
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
        
    } while (choice != 5); // Loop will exit when choice is 5

    return 0;
}
