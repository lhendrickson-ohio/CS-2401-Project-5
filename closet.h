/*************************************************
	Liam Hendrickson
	CS 2401 - John Dolan
	Project 5
	Ohio University
*************************************************/
#ifndef CLOSET_H
#define CLOSET_H

#include <string>
#include <fstream>
#include <cstdlib>
using namespace std;

class  things
{
	public:
		virtual void input(istream& cin)=0;
		virtual void finput(ifstream& fin)=0;
		virtual void output(ostream& cout)const=0;
		virtual void foutput(ofstream& fout)const=0;
	private:

};

class sweater:public things
{
        public:
                void input(istream& cin);
                void finput(ifstream& fin);
                void output(ostream& cout)const;
                void foutput(ofstream& fout)const;
        private:
		string colour;
		string size;
		string material;
};

class bottle:public things
{
        public:
                void input(istream& cin);
                void finput(ifstream& fin);
                void output(ostream& cout)const;
                void foutput(ofstream& fout)const;
        private:
		string contents;
		double size;


};

class shoes:public things
{
        public:
                void input(istream& cin);
                void finput(ifstream& fin);
                void output(ostream& cout)const;
                void foutput(ofstream& fout)const;
        private:
		string brand;
		double size;


};

class book:public things
{
        public:
                void input(istream& cin);
                void finput(ifstream& fin);
                void output(ostream& cout)const;
                void foutput(ofstream& fout)const;
        private:
		string course;
		double price;


};

class food:public things
{
        public:
                void input(istream& cin);
                void finput(ifstream& fin);
                void output(ostream& cout)const;
                void foutput(ofstream& fout)const;
        private:
		string expiration;
		string name;


};
#endif
