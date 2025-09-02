#!/bin/bash

# Count available updates using paru
updates=$(paru -Qu 2>/dev/null | wc -l)

# Output JSON format for better control
if [ "$updates" -eq 0 ]; then
  echo '{"text": "0", "class": "no-updates", "tooltip": "System is up to date"}'
else
  echo "{\"text\": \"$updates\", \"class\": \"update-available\", \"tooltip\": \"$updates package updates available\"}"
fi
