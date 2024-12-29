#pragma once

#include "json.hpp"

namespace uif
{
	class config
	{
	public:
		static bool try_load_json(const std::string& path, nlohmann::json& config);
		static bool try_load_bson(const std::string& path, nlohmann::json& config);

	private:
		static std::ifstream try_find_file(const std::string& path, std::ios::openmode mode);
	};
}