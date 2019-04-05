#include <string>
#include <utility>
#include <vector>
#include <memory>
#include <iostream>

#include <ssc/sscapi.h>

#include "SAM_api.h"
#include "ErrorHandler.h"
#include "SAM_Pvwattsv5.h"

SAM_EXPORT SAM_Pvwattsv5 SAM_Pvwattsv5_construct(const char* def, SAM_error* err){
	SAM_Pvwattsv5 result = nullptr;
	translateExceptions(err, [&]{
		result = ssc_data_create();
	});
	return result;
}

SAM_EXPORT int SAM_Pvwattsv5_execute(SAM_Pvwattsv5 data, int verbosity, SAM_error* err){
	int n_err = 0;
	translateExceptions(err, [&]{
		n_err += SAM_module_exec("pvwattsv5", data, verbosity, err);
	});
	return n_err;
}


SAM_EXPORT void SAM_Pvwattsv5_destruct(SAM_Pvwattsv5 system)
{
	ssc_data_free(system);
}

SAM_EXPORT void SAM_Pvwattsv5_LocationAndResource_solar_resource_data_tset(SAM_Pvwattsv5 ptr, SAM_table tab, SAM_error *err){
	SAM_table_set_table(ptr, "solar_resource_data", tab, err);
}



SAM_EXPORT void SAM_Pvwattsv5_LocationAndResource_solar_resource_file_sset(SAM_Pvwattsv5 ptr, const char* str, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_string(ptr, "solar_resource_file", str);
	});
}

SAM_EXPORT void SAM_Pvwattsv5_SystemDesign_array_type_fset(SAM_Pvwattsv5 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "array_type", number);
	});
}

SAM_EXPORT void SAM_Pvwattsv5_SystemDesign_azimuth_fset(SAM_Pvwattsv5 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "azimuth", number);
	});
}

SAM_EXPORT void SAM_Pvwattsv5_SystemDesign_batt_simple_enable_fset(SAM_Pvwattsv5 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "batt_simple_enable", number);
	});
}

SAM_EXPORT void SAM_Pvwattsv5_SystemDesign_dc_ac_ratio_fset(SAM_Pvwattsv5 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "dc_ac_ratio", number);
	});
}

SAM_EXPORT void SAM_Pvwattsv5_SystemDesign_gcr_fset(SAM_Pvwattsv5 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "gcr", number);
	});
}

SAM_EXPORT void SAM_Pvwattsv5_SystemDesign_inv_eff_fset(SAM_Pvwattsv5 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "inv_eff", number);
	});
}

SAM_EXPORT void SAM_Pvwattsv5_SystemDesign_losses_fset(SAM_Pvwattsv5 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "losses", number);
	});
}

SAM_EXPORT void SAM_Pvwattsv5_SystemDesign_module_type_fset(SAM_Pvwattsv5 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "module_type", number);
	});
}

SAM_EXPORT void SAM_Pvwattsv5_SystemDesign_shading_azal_mset(SAM_Pvwattsv5 ptr, float* mat, int nrows, int ncols, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_matrix(ptr, "shading:azal", mat, nrows, ncols);
	});
}

SAM_EXPORT void SAM_Pvwattsv5_SystemDesign_shading_diff_fset(SAM_Pvwattsv5 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "shading:diff", number);
	});
}

SAM_EXPORT void SAM_Pvwattsv5_SystemDesign_shading_mxh_mset(SAM_Pvwattsv5 ptr, float* mat, int nrows, int ncols, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_matrix(ptr, "shading:mxh", mat, nrows, ncols);
	});
}

SAM_EXPORT void SAM_Pvwattsv5_SystemDesign_shading_timestep_mset(SAM_Pvwattsv5 ptr, float* mat, int nrows, int ncols, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_matrix(ptr, "shading:timestep", mat, nrows, ncols);
	});
}

SAM_EXPORT void SAM_Pvwattsv5_SystemDesign_system_capacity_fset(SAM_Pvwattsv5 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "system_capacity", number);
	});
}

SAM_EXPORT void SAM_Pvwattsv5_SystemDesign_tilt_fset(SAM_Pvwattsv5 ptr, float number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "tilt", number);
	});
}

