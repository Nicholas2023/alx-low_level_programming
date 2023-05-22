#!/bin/bash

echo -e '#include <stdio.h>\n#include <stdlib.h>\n\nunsigned int rand(void) { return 42; }\n' > /tmp/nrandom.c
gcc -shared -o /tmp/nrandom.so /tmp/nrandom.c
export LD_PRELOAD=/tmp/nrandom.so

