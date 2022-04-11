#include <iostream>
#include <string>
#include "Matrix.hpp"


int main()
{
    // make new empty matrix so and firest we will go to get values for it
    zich::Matrix my_mat1{};
    zich::Matrix my_mat2{};

    //get the matrix
    std::cout<<"insert you firest matrix value"<<std::endl;
    std::cin>>my_mat1;
    //print the matrix
    std::cout<<"this is your firest matrix"<<std::endl;
    std::cout<<my_mat1<<std::endl;

    //get the matrix
    std::cout<<"insert you second matrix value"<<std::endl;
    std::cin>>my_mat2;
    //print the matrix
    std::cout<<"this is your second matrix"<<std::endl;
    std::cout<<my_mat2<<std::endl;

    std::cout<<"welcom to my matrix calculator !!!"<<std::endl;
    char fun_char = ' ';
    // run antil we get f for finish
    while(fun_char!='f')
    {
        // ask to tell as what the next function
        std::cout<<"insert your next active:"<<std::endl;
        std::cout<<"insert * for mult"<<std::endl;
        std::cout<<"insert + for sum"<<std::endl;
        std::cout<<"insert - for sub"<<std::endl;
        std::cout<<"insert c for comper"<<std::endl;
        std::cout<<"insert p for comper"<<std::endl;
        std::cout<<"insert f for finish"<<std::endl;
        std::cin>>fun_char;

        //print
        if(fun_char == 'p')
        {
            std::cout<<"if you want to see mat1 insert 1 for mat 2 insert 2:"<<std::endl;
            std::cin>>fun_char;
            if(fun_char ==1 )
            {
                   std::cout<<"mat1 :"<<std::endl<<(my_mat1)<<std::endl;
            }
            else
            {
                    std::cout<<"mat2 :"<<std::endl<<(my_mat2)<<std::endl;
            }
        }
        //do mult
        if(fun_char == '*')
        {
            
            //ask if we want to change the matrix
            std::cout<<"if you want to save your matrix insert matrix 1 y-yes and n-no:"<<std::endl;
            std::cin>>fun_char;

            if(fun_char == 'n')
            {
                //ask with what we do the mult
                std::cout<<"for mult with matrix insert - m - and for mult with number insert - n -"<<std::endl;
                std::cin>>fun_char;

                if(fun_char == 'n')
                {
                    std::cout<<"for mult with matrix1 insert - 1 - and for mult with matrix2 insert - 2 -"<<std::endl;
                    std::cin>>fun_char;

                    std::cout<<"insert you number value"<<std::endl;

                    double number;
                    std::cin>>number;

                    if(fun_char == 1)
                    {
                        std::cout<<"your ans is :"<<std::endl<<(my_mat1*number)<<std::endl;
                    }
                    else
                    {
                         std::cout<<"your ans is :"<<std::endl<<(my_mat2*number)<<std::endl;
                    }
                    
                }
                if(fun_char == 'm')
                {
                    std::cout<<"your ans is :"<<std::endl<<(my_mat1*my_mat2)<<std::endl;
                }
            }
            else
            {
                 //ask with what we do the mult
                std::cout<<"for mult with matrix insert - m - and for mult with number insert - n -"<<std::endl;
                std::cin>>fun_char;

                if(fun_char == 'n')
                {
                    std::cout<<"for mult with matrix1 insert - 1 - and for mult with matrix2 insert - 2 -"<<std::endl;
                    std::cin>>fun_char;

                    std::cout<<"insert you number value"<<std::endl;

                    double number;
                    std::cin>>number;

                    if(fun_char == 1)
                    {
                        std::cout<<"your ans is :"<<std::endl<<(my_mat1*=number)<<std::endl;
                    }
                    else
                    {
                         std::cout<<"your ans is :"<<std::endl<<(my_mat2*=number)<<std::endl;
                    }
                    
                }
                if(fun_char == 'm')
                {
                    std::cout<<"your ans is :"<<std::endl<<(my_mat1*=my_mat2)<<std::endl;
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
                std::cout<<"your ans is :"<<std::endl<<(my_mat1+my_mat2)<<std::endl;
            }
            else
            {
                std::cout<<"for sum with matrix insert - m - and for sum +1 insert - + -"<<std::endl;  
                std::cin>>fun_char; 

                if(fun_char == '+')
                {
                    //++
                    std::cout<<"your ans is :"<<std::endl<<(++my_mat1)<<std::endl;
                }
                if(fun_char == 'm')
                {
                std::cout<<"your ans is :"<<std::endl<<(my_mat1+=my_mat2)<<std::endl;
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
                std::cout<<"your ans is :"<<std::endl<<(my_mat1-my_mat2)<<std::endl;
            }
            else
            {
                std::cout<<"for sub with matrix insert - m - and for sub -1 insert : - "<<std::endl;
                std::cin>>fun_char;

                if(fun_char == '-')
                {
                    //--
                    std::cout<<"your ans is :"<<std::endl<<(--my_mat1)<<std::endl;

                }
                if(fun_char == 'm')
                {
                    std::cout<<"your ans is :"<<std::endl<<(my_mat1-=my_mat2)<<std::endl;
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
            std::cout.setf(std::ios::boolalpha);
            if(number == 1)
            {
                std::cout<<"your ans is :"<<(my_mat1==my_mat2)<<std::endl;
            }
            //!=
            if(number == 2)
            {
                std::cout<<"your ans is :"<<(my_mat1!=my_mat2)<<std::endl;
            }
            //<
            if(number == 3)
            {
                std::cout<<"your ans is :"<<(my_mat1<my_mat2)<<std::endl;
            }
            //<=
            if(number == 4)
            {
                std::cout<<"your ans is :"<<(my_mat1<=my_mat2)<<std::endl;
            }
            //>
            if(number == 5)
            {
                std::cout<<"your ans is :"<<(my_mat1>my_mat2)<<std::endl;
            }
            //>=
            if(number == 6)
            {
                std::cout<<"your ans is :"<<(my_mat1>=my_mat2)<<std::endl;
            }
        }  

    }
    return 0;
}