SAM_EXPORT SAM_table SAM_Pvwattsv5_LocationAndResource_solar_resource_data_tget(SAM_Pvwattsv5 ptr, SAM_error *err){
	SAM_table result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_table(ptr, "solar_resource_data");
	if (!result)
		make_access_error("SAM_Pvwattsv5", "solar_resource_data");
	});
	return result;
}



SAM_EXPORT const char* SAM_Pvwattsv5_LocationAndResource_solar_resource_file_sget(SAM_Pvwattsv5 ptr, SAM_error *err){
	const char* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_string(ptr, "solar_resource_file");
	if (!result)
		make_access_error("SAM_Pvwattsv5", "solar_resource_file");
	});
	return result;
}



SAM_EXPORT float SAM_Pvwattsv5_SystemDesign_array_type_fget(SAM_Pvwattsv5 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "array_type", &result))
		make_access_error("SAM_Pvwattsv5", "array_type");
	});
	return result;
}



SAM_EXPORT float SAM_Pvwattsv5_SystemDesign_azimuth_fget(SAM_Pvwattsv5 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "azimuth", &result))
		make_access_error("SAM_Pvwattsv5", "azimuth");
	});
	return result;
}



SAM_EXPORT float SAM_Pvwattsv5_SystemDesign_batt_simple_enable_fget(SAM_Pvwattsv5 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "batt_simple_enable", &result))
		make_access_error("SAM_Pvwattsv5", "batt_simple_enable");
	});
	return result;
}



SAM_EXPORT float SAM_Pvwattsv5_SystemDesign_dc_ac_ratio_fget(SAM_Pvwattsv5 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "dc_ac_ratio", &result))
		make_access_error("SAM_Pvwattsv5", "dc_ac_ratio");
	});
	return result;
}



SAM_EXPORT float SAM_Pvwattsv5_SystemDesign_gcr_fget(SAM_Pvwattsv5 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "gcr", &result))
		make_access_error("SAM_Pvwattsv5", "gcr");
	});
	return result;
}



SAM_EXPORT float SAM_Pvwattsv5_SystemDesign_inv_eff_fget(SAM_Pvwattsv5 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "inv_eff", &result))
		make_access_error("SAM_Pvwattsv5", "inv_eff");
	});
	return result;
}



SAM_EXPORT float SAM_Pvwattsv5_SystemDesign_losses_fget(SAM_Pvwattsv5 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "losses", &result))
		make_access_error("SAM_Pvwattsv5", "losses");
	});
	return result;
}



SAM_EXPORT float SAM_Pvwattsv5_SystemDesign_module_type_fget(SAM_Pvwattsv5 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "module_type", &result))
		make_access_error("SAM_Pvwattsv5", "module_type");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvwattsv5_SystemDesign_shading_azal_mget(SAM_Pvwattsv5 ptr, int* nrows, int* ncols, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_matrix(ptr, "shading:azal", nrows, ncols);
	if (!result)
		make_access_error("SAM_Pvwattsv5", "shading:azal");
	});
	return result;
}



SAM_EXPORT float SAM_Pvwattsv5_SystemDesign_shading_diff_fget(SAM_Pvwattsv5 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "shading:diff", &result))
		make_access_error("SAM_Pvwattsv5", "shading:diff");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvwattsv5_SystemDesign_shading_mxh_mget(SAM_Pvwattsv5 ptr, int* nrows, int* ncols, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_matrix(ptr, "shading:mxh", nrows, ncols);
	if (!result)
		make_access_error("SAM_Pvwattsv5", "shading:mxh");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvwattsv5_SystemDesign_shading_timestep_mget(SAM_Pvwattsv5 ptr, int* nrows, int* ncols, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_matrix(ptr, "shading:timestep", nrows, ncols);
	if (!result)
		make_access_error("SAM_Pvwattsv5", "shading:timestep");
	});
	return result;
}



SAM_EXPORT float SAM_Pvwattsv5_SystemDesign_system_capacity_fget(SAM_Pvwattsv5 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "system_capacity", &result))
		make_access_error("SAM_Pvwattsv5", "system_capacity");
	});
	return result;
}



