from __future__ import print_function
import sys

data = sys.stdin.readlines()
hash = 'ABCDEFGHIJKLMNOPQRSTUVWXYZ'

for line in data :
      num = long(float(line))
      g =""
      while num > 0:
           t = num%26
           num = num/26

           if t == 0:
              num = 0
              g = g+ 'Z'
           else:
              g = g + hash[t-1]
      print(g[::-1])
