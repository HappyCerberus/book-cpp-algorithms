CMAKE="/usr/bin/cmake"

set -e

$CMAKE -S. -B build -G "Unix Makefiles"
$CMAKE --build build
$CMAKE --install build --prefix .

for executable in bin/*; do
	$executable
done

echo "All good!"