SAM_EXPORT float SAM_Pvwattsv5_SystemDesign_tilt_fget(SAM_Pvwattsv5 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "tilt", &result))
		make_access_error("SAM_Pvwattsv5", "tilt");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvwattsv5_Outputs_ac_aget(SAM_Pvwattsv5 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "ac", length);
	if (!result)
		make_access_error("SAM_Pvwattsv5", "ac");
	});
	return result;
}



SAM_EXPORT float SAM_Pvwattsv5_Outputs_ac_annual_fget(SAM_Pvwattsv5 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "ac_annual", &result))
		make_access_error("SAM_Pvwattsv5", "ac_annual");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvwattsv5_Outputs_ac_monthly_aget(SAM_Pvwattsv5 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "ac_monthly", length);
	if (!result)
		make_access_error("SAM_Pvwattsv5", "ac_monthly");
	});
	return result;
}



SAM_EXPORT float SAM_Pvwattsv5_Outputs_annual_energy_fget(SAM_Pvwattsv5 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "annual_energy", &result))
		make_access_error("SAM_Pvwattsv5", "annual_energy");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvwattsv5_Outputs_aoi_aget(SAM_Pvwattsv5 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "aoi", length);
	if (!result)
		make_access_error("SAM_Pvwattsv5", "aoi");
	});
	return result;
}



SAM_EXPORT float SAM_Pvwattsv5_Outputs_capacity_factor_fget(SAM_Pvwattsv5 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "capacity_factor", &result))
		make_access_error("SAM_Pvwattsv5", "capacity_factor");
	});
	return result;
}



SAM_EXPORT const char* SAM_Pvwattsv5_Outputs_city_sget(SAM_Pvwattsv5 ptr, SAM_error *err){
	const char* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_string(ptr, "city");
	if (!result)
		make_access_error("SAM_Pvwattsv5", "city");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvwattsv5_Outputs_dc_aget(SAM_Pvwattsv5 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "dc", length);
	if (!result)
		make_access_error("SAM_Pvwattsv5", "dc");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvwattsv5_Outputs_dc_monthly_aget(SAM_Pvwattsv5 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "dc_monthly", length);
	if (!result)
		make_access_error("SAM_Pvwattsv5", "dc_monthly");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvwattsv5_Outputs_df_aget(SAM_Pvwattsv5 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "df", length);
	if (!result)
		make_access_error("SAM_Pvwattsv5", "df");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvwattsv5_Outputs_dn_aget(SAM_Pvwattsv5 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "dn", length);
	if (!result)
		make_access_error("SAM_Pvwattsv5", "dn");
	});
	return result;
}



SAM_EXPORT float SAM_Pvwattsv5_Outputs_elev_fget(SAM_Pvwattsv5 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "elev", &result))
		make_access_error("SAM_Pvwattsv5", "elev");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvwattsv5_Outputs_gh_aget(SAM_Pvwattsv5 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "gh", length);
	if (!result)
		make_access_error("SAM_Pvwattsv5", "gh");
	});
	return result;
}



SAM_EXPORT float SAM_Pvwattsv5_Outputs_inverter_efficiency_fget(SAM_Pvwattsv5 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "inverter_efficiency", &result))
		make_access_error("SAM_Pvwattsv5", "inverter_efficiency");
	});
	return result;
}



SAM_EXPORT float SAM_Pvwattsv5_Outputs_inverter_model_fget(SAM_Pvwattsv5 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "inverter_model", &result))
		make_access_error("SAM_Pvwattsv5", "inverter_model");
	});
	return result;
}



SAM_EXPORT float SAM_Pvwattsv5_Outputs_kwh_per_kw_fget(SAM_Pvwattsv5 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "kwh_per_kw", &result))
		make_access_error("SAM_Pvwattsv5", "kwh_per_kw");
	});
	return result;
}



SAM_EXPORT float SAM_Pvwattsv5_Outputs_lat_fget(SAM_Pvwattsv5 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "lat", &result))
		make_access_error("SAM_Pvwattsv5", "lat");
	});
	return result;
}



