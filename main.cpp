 #include <iostream>

using namespace std;

 int main() {

      const double PROFIT_PERCENTAGE = 0.10;
    const double SALE_DISCOUNT = 0.15;
    double total_Expenses,desire_net_profit,New_net_profit,markup;


     double merchandise_cost, store_rent, employees_salary,  electricity_cost;

     cout << "enter merchandise_cost: ";
     cin>>merchandise_cost;

     cout<<"enter store rent: ";
     cin>>store_rent;
     cout<< "enter employees_salary: ";
     cin>>employees_salary;
     cout<< "enter elecrtity_cost: ";
     cin>> electricity_cost;

     total_Expenses = merchandise_cost + store_rent + employees_salary + electricity_cost;
            cout<<total_Expenses;
     desire_net_profit = merchandise_cost * 0.1;
            cout<<desire_net_profit;
     New_net_profit  = desire_net_profit / 0.15;
       cout<<New_net_profit;
     markup = (New_net_profit + total_Expenses)/merchandise_cost;
  cout<<markup;


    return 0;





 }
