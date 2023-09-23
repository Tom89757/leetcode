import os
import shutil

md_folder = 'neetcode-own'
if not os.path.exists(md_folder):
    os.mkdir(md_folder)

for foldername, subfolders, filenames in os.walk('.'):
    # if subfolders==md_folder:
    #     continue
    for filename in filenames:
        if filename.endswith('.md'):
            src_path = os.path.join(foldername, filename)
            dst_folder = os.path.join(md_folder, foldername)
            dst_path = os.path.join(dst_folder, filename)
            if not os.path.exists(dst_folder):
                os.makedirs(dst_folder)
            shutil.move(src_path, dst_path)