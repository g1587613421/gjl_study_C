using namespace std;
#include <iostream>



//重新抛出异常
void 重新抛出异常() {
	try
	{
		throw 1;
	}
	catch (int exc)
	{
		try
		{
throw;
		}
		catch (...) {
			cout << "在这里被捕获了";
		}
		
	}
	
}


void 一般异常处理()
{
	//简单的异常
mm:    try
{
	int i;
	cin >> i;
	throw i;
}
	   catch (int exc)
	   {
		   if (exc == 1) {
			   cout << "1是我能捕获的异常";
		   }
		   else
		   {
			   try
			   {
				   throw exc;
			   }
			   catch (int exc) {
				   if (exc == 2) {
					   cout << exc << "是我能捕获的异常";
				   }
				   else
				   {
					   try
					   {
						   throw exc;
					   }
					   catch (...) {//捕获所有异常
						   cout << "异常没有被正常捕获" << "请重新输入异常标识符";
						   goto mm;
					   }

				   }
			   }

		   }
	   }
}

	int main(){
		//一般异常处理();
		重新抛出异常();
	}

