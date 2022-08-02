#!/bin/bash
CMAKE="/usr/bin/cmake"
set -e

$CMAKE -S. -B build -G "Unix Makefiles"
$CMAKE --build build
$CMAKE --install build --prefix .

for executable in bin/*; do
	$executable 1> /dev/null
done

echo "All good!"
