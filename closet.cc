/***************************************************
	Liam Hendrickson
	CS 2401 - John Dolan
	Project 5
	Ohio University
***************************************************/
#include <string>
#include <iostream>
#include <cstdlib>
#include <fstream>
#include "closet.h"

using namespace std;


void bottle::input(istream& cin)
{
	cout<<"\nEnter the contents: ";
	cin>>contents;
	cout<<"\nEnter the size(oz) of the bottle:  ";
	cin>>size;
}

void bottle::finput(ifstream& fin)
{
	fin>>contents;
	fin>>size;
}


void bottle::output(ostream& cout)const
{
	cout<<"\nA "<<size<<" oz. bottle of "<< contents<<endl;
}

void bottle::foutput(ofstream& fout)const
{
	fout<<'2'<<endl;
	fout<<contents<<endl;
	fout<<size<<endl;
}

void sweater::input(istream& cin)
{
	cout<<"\nEnter the colour: ";
	cin>>colour;
	cout<<"\nEnter the material: ";
	cin>> material;
	cout<<"\nEnter the size (S,M,L,XL, etc.): ";
	cin >>size;
}

void sweater::finput(ifstream& fin)
{
	fin>>colour;
	fin>>material;
	fin>>size;
}

void sweater::output(ostream& cout)const
{
	cout<<"\n A "<<colour<<' '<<material<<" sweater, size "<<size<<endl;
}

void sweater::foutput(ofstream& fout)const
{
	fout<<'1'<<endl;
	fout<<colour<<endl;
	fout<<material<<endl;
	fout<<size<<endl;
}

void shoes::input(istream& cin)
{
	cout<<"\nEnter the brand: ";
	cin>>brand;
	cout<<"\nEnter the size (10, 11.5, 8, etc): ";
	cin>>size;
}

void shoes::finput(ifstream& fin)
{
	fin>>brand;
	fin>>size;
}

void shoes::output(ostream& cout)const
{
	cout<<"\nA size "<<size<<" pair of "<<brand<<" shoes"<<endl;
}

void shoes::foutput(ofstream& fout)const
{
	fout<<'3'<<endl;
	fout<<brand<<endl;
	fout<<size<<endl;
}

void book::input(istream& cin)
{
	cout<<"\nEnter the course the book is for(no spaces): ";
	cin>>course;
	cout<<"\nEnter its price(no dollar sign needed): ";
	cin>>price;
}

void book::finput(ifstream& fin)
{
	fin>>course;
	fin>>price;
}

void book::output(ostream& cout)const
{
	cout<<"\nA book for "<<course<<", costing $"<<price<<endl;
}

void book::foutput(ofstream& fout)const
{
	fout<<'4'<<endl;
	fout<<course<<endl;
	fout<<price<<endl;
}

void food::input(istream& cin)
{
	cout<<"\nEnter the name of the food: ";
	cin>>name;
	cout<<"\nEnter its expiration date(mm/dd/yyyy): ";
	cin>>expiration;
}

void food::finput(ifstream& fin)
{
	fin>>name;
	fin>>expiration;
}

void food::output(ostream& cout)const
{
	cout<<'\n'<<name<<" which goes bad on "<<expiration<<endl;
}

void food::foutput(ofstream& fout)const
{
	fout<<'5'<<endl;
	fout<<name<<endl;
	fout<<expiration<<endl;
}
