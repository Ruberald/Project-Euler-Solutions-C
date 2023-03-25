#!/bin/bash
input=$1
output=${input%.c}

gcc $input -o .build/$output
.build/$output
