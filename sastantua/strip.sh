#!/bin/sh
sed "s/[^*]//g" | awk '{ print length($0); }'
