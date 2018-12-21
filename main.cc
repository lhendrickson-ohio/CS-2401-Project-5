/************************************************
	Liam Hendrickson
	CS 2401 - John Dolan
	Project 5
	Ohio University
*************************************************/

#include "closet.h"
#include <list>
#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <string>
#include <fstream>

using namespace std;

int menu();//used for user to work with their closet

int main()
{
	int choice;

	list <things*> closet;//list of pointers
	list<things*>::iterator it;
	ifstream fin;
	ofstream fout;

	cout<<"Welcome to your closet"<<endl;

	fin.open("backup.txt");
	if(!fin.fail())//if the file was opened correctly
	{
		fin>>choice;
		while(choice!=0)//checks for end of file
		{
			switch(choice)
			{
				case 1:
					closet.push_back(new sweater);
					break;
				case 2:
					closet.push_back(new bottle);
					break;
				case 3:
					closet.push_back(new shoes);
					break;
				case 4:
					closet.push_back(new book);
				case 5:
					closet.push_back(new food);
			}
			it=closet.end();
			--it;
			(*it)->finput(fin);
			fin>>choice;
		}
	}


	fin.close();

	choice = menu();//begining of user interaction

	while(choice!=0)
	{
		switch(choice)//based on user selection
		{
			case 1:
				closet.push_back(new sweater);
				it=closet.end();
				--it;
				(*it)->input(cin);
				break;
			case 2:
				closet.push_back(new bottle);
				it=closet.end();
				--it;
                                (*it)->input(cin);
				break;
			case 3:
				closet.push_back(new shoes);
				it=closet.end();
				--it;
                                (*it)->input(cin);
				break;
			case 4:
				closet.push_back(new book);
				it=closet.end();
				--it;
                                (*it)->input(cin);
				break;
			case 5:
				closet.push_back(new food);
				it=closet.end();
				--it;
                                (*it)->input(cin);
				break;
			case 6:		//shows the whole list
				for(list<things*>::iterator it2=closet.begin(); it2!=closet.end(); ++it2)
				{
					(*it2)->output(cout);
				}
				break;
			default:
				cout<<"Not an option"<<endl;
				break;
		}
		choice = menu();
	}//bottom of menu loop

	remove("backup.txt");

	fout.open("backup.txt");
	for(list<things*>::iterator it3=closet.begin(); it3!=closet.end(); ++it3)
	{
		(*it3)->foutput(fout);
	}
	fout<<0;
	fout.close();



}





int menu()
{
	int choice;

	cout<<"Make a selection"<<endl;
	cout<<"\n1.)  Add a sweater"<<endl;
	cout<<"\n2.) Add a bottle"<<endl;
	cout<<"\n3.) Add a pair of shoes"<<endl;
	cout<<"\n4.) Add a book"<<endl;
	cout<<"\n5.) Add some food"<<endl;
	cout<<"\n6.) Show all the items in your closet"<<endl;
	cout<<"\n0.) Exit"<<endl;
	cin>>choice;
	return choice;


}

