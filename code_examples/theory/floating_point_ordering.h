float v = 1.0f;
float next = std::nextafter(v, 2.0f);
// next is the next higher floating pointer number
float diff = (next-v)/2;
// diff is below the resolution of float
// importantly: v + diff == v

std::vector<float> data1(100, diff);
data1.front() = v; // data1 == { v, ... }
float r1 = std::accumulate(data1.begin(), data1.end(), 0.f);
// r1 == v
// we added diff 99 times, but each time, the value did not change

std::vector<float> data2(100, diff);
data2.back() = v; // data2 == { ..., v }
float r2 = std::accumulate(data2.begin(), data2.end(), 0.f);
// r2 != v
// we added diff 99 times, but we did that before adding to v
// the sum of 99 diffs is above the resolution threshold