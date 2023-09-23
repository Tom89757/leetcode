import os
import shutil

md_folder = 'leetcode-all'
if not os.path.exists(md_folder):
    os.mkdir(md_folder)

for foldername, subfolders, filenames in os.walk('.'):
    for filename in filenames:
        if filename.endswith('ME.md'):
            src_path = os.path.join(foldername, filename)
            dst_folder = os.path.join(md_folder, foldername)
            dst_path = os.path.join(dst_folder, filename)
            if not os.path.exists(dst_folder):
                os.makedirs(dst_folder)
            shutil.copy(src_path, dst_path)