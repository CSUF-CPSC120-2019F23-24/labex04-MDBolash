// Sales prediction
#include <iostream>

int main ()
{
long total_sales2;
const long total_sales = 2103419277;
const double INCREASE = 0.18;
//Display last years Sales
std::cout << "Last years sales amounted to " << total_sales <<  '\n';

//Calculate predictions for next year.
total_sales2 = total_sales + (total_sales*INCREASE) ;
//Display next years predicted sales
std::cout << "This years sales may amount to " << static_cast <long long>(total_sales2) << " ." ;
}
