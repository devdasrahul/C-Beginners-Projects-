#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> todoList;
    int choice;
    string task;
    do {
        cout << "\n1. Add Task\n2. Delete Task\n3. Display Tasks\n4. Quit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch(choice) {
            case 1:
                cout << "Enter task to add: ";
                cin >> task;
                todoList.push_back(task);
                break;
            case 2:
                if(!todoList.empty()) {
                    cout << "Enter index of task to delete: ";
                    int index;
                    cin >> index;
                    if(index >= 0 && index < todoList.size()) {
                        todoList.erase(todoList.begin() + index);
                        cout << "Task deleted successfully.\n";
                    } else {
                        cout << "Invalid index.\n";
                    }
                } else {
                    cout << "No tasks to delete.\n";
                }
                break;
            case 3:
                cout << "Tasks:\n";
                for(int i = 0; i < todoList.size(); ++i) {
                    cout << i << ". " << todoList[i] << endl;
                }
                break;
            case 4:
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Invalid choice.\n";
        }
    } while(choice != 4);
    return 0;
}