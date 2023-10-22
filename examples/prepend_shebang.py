#!/usr/bin/env python3

import sys

INPUT_FILE = sys.argv[1]
FESTIVAL = sys.argv[2]

print("#!" + FESTIVAL)
with open(INPUT_FILE, "r") as r:
    for line in r.readlines():
        print(line, end="")

