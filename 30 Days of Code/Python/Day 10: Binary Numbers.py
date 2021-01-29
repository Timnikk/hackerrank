#!/bin/python3

import math
import os
import random
import re
import sys

if __name__ == '__main__':
    n = int(input())
    cnt = 0
    maxi = 0
    while(n > 0):
        a = n % 2
        if(a == 1):
            cnt += 1
            if(cnt > maxi):
                maxi = cnt
        else:
            cnt = 0
                
        n //= 2
    print(maxi)
