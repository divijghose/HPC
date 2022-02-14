#include<omp.h>
#include<stdio.h>

// int main()
// {
//     int t;
//     t = omp_get_thread_num();
//     #pragma omp parallel
//     {
//         int x,y;
//         x=omp_get_num_threads();
//         y= omp_get_thread_num();
//         if(t==y)
//             t++;        
            

//     }
//     printf("%d\n",t);
// return 0;
// }

// int main()
// {
//     int s=-1;
    
//     #pragma omp parallel
//     {
//         // for(int j=0;j<1000000;j++);
        
//         #pragma omp master
//         {
        
//             // for(int j=0;j<1000000;j++); 
//             s=0;
//         } 
//             // for(int j=0;j<1000000;j++); 
//             s++;

//     }
//     printf("%d\n",s);
// return 0;
// }

// int main()
// {
//     int s=-1;
    
//     #pragma omp parallel
//     {
//         // for(int j=0;j<1000000;j++);
        
//         #pragma omp master
//         {
        
//             // for(int j=0;j<1000000;j++); 
//             s=0;
//         } 
//             // for(int j=0;j<1000000;j++); 
//             s++;

//     }
//     printf("%d\n",s);
// return 0;
// }

// int x,sum;
// #pragma omp threadprivate(sum)

// int main(){

// #pragma omp parallel
// #pragma omp critical
// {
//     sum=10;
// }
// x=2;
// #pragma omp parallel
// #pragma omp critical
// sum+=x;

// printf("%d\n",sum);
// }

// int main(){
//     int t=0,x;
//     #pragma omp parallel
//     {
//         for(int j=0;j<1000000;j++); 
//         x=omp_get_thread_num();
//         // for(int j=0;j<1000000;j++); 
//         #pragma omp critical
//         t+=x;
//         // for(int j=0;j<1000000;j++); 

//     }
//     printf("%d\n",t);
//     return 0;
// }


// int main(){
//     int t;
//     t=omp_get_num_threads();

//     #pragma omp parallel
//     {
//         int x,y; 
//         x=omp_get_num_threads();
//         y=omp_get_thread_num();
//         // for(int j=0;j<1000000;j++); 
//         #pragma omp single
//         t+=x;
//         // for(int j=0;j<1000000;j++); 

//     }
//     printf("%d\n",t);
//     return 0;
// }


int main(){
    int s=0;
    

    #pragma omp parallel shared(s)
    {
        #pragma omp master
        s++;
        #pragma omp single
        s++;
        // #pragma omp master
        // s++;
        #pragma omp barrier
        printf("s=%d\n",s);

    }
    
    return 0;
}