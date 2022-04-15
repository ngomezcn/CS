#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'extraLongFactorials' function below.
#
# The function accepts INTEGER n as parameter.
#

def extraLongFactorials(n):
    res = 1
    if n == 0:
        return 0
    
    while n > 0:
        res = res * n
        n = n - 1
    return res

if __name__ == '__main__':
    n = int(input().strip())

    extraLongFactorials(n)
