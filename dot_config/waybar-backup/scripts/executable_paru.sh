#!/bin/bash

updates=$(paru -Qu 2>/dev/null | wc -l)

# If no updates, show 0
echo "$updates"
