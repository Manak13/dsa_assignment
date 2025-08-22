#include<iostream>
using namespace std;

int main() {
    int arr[100], n=0, ch, i, pos, val, key, found;

    do {
        cout << "\n--- MENU ---\n";
        cout << "1.CREATE\n";
        cout << "2.DISPLAY\n";
        cout << "3.INSERT\n";
        cout << "4.DELETE\n";
        cout << "5.LINEAR SEARCH\n";
        cout << "6.EXIT\n";
        cout << "Enter your choice: ";
        cin >> ch;

        switch(ch) {
            case 1:  // CREATE
                cout << "Enter size of array: ";
                cin >> n;
                cout << "Enter " << n << " elements:\n";
                for(i=0;i<n;i++) {
                    cin >> arr[i];
                }
                break;

            case 2:  // DISPLAY
                cout << "Array elements are: ";
                for(i=0;i<n;i++) {
                    cout << arr[i] << " ";
                }
                cout << endl;
                break;

            case 3:  // INSERT
                cout << "Enter position: ";
                cin >> pos;
                cout << "Enter value: ";
                cin >> val;
                for(i=n;i>=pos;i--) {
                    arr[i]=arr[i-1];
                }
                arr[pos-1]=val;
                n++;
                cout << "Inserted.\n";
                break;

            case 4:  // DELETE
                cout << "Enter position: ";
                cin >> pos;
                for(i=pos-1;i<n-1;i++) {
                    arr[i]=arr[i+1];
                }
                n--;
                cout << "Deleted.\n";
                break;

            case 5:  // LINEAR SEARCH
                cout << "Enter element to search: ";
                cin >> key;
                found=0;
                for(i=0;i<n;i++) {
                    if(arr[i]==key) {
                        cout << "Found at position " << i+1 << endl;
                        found=1;
                        break;
                    }
                }
                if(found==0)
                    cout << "Not Found\n";
                break;

            case 6:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice\n";
        }
    } while(ch!=6);

    return 0;
}