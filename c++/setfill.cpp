// CPP Program to test std::setfill manipulator
#include <iostream>
#include <iomanip> // std::setfill, std::setw
int main()
{
    
    std::string str = "inetrnshala";
 
    // setfill is x and width is set as 15
    // And std::right is used set str to right of ('x') << std::setw(15);
 std::cout  << std::setfill('x') << std::setw(15);
    std::cout << str << std::endl;
    return 0;
}


// CPP Program to illustrate
// std::setbase manipulator
#include <iostream>
#include <iomanip> // std::setbase
int main()
{
    // set base to hexadecimal
    std::cout << std::setbase(16);

    // displaying 25 in hexadecimal
    std::cout << 25 << std::endl;
 
    // set base to Octal
    std::cout << std::setbase(8);
 
    // displaying 25 in Octal
    std::cout << 25 << std::endl;
    return 0;
}


#include <iostream>     // std::cout, std::fixed
#include <iomanip>      // std::setprecision

int main () {
  double f =3.14124;
  std::cout << std::setprecision(5) << f << '\n';
  std::cout << std::setprecision(9) << f << '\n';
  std::cout << std::fixed;
  std::cout << std::setprecision(5) << f << '\n';
  std::cout << std::setprecision(9) << f << '\n';
  return 0;
}


#include <iostream>     =
#include <iomanip>      / std::setprecision

int main () {
  double f =3.14124;
  std::cout << std::setprecision(5) << f << '\n';
  std::cout << std::setprecision(9) << f << '\n';
  
  return 0;
}

