import os

for foldername, subfolders, filenames in os.walk('.'):
    for filename in filenames:
        if filename.endswith('.cpp'):
            with open(os.path.join(foldername, filename), 'r', encoding='utf-8') as f:
                content = f.read()
            with open(os.path.join(foldername, filename[:-4] + '.md'), 'w', encoding='utf-8') as f:
                f.write('### C++:\n')
                f.write('```c++\n')
                f.write(content)
                f.write('\n```')