SAM_EXPORT const char* SAM_Pvwattsv5_Outputs_location_sget(SAM_Pvwattsv5 ptr, SAM_error *err){
	const char* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_string(ptr, "location");
	if (!result)
		make_access_error("SAM_Pvwattsv5", "location");
	});
	return result;
}



SAM_EXPORT float SAM_Pvwattsv5_Outputs_lon_fget(SAM_Pvwattsv5 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "lon", &result))
		make_access_error("SAM_Pvwattsv5", "lon");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvwattsv5_Outputs_monthly_energy_aget(SAM_Pvwattsv5 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "monthly_energy", length);
	if (!result)
		make_access_error("SAM_Pvwattsv5", "monthly_energy");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvwattsv5_Outputs_poa_aget(SAM_Pvwattsv5 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "poa", length);
	if (!result)
		make_access_error("SAM_Pvwattsv5", "poa");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvwattsv5_Outputs_poa_monthly_aget(SAM_Pvwattsv5 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "poa_monthly", length);
	if (!result)
		make_access_error("SAM_Pvwattsv5", "poa_monthly");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvwattsv5_Outputs_shad_beam_factor_aget(SAM_Pvwattsv5 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "shad_beam_factor", length);
	if (!result)
		make_access_error("SAM_Pvwattsv5", "shad_beam_factor");
	});
	return result;
}



SAM_EXPORT float SAM_Pvwattsv5_Outputs_solrad_annual_fget(SAM_Pvwattsv5 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "solrad_annual", &result))
		make_access_error("SAM_Pvwattsv5", "solrad_annual");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvwattsv5_Outputs_solrad_monthly_aget(SAM_Pvwattsv5 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "solrad_monthly", length);
	if (!result)
		make_access_error("SAM_Pvwattsv5", "solrad_monthly");
	});
	return result;
}



SAM_EXPORT const char* SAM_Pvwattsv5_Outputs_state_sget(SAM_Pvwattsv5 ptr, SAM_error *err){
	const char* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_string(ptr, "state");
	if (!result)
		make_access_error("SAM_Pvwattsv5", "state");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvwattsv5_Outputs_sunup_aget(SAM_Pvwattsv5 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "sunup", length);
	if (!result)
		make_access_error("SAM_Pvwattsv5", "sunup");
	});
	return result;
}



SAM_EXPORT float SAM_Pvwattsv5_Outputs_system_use_lifetime_output_fget(SAM_Pvwattsv5 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "system_use_lifetime_output", &result))
		make_access_error("SAM_Pvwattsv5", "system_use_lifetime_output");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvwattsv5_Outputs_tamb_aget(SAM_Pvwattsv5 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "tamb", length);
	if (!result)
		make_access_error("SAM_Pvwattsv5", "tamb");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvwattsv5_Outputs_tcell_aget(SAM_Pvwattsv5 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "tcell", length);
	if (!result)
		make_access_error("SAM_Pvwattsv5", "tcell");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvwattsv5_Outputs_tpoa_aget(SAM_Pvwattsv5 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "tpoa", length);
	if (!result)
		make_access_error("SAM_Pvwattsv5", "tpoa");
	});
	return result;
}



SAM_EXPORT float SAM_Pvwattsv5_Outputs_ts_shift_hours_fget(SAM_Pvwattsv5 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "ts_shift_hours", &result))
		make_access_error("SAM_Pvwattsv5", "ts_shift_hours");
	});
	return result;
}



SAM_EXPORT float SAM_Pvwattsv5_Outputs_tz_fget(SAM_Pvwattsv5 ptr, SAM_error *err){
	float result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "tz", &result))
		make_access_error("SAM_Pvwattsv5", "tz");
	});
	return result;
}



SAM_EXPORT float* SAM_Pvwattsv5_Outputs_wspd_aget(SAM_Pvwattsv5 ptr, int* length, SAM_error *err){
	float* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "wspd", length);
	if (!result)
		make_access_error("SAM_Pvwattsv5", "wspd");
	});
	return result;
}



