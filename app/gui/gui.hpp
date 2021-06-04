// Copyright (c) 2020 INRA Distributed under the Boost Software License,
// Version 1.0. (See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)

#ifndef ORG_VLEPROJECT_IRRITATOR_APP_GUI_2020
#define ORG_VLEPROJECT_IRRITATOR_APP_GUI_2020

#include <filesystem>
#include <optional>

namespace irt {

// Forward declarations
struct simulation;

void
application_initialize();

bool
application_show();

void
application_shutdown();

void
simulation_run_for(simulation& sim,
                   const long long int duration_in_microseconds,
                   const double end,
                   double& current);

/* Move into internal API */

std::optional<std::filesystem::path>
get_home_directory();

std::optional<std::filesystem::path>
get_executable_directory();

/* Filesytem dialog box */

bool
load_file_dialog(std::filesystem::path& out,
                 const char* title,
                 const char8_t** filters);

bool
save_file_dialog(std::filesystem::path& out,
                 const char* title,
                 const char8_t** filters);

bool
select_directory_dialog(std::filesystem::path& out);

} // namespace irt

#endif
