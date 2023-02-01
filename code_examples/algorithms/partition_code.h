std::vector<ExamResult> results = get_results();

auto pp = std::partition(results.begin(), results.end(),
	[threshold = 49](const auto& r) {
		return r.score >= threshold;
	});

// process passing students
for (auto it = results.begin(); it != pp; ++it) {
	std::cout << "[PASS] " << it->student_name << "\n";
}
// process failed students
for (auto it = pp; it != results.end(); ++it) {
	std::cout << "[FAIL] " << it->student_name << "\n";
}