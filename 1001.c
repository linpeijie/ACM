//
//  1001.c
//  acm
//
//  Created by  lpj on 17/12/31.
//  Copyright © 2017年  lpj. All rights reserved.
//

#include "1001.h"

void A1001(){

    int n,sum=0;

    while (scanf("%d",&n)!=EOF) {
        sum=0;
        for(int i=0;i<=n;i++)
            sum+=i;
        printf("%d\n\n",sum);
    }
    return;

}
