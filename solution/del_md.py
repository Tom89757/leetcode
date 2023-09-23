import os

for foldername, subfolders, filenames in os.walk('.'):
    for filename in filenames:
        if filename.endswith('.md'):
            os.remove(os.path.join(foldername, filename))