#include <iostream>
#include <string>
#include "Matrix.hpp"


int main()
{
    // make new empty matrix so and firest we will go to get values for it
    zich::Matrix my_mat{};
    std::cout<<"welcom to my matrix calculator !!!"<<std::endl;
    char fun_char = 'n';
    // run antil we get f for finish
    while(fun_char!='f')
    {
        //for n make new matrix value
        if(fun_char == 'n')
        {
            //get the matrix
            std::cout<<"insert you matrix value"<<std::endl;
            std::cin>>my_mat;
            //print the matrix
            std::cout<<"this is your matrix"<<std::endl;
            std::cout<<my_mat<<std::endl;
        }
        //do mult
        if(fun_char == '*')
        {
            //ask if we want to change the matrix
            std::cout<<"if you want to save your matrix insert y-yes and n-no:"<<std::endl;
            std::cin>>fun_char;

            if(fun_char == 'n')
            {
                //ask with what we do the mult
                std::cout<<"for mult with matrix insert - m - and for mult with number insert - n -"<<std::endl;
                std::cin>>fun_char;

                if(fun_char == 'n')
                {
                    std::cout<<"insert you number value"<<std::endl;

                    double number;
                    std::cin>>number;

                    std::cout<<"your ans is :"<<std::endl<<(my_mat*number)<<std::endl;
                    
                }
                if(fun_char == 'm')
                {
                    std::cout<<"insert you matrix value"<<std::endl;

                    zich::Matrix temp_mat{};
                    std::cin>>temp_mat;

                    std::cout<<"your ans is :"<<std::endl<<(my_mat*temp_mat)<<std::endl;
                }
            }
            else
            {
                std::cout<<"for mult with matrix insert - m - and for mult with number insert - n -"<<std::endl;
                std::cin>>fun_char;
                //ask with what we do the mult
                if(fun_char == 'n')
                {
                    std::cout<<"insert you number value"<<std::endl;

                    double number;
                    std::cin>>number;

                    std::cout<<"your ans is :"<<std::endl<<(my_mat*=number)<<std::endl;
                    
                }
                if(fun_char == 'm')
                {
                    std::cout<<"insert you matrix value"<<std::endl;

                    zich::Matrix temp_mat{};
                    std::cin>>temp_mat;

                    std::cout<<"your ans is :"<<std::endl<<(my_mat*=temp_mat)<<std::endl;
                }
            }
        }

        if(fun_char == '+')
        {
            std::cout<<"if you want to save your matrix insert y-yes and n-no:"<<std::endl;
            std::cin>>fun_char;
            //check if we want to change the matrix
            if(fun_char == 'n')
            {
                std::cout<<"insert you matrix value"<<std::endl;

                zich::Matrix temp_mat{};
                std::cin>>temp_mat;

                std::cout<<"your ans is :"<<std::endl<<(my_mat-temp_mat)<<std::endl;
            }
            else
            {
                std::cout<<"for sum with matrix insert - m - and for sum +1 insert - + -"<<std::endl;  
                std::cin>>fun_char; 

                if(fun_char == '+')
                {
                    //++
                    std::cout<<"your ans is :"<<(my_mat++)<<std::endl;
                }
                if(fun_char == 'm')
                {
                    std::cout<<"insert you matrix value"<<std::endl;

                    zich::Matrix temp_mat{};
                    std::cin>>temp_mat;

                    std::cout<<"your ans is :"<<std::endl<<(my_mat+=temp_mat)<<std::endl;
                }
            }
        }

        if(fun_char == '-')
        {
            std::cout<<"if you want to save your matrix insert y-yes and n-no:"<<std::endl;
            std::cin>>fun_char;
            //check if we want to save the change
            if(fun_char == 'n')
            {
                std::cout<<"insert you matrix value"<<std::endl;

                zich::Matrix temp_mat{};
                std::cin>>temp_mat;

                std::cout<<"your ans is :"<<(my_mat-temp_mat)<<std::endl;
            }
            else
            {
                std::cout<<"for sub with matrix insert - m - and for sub -1 insert : - "<<std::endl;
                std::cin>>fun_char;

                if(fun_char == '-')
                {
                    //--
                    std::cout<<"your ans is :"<<(my_mat--)<<std::endl;

                }
                if(fun_char == 'm')
                {
                    std::cout<<"insert you matrix value"<<std::endl;

                    zich::Matrix temp_mat{};
                    std::cin>>temp_mat;

                    std::cout<<"your ans is :"<<(my_mat-=temp_mat)<<std::endl;
                }
            }
        }
        
        if(fun_char == 'c')
        {
            //get the number that will say as what we want to check
            std::cout<<"insert what you want to check : "<<std::endl<<"1) == , 2) != , 3) < , 4) <= , 5) > , 6) >= "<<std::endl;
            int number;
            std::cin>>number;
            //==
            if(number == 1)
            {
                std::cout<<"insert you matrix value"<<std::endl;

                zich::Matrix temp_mat{};
                std::cin>>temp_mat;

                std::cout<<"your ans is :"<<(my_mat==temp_mat)<<std::endl;
            }
            //!=
            if(number == 2)
            {
                std::cout<<"insert you matrix value"<<std::endl;

                zich::Matrix temp_mat{};
                std::cin>>temp_mat;

                std::cout<<"your ans is :"<<(my_mat!=temp_mat)<<std::endl;
            }
            //<
            if(number == 3)
            {
                std::cout<<"insert you matrix value"<<std::endl;

                zich::Matrix temp_mat{};
                std::cin>>temp_mat;

                std::cout<<"your ans is :"<<(my_mat<temp_mat)<<std::endl;
            }
            //<=
            if(number == 4)
            {
                std::cout<<"insert you matrix value"<<std::endl;

                zich::Matrix temp_mat{};
                std::cin>>temp_mat;

                std::cout<<"your ans is :"<<(my_mat<=temp_mat)<<std::endl;
            }
            //>
            if(number == 5)
            {
                std::cout<<"insert you matrix value"<<std::endl;

                zich::Matrix temp_mat{};
                std::cin>>temp_mat;

                std::cout<<"your ans is :"<<(my_mat>temp_mat)<<std::endl;
            }
            //>=
            if(number == 6)
            {
                std::cout<<"insert you matrix value"<<std::endl;

                zich::Matrix temp_mat{};
                std::cin>>temp_mat;

                std::cout<<"your ans is :"<<(my_mat>=temp_mat)<<std::endl;
            }
        }
        // ask to tell as what the next function
        std::cout<<"insert your next active:"<<std::endl;
        std::cout<<"insert n for new matrix"<<std::endl;
        std::cout<<"insert * for mult"<<std::endl;
        std::cout<<"insert + for sum"<<std::endl;
        std::cout<<"insert - for sub"<<std::endl;
        std::cout<<"insert c for comper"<<std::endl;
        std::cout<<"insert f for finish"<<std::endl;
        std::cin>>fun_char;
        
    }



    return 0;
}