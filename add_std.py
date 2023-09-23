import os

# 遍历当前目录及其所有子目录
for root, dirs, files in os.walk('.'):
    # 遍历当前目录及其子目录中的所有 .cpp 文件
    for file in files:
        if file.endswith('.cpp'):
            with open(os.path.join(root, file), 'r+', encoding='utf-8') as f:
                content = f.read()
                f.seek(0, 0)
                f.write("#include <bits/stdc++.h>\nusing namespace std;\n" + content)