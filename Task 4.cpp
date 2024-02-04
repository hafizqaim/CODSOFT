#include<iostream>
#include<string>
#include<Windows.h>
#include<conio.h>
using namespace std;
void menu();
struct Node
{
	string task;
	bool completionStatus;
	int taskNum;
	Node* next;

	Node(string task, bool status = false, int num = 0)
	{
		this->task = task;
		completionStatus = status;
		taskNum = num;
		next = NULL;
	}
};
class toDoList
{
	Node* listManager;
public:
	toDoList():listManager(NULL){}

	string addTaskToList(string task, bool status = 0, int num = 0)
	{
		Node* newTask = new Node(task, status, num);
		if (listManager == NULL)
		{
			listManager = newTask;
		}
		else
		{
			Node* temp = listManager;
			while (temp->next != NULL)
				temp = temp->next;
			temp->next = newTask;
		}
		return "Task has been successfully added to the list!";
	}

	string markAsComplete(int taskNum)
	{
		if (listManager == NULL)
			return "No Task to be marked!";

		else
		{
			Node* temp = listManager;
			while (temp != NULL && temp->taskNum != taskNum)
				temp = temp->next;

			if (temp == NULL)
				return "Task doesn't exist";

			temp->completionStatus = true;
			return "Task " + to_string(taskNum) + " has successfully been marked as completed!";
		}
	}


	string deleteTaskFromList(int taskNum)
	{
		if (listManager == NULL)
			return "To Do List is empty. Nothing to Delete";

		else
		{
			Node* temp = listManager;
			Node* prev = NULL;
			while (temp != NULL && temp->taskNum != taskNum)
			{
				prev = temp;
				temp = temp->next;
			}
			if (temp == NULL)
			{
				return "Task doesn't exist";
			}
			else if (temp == listManager)
			{
				listManager = listManager->next;
				delete temp;
			}
			else
			{
				prev->next = temp->next;
				delete temp;
			}
		}
		return "Task has been successfully deleted from the list!";
	}

	void viewTasks()
	{
		Node* temp = listManager;
		while (temp != NULL)
		{
			cout << "\t\t\t\t \033[36m" << temp->taskNum << "\t\t" << temp->task << "\t\t" << (temp->completionStatus ? "Completed" : "Pending") << endl;
			temp = temp->next;
		}
	}
};
int main()
{
	toDoList list;
	char choice;
	while (1)
	{
		system("CLS");
		menu();
		cout << "\n\t\t\t\t \033[31mPress 1 to \033[32mAdd a Task to List\033[0m" << endl;
		cout << "\t\t\t\t \033[33mPress 2 to \033[34mDelete a Task from List\033[0m" << endl;
		cout << "\t\t\t\t \033[35mPress 3 to \033[36mMark a Task as Complete\033[0m" << endl;
		cout << "\t\t\t\t \033[37mPress 4 to \033[31mView List\033[0m" << endl;
		cout << "\t\t\t\t \033[34mPress 5 to \033[33mExit\033[0m" << endl;
		cout << "\t\t\t\t Input Choice: "; cin >> choice; cin.ignore();
		switch (choice)
		{
		case '1':
		{
			system("CLS");
			menu();
			int taskNum;
			char Status;
			string task;
			cout << "\n\n\t\t\t\t \033[32mEnter Task Number: "; cin >> taskNum;
			cout << "\t\t\t\t Enter Task: "; cin.ignore(); getline(cin, task);
			cout << "\t\t\t\t Enter Completion Status (C/P): "; cin >> Status;
			while (Status != 'C' && Status != 'c' && Status != 'P' && Status != 'p')
			{
				cout << "\n\n\t\t\t\t Invalid Input! Please Input Completion Status Again: "; cin >> Status;
			}
			if (Status == 'c' || Status == 'C')
				cout << "\t\t\t\t "<<list.addTaskToList(task, 1, taskNum);
			else
				cout << "\t\t\t\t " << list.addTaskToList(task,0, taskNum);
			cout << endl;
			cout << "\n\t\t\t\t ";
			system("pause");
			cout << "\033[0m";
			break;
		}
		case '2':
		{
			system("CLS");
			menu();
			int taskNum = 0;
			cout << "\n\n\t\t\t\t \033[34mEnter Task Number: "; cin >> taskNum;
			cout << "\t\t\t\t " << list.deleteTaskFromList(taskNum);
			cout << endl;
			cout << "\n\t\t\t\t ";
			system("pause");
			cout << "\033[0m";
			break;
		}
		case '3':
		{
			system("CLS");
			menu();
			int taskNum;
			cout << "\n\n\t\t\t\t \033[36mEnter Task Number: "; cin >> taskNum;
			cout << "\t\t\t\t " <<list.markAsComplete(taskNum);
			cout << endl;
			cout << "\n\t\t\t\t ";
			system("pause");
			cout << "\033[0m";
			break;
		}
		case '4':
		{
			system("CLS");
			menu();
			cout << "\n\n\t\t\t\t\033[31m Task #\t\tTask\t\tCompletion Status\033[36m\n\n";
			list.viewTasks();
			cout << "\n\t\t\t\t \033[36m";
			system("pause");
			break;
		}
		case '5':
		{
			system("CLS");
			menu();
			cout << "\n\n\t\t\t\t \033[33mExiting Program...." << endl;
			cout << "\033[0m";
			return 0;
		}
		default:
			system("CLS");
			cout << "\n\n\t\t\t\t \033[33mWrong Input! Please Input Your Choice Again";
			cout << "\n\t\t\t\t ";
			system("pause");
			cout << "\033[0m";
			break;
		}

	}
}
void menu() 
{
	cout << "\t\t \033[31m$$$$$$$$\\                $$$$$$$\\                  $$\\       $$\\             $$\\     \033[0m" << endl;
	cout << "\t\t \033[32m\\__$$  __|               $$  __$$\\                 $$ |      \\__|            $$ |    \033[0m" << endl;
	cout << "\t\t \033[33m   $$ | $$$$$$\\          $$ |  $$ | $$$$$$\\        $$ |      $$\\  $$$$$$$\\ $$$$$$\\   \033[0m" << endl;
	cout << "\t\t \033[34m   $$ |$$  __$$\\ $$$$$$\\ $$ |  $$ |$$  __$$\\       $$ |      $$ |$$  _____|\\_$$  _|  \033[0m" << endl;
	cout << "\t\t \033[35m   $$ |$$ /  $$ |\\______|$$ |  $$ |$$ /  $$ |      $$ |      $$ |\\$$$$$$\\    $$ |    \033[0m" << endl;
	cout << "\t\t \033[36m   $$ |$$ |  $$ |        $$ |  $$ |$$ |  $$ |      $$ |      $$ | \\____$$\\   $$ |$$\\ \033[0m" << endl;
	cout << "\t\t \033[37m   $$ |\\$$$$$$  |        $$$$$$$  |\\$$$$$$  |      $$$$$$$$\\ $$ |$$$$$$$  |  \\$$$$  |\033[0m" << endl;
	cout << "\t\t \033[31m   \\__| \\______/         \\_______/  \\______/       \\________|\\__|\\_______/    \\____/ \033[0m" << endl;
}
