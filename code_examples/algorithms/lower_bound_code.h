const std::vector<ExamResult>& results = get_results();

auto lb = std::ranges::lower_bound(results, 49, {}, &ExamResult::score);
// First element for which: it->score >= 49
auto ub = std::ranges::upper_bound(results, 99, {}, &ExamResult::score);
// First element for which: 99 < it->score 
 
for (auto it = results.begin(); it != lb; it++) {
	// Process exam fails, upto 48
}
    
for (auto it = lb; it != ub; it++) {
	// Process exam passes, 49-99
}
    
for (auto it = ub; it != results.end(); it++) {
	// Process exams with honors, 100+
}
