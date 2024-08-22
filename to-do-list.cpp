#include <iostream>
#include <vector>
#include <string>
using namespace std;
struct Task{
string description;
bool completed;
Task(string desc) : description(desc), completed(false) {}
};

class ToDoListManager {
private:
    vector<Task> tasks;

public:
    void addTask(const string &task) {
    tasks.push_back(Task(task));
    cout<<"Task"<<task<< "added."<<endl;
    }

    void viewTasks() const{
        if (tasks.empty()) 
        {
            cout<<"No tasks in the list."<<endl;
        } else
        {
            cout<<"\nTasks:"<<endl;
            for(size_t i = 0; i < tasks.size(); ++i){
                cout<<i+1<<". "<<tasks[i].description<<"["<<(tasks[i].completed?"Completed":"Pending")<<"]"<<endl;
            }
        }
    }

void markTaskAsCompleted(int index) {
        if (index>=0 && index<tasks.size()) {
            tasks[index].completed=true;
            cout<<"Task "<<tasks[index].description<<"marked as completed."<<endl;
        } else {
            cout<<"Invalid task index."<<endl;
        }
    }

    void removeTask(int index) {
        if(index>=0 && index<tasks.size()) {
            cout<<"Task"<<tasks[index].description<<"removed."<<endl;
            tasks.erase(tasks.begin()+index);
        } else {
            cout<<"Invalid task index."<<endl;
        }
    }
};

int main() {
    ToDoListManager manager;
    int choice;

    while (true) {
        cout<<"\nTo-Do List Manager"<<endl;
        cout<<"1. Add Task"<<endl;
        cout<<"2. View Tasks"<<endl;
        cout<<"3. Mark Task as Completed"<<endl;
        cout<<"4. Remove Task"<<endl;
        cout<<"5. Exit"<<endl;
        cout<<"Choose an option: ";
        cin>>choice;

        cin.ignore();

        switch (choice) {
 case 1: {
                string task;
                cout<<"Enter a task:";
                getline(cin,task);
                manager.addTask(task);
                break;
            }
            case 2:
                manager.viewTasks();
                break;
            case 3: {
                manager.viewTasks();
                int taskNum;
                cout<<"Enter the task number to mark as completed: ";
                cin>>taskNum;
                manager.markTaskAsCompleted(taskNum - 1);
                break;
            }
            case 4: {
                manager.viewTasks();
                int taskNum;
                cout << "Enter the task number to remove: ";
                cin >> taskNum;
                manager.removeTask(taskNum - 1);
                break;
            }
            case 5:
                cout<<"Exiting To-Do List Manager."<<endl;
                return 0;
            default:
                cout<<"Invalid option. Please try again."<<endl;
        }
    }

}
