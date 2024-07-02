#include<iostream>
#include<vector>
#include<algorithm>
#include<memory>

using namespace std;

//UNIQUE POINTER

// struct DemoUnique
// {
//     DemoUnique(){
//         std::cout<<"Constructor"<<std::endl;
        
//     }
//     ~DemoUnique(){
//         cout<<"Destructor"<<endl;
        
//     }
// };

// int main()
// {
//     std::unique_ptr<DemoUnique> demo(new DemoUnique());
//     std::unique_ptr<DemoUnique> demo_ptr = std::move(demo);
//     if(!demo)
//     {
//         cout<<"Demo is empty now"<<endl;
//     }
//     if(!demo_ptr)
//     {
//         cout<<"Demo_ptr is empty now"<<endl;
//     }
//     return 0;
// }

// class DemoUniqueCall
// {
//     public:
//     DemoUniqueCall(){};
//     ~DemoUniqueCall(){};
//     void printSmthin(){
//     cout<<"Something"<<endl;
        
//     }
    
//     };


// class DemoUnique
// {
//     private:
//     std::unique_ptr<DemoUniqueCall> c;
    
//     public:
//     DemoUnique(): c(new DemoUniqueCall()){};
//     void UseCall(){c->printSmthin();}
// };

// int main()
// {
//     DemoUnique dm;
//     dm.UseCall();
//     return 0;
// }


//SHARED POINTER

// struct SharedDemo
// {
//     SharedDemo(){cout<<"COnstructor"<<endl;}
//     ~SharedDemo(){cout<<"Destructor"<<endl;}
    
// };

// int main()
// {
//     std::shared_ptr<SharedDemo> demo1(new SharedDemo());
//     {
//         std::shared_ptr<SharedDemo> demo2 = demo1;
//         cout<<demo1.use_count()<<endl;
//     }
//     cout<<demo1.use_count()<<endl;
// }

// class SharedResource
// {
//     public:
//     SharedResource(){cout<<"Const"<<endl;}
//     ~SharedResource(){cout<<"Dest"<<endl;}
// };

// class User
// {
//     private:
//     std::shared_ptr<SharedResource> SR;
//     public:
//     User(std::shared_ptr<SharedResource> res) : SR(res){}
//     void performTask()
//     {
//         cout<<"User interacting with resource";
//     }
    
// };

// int main()
// {
//     std::shared_ptr<SharedResource> resource = std::make_shared<SharedResource>();
//     User user1(resource);
//     User user2(resource);
    
//     user1.performTask();
//     user2.performTask();
    
//     cout<<resource.use_count();
// }

//WEAK POINTER

// struct B;
// struct A
// {
//     std::shared_ptr<B> b;
//     ~A(){cout<<"Destroyed A"<<endl;}
// };

// struct B
// {
//     std::weak_ptr<A> a;
//     ~B(){cout<<"Destoryed B"<<endl;}
// };

// int main()
// {
//     std::shared_ptr<B> b (new B());
//     std::shared_ptr<A> a (new A());
    
//     a->b;
//     b->a;
// }

// class B;
// class A
// {
//     public:
//     std::shared_ptr<B> b;
//     ~A(){cout<<"Dest"<<endl;}

// };

// class B
// {
//     public:
//     std::weak_ptr<A> a;
//     ~B(){cout<<"Dest"<<endl;}
// };

// int main()
// {
//     std::shared_ptr<A> a = std::make_shared<A>();
//     std::shared_ptr<B> b = std::make_shared<B>();
    
//     a->b;
//     b->a;
//     return 0;
// }
