#!/bin/bash
if [ -z "$STR" ]; then
	exit 1
fi

pkill -f "*$STR*"

echo "All processes containing '$STR' in their name were killed"
