#include<iostream>
class Menu
{
    public:
    void display()
    {
        std::cout<<"Choose your option: \n";
        std::cout<<"1.Deposit.\n";
        std::cout<<"2.Withdraw.\n";
        std::cout<<"3.Check balance.\n";
        std::cout<<"4.Exit\n";
    }
};
class Extra
{
    public:
    void show()
    {
        std::cout<<"Enter '1' to continue!! or Enter '2' to exit!!\n";
    }
};
int main()
{
    float balance=100000.0;
    std::string name;
    int accountnumber,choice,amount,opt;
    std::cout<<"Welcome to the simple banking system!!\n";
    std::cout<<"Enter your name: ";
    std::cin>>name;
    std::cout<<"Enter the account number: ";
    std::cin>>accountnumber;
    Extra Inn;
    Menu Option;
    Option.display();
    std::cin>>choice;
    if(choice==1)
    {
        std::cout<<"Enter the amount to be deposited: ";
        std::cin>>amount;
        balance+=amount;
        std::cout<<"The given amount is deposited!!\n";
        Inn.show();
        std::cin>>opt;
        switch(opt)
        {
            case 1:Option.display();
            std::cin>>choice;
            break;
            case 2:choice=4;
            break;
        }

    } 
    if(choice==2)
    {
        std::cout<<"Enter the amount to be withdrawn: ";
        std::cin>>amount;
        std::cout<<"\n";
        if(amount>balance)
        {
            std::cout<<"This amount exceeds your account balance!!\n";
            std::cout<<"As your current balance is INR."<<balance<<" Kindly withdraw amount less than or equal to the balance amount!!\n";
            std::cout<<"Enter the amount: ";
            std::cin>>amount;
                    std::cout<<"The amount is withdrawn!!\n";
        balance-=amount;
                Inn.show();
        std::cin>>opt;
        switch(opt)
        {
            case 1:Option.display();
            std::cin>>choice;
            break;
            case 2:choice=4;
            break;
        }
        }
        else
        {
        std::cout<<"The amount is withdrawn!!\n";
        balance-=amount;
        Inn.show();
        std::cin>>opt;
        switch(opt)
        {
            case 1:Option.display();
            std::cin>>choice;
            break;
            case 2:choice=4;
            break;
        } 
        }
    }
    if(choice==3)
    {
        std::cout<<"Name of the account keeper: "<<name<<".\n";
        std::cout<<"Account number: "<<accountnumber<<".\n";
        std::cout<<"Your current balance is: "<<balance<<".\n";
        Inn.show();
        std::cin>>opt;
        switch(opt)
        {
            case 1:Option.display();
            std::cin>>choice;
            break;
            case 2:choice=4;
            break;
        }
    }
    if(choice==4)
    {
        std::cout<<"Thank You for reaching us!! Keep checking your account to avoid malwares!!\n";
    }
    return 0;
}