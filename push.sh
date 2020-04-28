#!/bin/bash

FILENAMES=$(git ls-files --others --exclude-standard)

for filename in $FILENAMES
do
	git add "$filename"
	git commit -m \""$filename"\" --no-verify
done

git push
