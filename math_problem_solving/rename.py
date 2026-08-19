import os
import re

# Jis folder me files hain, wahan ye script chalega
for filename in os.listdir('.'):
    # Check karega ki file number se start ho rahi hai ya nahi
    match = re.match(r'^(\d+)_(.*)', filename)
    if match:
        num, rest = match.groups()
        # Number ko 4-digit format me convert karega (e.g., 9 -> 0009, 99 -> 0099)
        new_num = num.zfill(4)
        new_filename = f"{new_num}_{rest}"
        
        if filename != new_filename:
            os.rename(filename, new_filename)
            print(f"Renamed: {filename} -> {new_filename}")