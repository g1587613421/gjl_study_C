#pragma once
class myOperator
{
public:int num;
	  friend int operator+(myOperator&, myOperator&);
	  friend bool operator!(myOperator&);
	  myOperator(int num) {
		  this->num = num;
	  }

};


