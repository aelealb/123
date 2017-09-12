#include <iostream>

double pedir()
{
  std::cout<< "escriba un numero : ";
  double x;
  std::cin >> x;
  return x;
}

char operador()
{
  std::cout << "escriba un operador";
  char op;
  std::cin >> op;
  return op;
}

void print(double x, char op, double y)
{
  if (op== '+')
    { std::cout<< x << "+" << y << "=" << x+y ;}
    
      else if (op== '-')
	{ std::cout<< x << "-" << y << "=" << x-y ;}
      else if (op== '*')
	{ std::cout<< x << "*" << y << "=" << x*y ;}
      else if (op== '/')
	{ std::cout<< x << "/" << y << "=" << x/y ;}    

}
int  main ()
  
{
  double x = pedir();
  double y= pedir();

  char op= operador();

  print(x, op, y);

  return 0;
}
  
