#include<stdio.h>
#include "hr.c"

void title(); //function prototype

void title(){
    char row[5][68]={"#  # #   # ### #####    ###  ##  #   # # # #### ###  ##### #### ### ",
                     "#  # ##  #  #    #     #    #  # ##  # # # #    #  #   #   #    #  #",
                     "#  # # # #  #    #     #    #  # # # # # # ###  ###    #   ###  ### ",
                     "#  # #  ##  #    #     #    #  # #  ## # # #    #  #   #   #    #  #",
                     " ##  #   # ###   #      ###  ##  #   #  #  #### #  #   #   #### #  #"};




    hr();    
    

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 68; j++)
        {
            if (row[i][j] == '#')
            {
                printf("%c",176);
            }else{
                printf(" ");
            }            
        }
        printf("\n");
    }

    hr();
    
}