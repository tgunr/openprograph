/* A VPL Project Header File */
/*

CE IDE Project
Copyright: 2004 Andescotia LLC

*/

#ifndef CEIDEPROJECT
#define CEIDEPROJECT
#include <MartenEngine/MartenEngine.h>

extern Int4 VPLP_abort_2D_processing( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_advance_2D_stack( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_archive_2D_to_2D_value( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_bundle_2D_primitives( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_clear_2D_watchpoints( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_create_2D_class( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_create_2D_environment( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_create_2D_method( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_create_2D_persistent( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_dispose_2D_attribute( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_dispose_2D_case( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_dispose_2D_environment( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_dispose_2D_operation( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_dispose_2D_root( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_dispose_2D_terminal( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_finalize_2D_stack( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_find_2D_operations( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_get_2D_class_2D_instance( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_get_2D_constant_2D_info( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_get_2D_current_2D_operation( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_get_2D_debug_2D_window( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_get_2D_element_2D_integer( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_get_2D_element_2D_value( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_get_2D_errors( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_get_2D_io_2D_value( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_get_2D_method_2D_arity( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_get_2D_post_2D_load( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_get_2D_primitive_2D_arity( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_get_2D_primitive_2D_info( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_get_2D_procedure_2D_arity( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_get_2D_procedure_2D_info( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_get_2D_structure_2D_info( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_get_2D_value_2D_archive( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_get_2D_value_2D_class_2D_name( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_get_2D_value_2D_decrement( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_get_2D_value_2D_increment( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_get_2D_value_2D_list( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_get_2D_value_2D_mark( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_get_2D_value_2D_string( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_get_2D_value_2D_type( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_get_2D_watchpoint( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_get_2D_watchpoints( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_has_2D_instances_3F_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_initialize_2D_stack( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_insert_2D_attribute( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_insert_2D_case( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_insert_2D_operation( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_insert_2D_root( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_insert_2D_terminal( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_list_2D_to_2D_value( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_load_2D_bundle( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_mark_2D_instances( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_null_2D_errors( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_order_2D_attributes( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_order_2D_cases( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_order_2D_inputs( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_order_2D_operations( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_order_2D_outputs( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_post_2D_load( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_previous_2D_stack( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_remove_2D_class( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_remove_2D_method( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_remove_2D_persistent( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_rename_2D_attribute( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_rename_2D_class( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_rename_2D_method( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_rename_2D_persistent( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_resources_2D_changed( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_set_2D_class( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_set_2D_current_2D_operation( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_set_2D_debug_2D_window( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_set_2D_element_2D_value( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_set_2D_frame_2D_breakpoint( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_set_2D_instance_2D_attribute_2D_value( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_set_2D_io_2D_value( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_set_2D_method( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_set_2D_operation( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_set_2D_post_2D_load( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_set_2D_root( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_set_2D_step_2D_out( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_set_2D_terminal( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_set_2D_watchpoint( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_step_2D_environment( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_string_2D_to_2D_value( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_unarchive_2D_value( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_unmark_2D_heap( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_value_2D_to_2D_value( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_marten_2D_info( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP__213D_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP__22_bytes_22_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP__22_in_22_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP__22_join_22_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP__22_length_22_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP__22_reverse_22_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP__28_in_29_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP__28_join_29_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP__28_length_29_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP__2A_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP__2A2A_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP__2B_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP__2B2B_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP__2B_1( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP__2D_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP__2D2D_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP__2D_1( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP__3C_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP__3C3D_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP__3D_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP__3E_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP__3E3D_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_abs( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_acos( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_address_2D_to_2D_object( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_ancestors( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_and( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_archive_2D_to_2D_list( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_archive_2D_to_2D_object( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_asin( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_atan( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_attach_2D_l( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_attach_2D_r( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_attributes( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_bit_2D_and( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_bit_2D_not( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_bit_2D_or( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_bit_2D_shift_2D_l( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_bit_2D_shift_2D_r( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_bit_2D_xor( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_boolean_3F_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_byte_2D_in( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_byte_2D_length( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_byte_2D_middle( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_byte_2D_prefix( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_byte_2D_suffix( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_bytes_2D_to_2D_string( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_call( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_call_2D_external( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_callback( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_children( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_choose( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_classes( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_compiled_3F_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_copy( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_cos( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_cosh( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_debug_2D_object( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_descendants( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_detach_2D_l( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_detach_2D_nth( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_detach_2D_r( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_dispose_2D_callback( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_div( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_equals( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_external_2D_level( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_external_2D_size( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_external_2D_type( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_external_3F_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_fclose( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_fgets( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_find_2D_instance( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_find_2D_sorted( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_fopen( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_format( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_from_2D_ascii( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_from_2D_pointer( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_from_2D_string( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_function_2D_pointer( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_get_2D_block( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_get_2D_integer( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_get_2D_nth( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_get_2D_real( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_get_2D_retain_2D_count( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_get_2D_text( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_gets( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_gt( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_gte( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_has_2D_class_3F_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_has_2D_procedure_3F_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_idiv( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_iminus( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_insert_2D_nth( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_inst_2D_to_2D_list( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_instance_3F_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_instances( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_integer_2D_to_2D_pointer( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_integer_2D_to_2D_string( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_integer_3F_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_iplus( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_is_2D_alnum( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_itimes( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_join_2D_text( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_list_2D_to_2D_inst( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_list_2D_to_2D_list( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_list_3F_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_log_2D_error( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_log_2D_string( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_log_2D_string_2D_return( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_lowercase( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_lt( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_lte( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_make_2D_external( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_make_2D_list( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_max( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_methods( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_middle( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_min( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_minus( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_minus_2D_one( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_not( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_number_3F_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_object_2D_to_2D_address( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_object_2D_to_2D_archive( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_or( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_pack( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_parent( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_persistents( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_pi( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_plus( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_plus_2D_one( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_pointer_2D_to_2D_integer( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_pointer_2D_to_2D_string( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_power( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_prefix( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_print( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_print_2D_line( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_put_2D_block( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_put_2D_integer( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_put_2D_real( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_put_2D_text( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_rand( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_rand_2D_seed( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_real_3F_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_release_2D_object( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_retain_2D_object( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_reverse( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_round( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_round_2D_down( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_round_2D_up( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_set_2D_external_2D_type( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_set_2D_nth( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_set_2D_nth_21_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_shallow_2D_copy( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_sin( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_sinh( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_sizeof( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_sort( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_split_2D_nth( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_sqrt( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_stdio_2D_pointer( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_string_2D_address( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_string_2D_to_2D_base( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_string_2D_to_2D_bytes( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_string_2D_to_2D_integer( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_string_2D_to_2D_pointer( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_string_3F_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_suffix( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_switch_2D_to_2D_editor( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_system_2D_used( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_tan( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_tanh( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_test_2D_all_3F_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_test_2D_bit_3F_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_test_2D_one_3F_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_times( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_to_2D_ascii( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_to_2D_external_2D_constant( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_to_2D_pointer( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_to_2D_string( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_trunc( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_type( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_unpack( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_uppercase( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_xor( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP__7E3D_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP__C3B7_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP__C3B7C3B7_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP__CF80_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP__E289A0_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP__22_in_2D_relative_22_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_RGB_2D_back_2D_color( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_RGB_2D_fore_2D_color( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_clip_2D_rect( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_close_2D_rgn( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_cnstring_2D_to_2D_exstring( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_cnstringdec_2D_to_2D_exstring( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_copy_2D_object( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_copy_2D_rgn( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_delete_2D_object( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_diff_2D_rgn( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_dispose_2D_rgn( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_draw_2D_string( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_erase_2D_arc( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_erase_2D_oval( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_erase_2D_rect( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_erase_2D_rgn( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_erase_2D_round_2D_rect( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_exstring_2D_to_2D_cnstring( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_exstring_2D_to_2D_cnstringdec( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_exstring_2D_to_2D_instring( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_extract_2D_file_2D_specification( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_flush_2D_front_2D_window( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_frame_2D_arc( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_frame_2D_oval( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_frame_2D_rect( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_frame_2D_rgn( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_frame_2D_round_2D_rect( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_get_2D_alist_2D_pref( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_get_2D_font_2D_number( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_get_2D_mouse( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_get_2D_pen_2D_state( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_get_2D_scrap( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_global_2D_to_2D_local( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_inset_2D_rect( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_instring_2D_to_2D_exstring( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_ints_2D_to_2D_Point( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_ints_2D_to_2D_Rect( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_ints_2D_to_2D_point( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_ints_2D_to_2D_rect( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_inval_2D_rect( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_invert_2D_rgn( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_line_2D_to( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_make_2D_file_2D_specification( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_make_2D_icon_2D_content_2D_info( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_move_2D_file( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_move_2D_to( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_new_2D_rgn( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_offset_2D_rect( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_open_2D_rgn( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_paint_2D_arc( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_paint_2D_oval( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_paint_2D_rect( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_paint_2D_rgn( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_paint_2D_round_2D_rect( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_pascal_2D_to_2D_string( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_pen_2D_drag( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_pen_2D_normal( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_pen_2D_stripe( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_pt_2D_in_2D_rect( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_pt_2D_to_2D_angle( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_put_2D_scrap( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_scan_2D_folder( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_scroll_2D_rect( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_sect_2D_rect( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_sect_2D_rgn( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_set_2D_alist_2D_pref( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_set_2D_origin( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_set_2D_pen_2D_state( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_still_2D_down( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_string_2D_to_2D_pascal( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_string_2D_width( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_te_2D_get_2D_text( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_test_2D_key( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_text_2D_face( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_text_2D_font( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_text_2D_size( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_thread_2D_command( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_union_2D_rgn( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_valid_2D_rect( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_vpx_2D_folder_2D_fsspecs( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_vpx_2D_get_2D_folder( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_Point_2D_to_2D_list( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_RGB_2D_to_2D_list( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_Rect_2D_to_2D_list( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_answer( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_answer_2D_v( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_ask( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_ask_2D_text( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_ask_2D_value( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_close_2D_file( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_create_2D_object_2D_file( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_create_2D_text_2D_file( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_delete_2D_file( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_folder_2D_fsspecs( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_get_2D_file( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_get_2D_folder( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_list_2D_to_2D_Point( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_list_2D_to_2D_RGB( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_list_2D_to_2D_Rect( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_open_2D_file( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_put_2D_file( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_read_2D_buffer( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_read_2D_object( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_read_2D_text( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_select( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_show( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_write_2D_object( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_write_2D_text( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
enum opTrigger vpx_method_MAIN(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Get_20_Application(V_Environment, enum boolType *, Nat4,V_Object *);
enum opTrigger vpx_method_Quit_20_Application(V_Environment, enum boolType *, Nat4);
enum opTrigger vpx_method_Application_2F_Main(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Application_2F_Open(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Application_2F_Run(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Application_2F_Quit(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Application_2F_Close(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Application_2F_Get_20_Service_20_Manager(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Application_2F_Set_20_Service_20_Manager(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Application_2F_Get_20_Exit_20_Result_20_Code(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Application_2F_Set_20_Exit_20_Result_20_Code(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Application_2F_Get_20_Quitting_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Application_2F_Set_20_Quitting_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Application_2F_Open_20_Globals(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Application_2F_Open_20_Environment(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Application_2F_Open_20_Services(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Application_2F_Open_20_Local(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Application_2F_Close_20_Local(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Application_2F_Close_20_Services(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Application_2F_Close_20_Environment(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Application_2F_Close_20_Globals(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Application_2F_CE_20_Handle_20_Event(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Application_2F_CE_20_HICommand_20_Process(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Application_2F_CE_20_HICommand_20_Update_20_Status(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Application_2F_HICommand_20_App_20_Custom(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Application_2F_HICommand_20_New(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Application_2F_HICommand_20_About(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Application_2F_HICommand_20_Preferences(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Application_2F_HICommand_20_Open(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Application_2F_HICommand_20_Quit(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Application_2F_Get_20_Signature(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Application_2F_AE_20_Open_20_Application(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Application_2F_AE_20_Reopen_20_Application(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Application_2F_AE_20_Open_20_Documents(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Make_20_Clone(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Make_20_Class(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Make_20_Count(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_To_20_CString(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_To_20_PString(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Create_20_Nib_20_Window(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_Open_20_Nib_20_Window(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_Rect_20_Size(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Boolean_20_To_20_Integer(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Integer_20_To_20_Boolean(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Coerce_20_Boolean(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Coerce_20_Integer(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Coerce_20_Real(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Coerce_20_Number(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Replace_20_NULL(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Replace_20_NULL_20_No_20_Copy(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method__22_Check_22_(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method__22_Prefix_22_(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method__22_Split_20_At_22_(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *,V_Object *,V_Object *);
enum opTrigger vpx_method__22_Suffix_22_(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method__22_Trim_22_(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method__22_LTrim_22_(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method__22_RTrim_22_(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method__22_Parse_22_(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method__2822_All_20_In_2229_(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method__2822_ALL_20_IN_2229_(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method__28_Average_29_(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method__28_Check_29_(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method__28_Check_20_Bounds_29_(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method__28_Ends_29_(V_Environment, enum boolType *, Nat4,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method__28_Flatten_29_(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method__28_From_20_String_29_(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method__28_One_29_(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method__28_Safe_20_Get_29_(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method__28_Safe_20_Set_2129_(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method__28_Safe_20_Split_29_(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method__28_Sum_29_(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method__28_To_20_Block_29_(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method__28_To_20_String_29_(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method__28_Without_29_(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method__28_Detach_20_Item_29_(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_Default_20_Zero(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Default_20_TRUE(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Default_20_FALSE(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Default_20_NULL(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Default_20_List(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Is_20_MacOS_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Beep(V_Environment, enum boolType *, Nat4);
enum opTrigger vpx_method_Speak(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Simple_20_Speak(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Between(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Between_20_Bounds(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Between_20_Wrap(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Random_20_Between(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Flip_20_Coin(V_Environment, enum boolType *, Nat4,V_Object *);
enum opTrigger vpx_method_Roll_20_Dice(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Rad_20_To_20_Deg(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Deg_20_To_20_Rad(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_test_2D_bit_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_bit_2D_without(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_Half(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Int(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Odd_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_x_2A_pi(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Unique_20_Name_20_From_20_List(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method__28_Get_20_Setting_29_(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method__28_Set_20_Setting_29_(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method__28_Remove_20_Setting_29_(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_New_20_Callback(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Add_20_Attachment_20_To_20_Callback(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Execute_20_Callback(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Execute_20_Callback_20_With_20_Attachments(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method__28_Unique_29_(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Is_20_Or_20_Is_20_Descendant_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method__22_Replace_22_(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Get_20_Return_20_String(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Normalize_20_Returns_20_In_20_String(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Parse_20_Returns_20_Into_20_List(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Get_20_External_20_Constant(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method__28_bit_2D_or_29_(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Key_20_Sort_20_Helper_2F_Sort_20_Key_20_Helper_20_List(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Key_20_Sort_20_Helper_2F_Sort_20_Key_2D_Value_20_List(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Key_20_Sort_20_Helper_2F_Sort_20_Instances_20_With_20_Key_20_Method(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_INFO_3A20_SizeOf_20_Structure(V_Environment, enum boolType *, Nat4);
enum opTrigger vpx_method_Create_20_Block_20_Type(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Block_20_Allocate(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Block_20_Free(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Block_20_Size(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Block_20_Copy(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Block_20_Array_20_New(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Block_20_Array_20_To_20_List(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_New_20_UInt8(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_New_20_UInt16(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_New_20_UInt32(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_New_20_Integer_20_Block(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_New_20_Integer_20_Block_20_Type(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Get_20_UInt8(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_Get_20_UInt16(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_Get_20_UInt32(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_Get_20_SInt8(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_Get_20_SInt16(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_Get_20_SInt32(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_Put_20_UInt32(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Put_20_UInt16(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Put_20_UInt8(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Unsign_20_Integer(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Coerce_20_Pointer(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_To_20_Point(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Point_2F_Get_20_X(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Point_2F_Get_20_Y(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Point_2F_Get_20_X_20_Int(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Point_2F_Get_20_Y_20_Int(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Point_2F_Set_20_X(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Point_2F_Set_20_Y(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Point_2F_New_20_With_20_Points(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Point_2F_Add(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Point_2F_Subtract(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Point_2F_Multiply(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Point_2F_Divide(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Point_2F_Get_20_QDPoint(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Point_2F_Get_20_CGPoint(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Point_2F_Get_20_CGSize(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Get_20_Service_20_Manager(V_Environment, enum boolType *, Nat4,V_Object *);
enum opTrigger vpx_method_Find_20_Service(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Service_20_Manager_2F_Open(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Service_20_Manager_2F_Get_20_Initial_20_Services(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Service_20_Manager_2F_Get_20_Active_20_Services(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Service_20_Manager_2F_Get_20_Services(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Service_20_Manager_2F_Set_20_Services(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Service_20_Manager_2F_Find_20_Service_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Service_20_Manager_2F_Begin_20_Service(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Service_20_Manager_2F_Finish_20_Service(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Service_20_Manager_2F_Load_20_Service(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Service_20_Manager_2F_Initialize(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Service_20_Manager_2F_Close(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Service_20_Abstract_2F_Begin(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Service_20_Abstract_2F_Close(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Service_20_Abstract_2F_Create(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Service_20_Abstract_2F_Dispose(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Service_20_Abstract_2F_Finish(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Service_20_Abstract_2F_Get_20_Active_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Service_20_Abstract_2F_Get_20_Initial_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Service_20_Abstract_2F_Get_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Service_20_Abstract_2F_Get_20_Required_20_Services(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Service_20_Abstract_2F_Get_20_Type(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Service_20_Abstract_2F_Initialize(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Service_20_Abstract_2F_Load_20_Required_20_Services(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Service_20_Abstract_2F_Open(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Service_20_Abstract_2F_Set_20_Active_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Service_20_Abstract_2F_Set_20_Initial_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Service_20_Abstract_2F_Set_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Service_20_Abstract_2F_Set_20_Required_20_Services(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Debug_20_Init(V_Environment, enum boolType *, Nat4);
enum opTrigger vpx_method_Debug_20_Detect_20_Verbosity(V_Environment, enum boolType *, Nat4);
enum opTrigger vpx_method_Debug_20_OSError(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Debug_20_Console(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Debug_20_Finish(V_Environment, enum boolType *, Nat4);
enum opTrigger vpx_method_Debug_20_Verbosity_20_Level_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Debug_20_Result(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Debug_20_Value(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Debug_20_Unimp(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Run_20_Test_20_Tool(V_Environment, enum boolType *, Nat4);
enum opTrigger vpx_method_Set_20_Cursor(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Set_20_Arrow_20_Cursor(V_Environment, enum boolType *, Nat4);
enum opTrigger vpx_method_Get_20_Desktop(V_Environment, enum boolType *, Nat4,V_Object *);
enum opTrigger vpx_method_Get_20_Desktop_20_Windows(V_Environment, enum boolType *, Nat4,V_Object *);
enum opTrigger vpx_method_Desktop_20_Service_2F_Initialize(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Desktop_20_Service_2F_Add_20_Window(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Desktop_20_Service_2F_Close(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Desktop_20_Service_2F_Find_20_Window(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Desktop_20_Service_2F_Remove_20_Window(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Desktop_20_Service_2F_Get_20_Windows(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Desktop_20_Service_2F_Find_20_Windows_20_Type(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Desktop_20_Service_2F_Find_20_Windows_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Desktop_20_Service_2F_Delete_20_Quit_20_Now(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Desktop_20_Service_2F_Add_20_Quit_20_Now(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Desktop_20_Service_2F_Create_20_Menu_20_Bar(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Desktop_20_Service_2F_Close_20_Menu_20_Bar(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_20_Service_2F_Find_20_Command_20_ID(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_20_Service_2F_Do_20_Command_20_ID(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_20_Service_2F_Find_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_20_Service_2F_Do_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_20_Service_2F_Fill_20_Menu(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_20_Service_2F_Open(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_20_Service_2F_Close(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_20_Service_2F_Get_20_Base_20_Command_20_ID(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_20_Service_2F_Get_20_Plug_20_Ins(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_20_Service_2F_Set_20_Plug_20_Ins(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_20_Service_2F_Fill_20_Help_20_Menu(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_20_Service_2F_Clear_20_Help_20_Menu(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_2F_Do_20_Selector(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_2F_Create_20_From_20_CFURL(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_2F_Load_20_Type(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_2F_Load_20_Info(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_2F_Create_20_Menu_20_Item(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_2F_Default_20_Keys(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_2F_Match_20_Type(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_2F_Get_20_Bundle(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_2F_Set_20_Bundle(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_2F_Get_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_2F_Set_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_2F_Get_20_Description(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_2F_Set_20_Description(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_2F_Get_20_Icon(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_2F_Set_20_Icon(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_2F_Get_20_Type(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_2F_Get_20_Command_20_ID(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_2F_Set_20_Command_20_ID(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_2F_Get_20_Base_20_Command_20_ID(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Marten_20_Selection_20_Open_20_URL_2F_Do_20_Selector(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Marten_20_Selection_20_Open_20_URL_2F_Load_20_Info(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Marten_20_Selection_20_Open_20_URL_2F_Get_20_Term(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Marten_20_Selection_20_Open_20_URL_2F_Set_20_Term(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Marten_20_Selection_20_Search_20_Info_2F_Do_20_Selector(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Marten_20_Selection_20_Run_20_Script_2F_Do_20_Selector(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Marten_20_Selection_20_Run_20_Script_2F_Load_20_Info(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Marten_20_Selection_20_Run_20_Script_2F_Get_20_Script(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Marten_20_Selection_20_Run_20_Script_2F_Set_20_Script(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Marten_20_Selection_20_Run_20_Script_2F_Get_20_Component_20_Type(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Marten_20_Selection_20_Run_20_Script_2F_Set_20_Component_20_Type(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Method_20_Call_2F_Call(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Method_20_Call_2F_Call_20_Failed(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Method_20_Call_2F_Process_20_Input_20_Specifiers(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Method_20_Call_2F_Process_20_Output_20_Specifiers(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Method_20_Call_2F_Get_20_Output_20_Count(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Method_20_Call_2F_Get_20_Method_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Method_20_Call_2F_Get_20_Input_20_Specifiers(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Method_20_Call_2F_Get_20_Output_20_Specifiers(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Method_20_Call_2F_Open(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Method_20_Call_2F_Close(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Method_20_Call_2F_Get_20_Owner(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Method_20_Call_2F_Set_20_Owner(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Method_20_Call_2F_Get_20_Attachments(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Method_20_Call_2F_Set_20_Attachments(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Method_20_Call_2F_Get_20_Attachment_20_Value(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Method_20_Call_2F_Set_20_Attachment_20_Value(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Specifier_2F_Get_20_Value(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Specifier_2F_Set_20_Value(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Specifier_2F_Process_20_Input(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Specifier_2F_Process_20_Output(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Input_20_Specifier_2F_Process_20_Input(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Universal_20_Method_20_Input_20_Specifier_2F_Process_20_Input(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Output_20_Specifier_2F_Process_20_Output(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Attribute_20_Input_20_Specifier_2F_Process_20_Input(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Attribute_20_Output_20_Specifier_2F_Process_20_Output(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Attachment_20_Specifier_2F_Process_20_Input(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Attachment_20_Specifier_2F_Process_20_Output(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Attribute_20_Specifier_2F_Process_20_Input(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Attribute_20_Specifier_2F_Process_20_Output(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Method_20_Callback_2F_Open(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Method_20_Callback_2F_Open_20_Callback(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Method_20_Callback_2F_Open_20_UPP(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Method_20_Callback_2F_Install_20_Callback(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Method_20_Callback_2F_Remove_20_Callback(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Method_20_Callback_2F_Close_20_UPP(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Method_20_Callback_2F_Close_20_Callback(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Method_20_Callback_2F_Close(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Method_20_Callback_2F_Get_20_Callback_20_Method_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Method_20_Callback_2F_Get_20_ProcPtr_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Method_20_Callback_2F_Get_20_Callback_20_Pointer(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Method_20_Callback_2F_Get_20_UPP_20_Pointer(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Method_20_Callback_2F_Set_20_UPP_20_Pointer(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Method_20_Callback_2F_Set_20_Callback_20_Pointer(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Method_20_Callback_2F_Set_20_ProcPtr_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Method_20_Callback_2F_Set_20_Callback_20_Method_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Method_20_Callback_2F_Do_20_Callback(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Method_20_Callback_2F_Do_20_Callback_20_No_20_Result(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Method_20_Callback_2F_Get_20_Callback_20_Result(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Method_20_Callback_2F_Set_20_Callback_20_Result(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Method_20_Callback_2F_Open_20_Pointer(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Method_20_Callback_2F_Get_20_UPP_20_Allocate(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Method_20_Callback_2F_Set_20_UPP_20_Allocate(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Method_20_Callback_2F_Get_20_UPP_20_Dispose(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Method_20_Callback_2F_Set_20_UPP_20_Dispose(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Method_20_Callback_2F_Get_20_Parameter_20_List_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Old_20_Apple_20_Event_20_Callback_2F_Do_20_AE_20_Callback(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Old_20_Apple_20_Event_20_Callback_2F_Install_20_Callback(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Old_20_Apple_20_Event_20_Callback_2F_Remove_20_Callback(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Old_20_Apple_20_Event_20_Callback_2F_Get_20_Event_20_Class(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Old_20_Apple_20_Event_20_Callback_2F_Get_20_Event_20_ID(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Old_20_Apple_20_Event_20_Callback_2F_Set_20_Event_20_ID(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Old_20_Apple_20_Event_20_Callback_2F_Set_20_Event_20_Class(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Old_20_Apple_20_Event_20_Callback_2F_Use_20_Parameters(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Old_20_Apple_20_Event_20_Callback_2F_Clean_20_Up_20_Parameters(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Old_20_Apple_20_Event_20_Callback_2F_Get_20_Parameter_20_List_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Old_20_Apple_20_Event_20_Callback_2F_xOpen_20_UPP(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Old_20_Apple_20_Event_20_Callback_2F_xClose_20_UPP(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Get_20_Event_20_Service(V_Environment, enum boolType *, Nat4,V_Object *);
enum opTrigger vpx_method_Yield_20_To_20_Thread(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Get_20_Current_20_Thread_20_ID(V_Environment, enum boolType *, Nat4,V_Object *);
enum opTrigger vpx_method_Event_20_Service_2F_Initialize(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Event_20_Service_2F_Get_20_Event_20_Handlers(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Event_20_Service_2F_Close(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Event_20_Service_2F_Run_20_Main_20_Event_20_Loop(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Event_20_Service_2F_Quit_20_Main_20_Event_20_Loop(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Event_20_Service_2F_Dispatch_20_Event(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Event_20_Service_2F_Dispatch_20_Thread(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPLIDE_20_Event_20_Service_2F_Run_20_Main_20_Event_20_Loop(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLIDE_20_Event_20_Service_2F_Dispatch_20_Event(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLIDE_20_Event_20_Service_2F_Dispatch_20_Thread(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPLIDE_20_Event_20_Service_2F_Initialize(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_From_20_AEDesc(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_AEDesc_20_Copy_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_To_20_AEDesc(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Apple_20_Event_2F_New(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Apple_20_Event_2F_Dispose(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Apple_20_Event_2F_Get_20_Attribute_20_AEDesc(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_Apple_20_Event_2F_Get_20_Attribute(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Apple_20_Event_2F_Get_20_Parameter_20_AEDesc(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_Apple_20_Event_2F_Get_20_Parameter(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Apple_20_Event_2F_Get_20_Reply_20_Parameter_20_AEDesc(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_Apple_20_Event_2F_Get_20_Reply_20_Parameter(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Apple_20_Event_2F_Get_20_Error(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Apple_20_Event_2F_Set_20_Error(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Apple_20_Event_2F_Get_20_Direct_20_Object(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Apple_20_Event_2F_Set_20_Reply_20_Parameter_20_AEDesc(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Apple_20_Event_2F_Set_20_Reply_20_Parameter(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Apple_20_Event_2F_Set_20_Parameter_20_AEDesc(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Apple_20_Event_2F_Set_20_Parameter(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_AE_20_Descriptor_2F_From_20_AEDesc_20_Type(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_AE_20_Descriptor_2F_Coerce_20_AEDesc(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_AE_20_Descriptor_2F_Create_20_AEDesc(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_AE_20_Descriptor_2F_New(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_AE_20_Descriptor_2F_Put_20_Parameter_20_Desc(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_AE_20_Descriptor_2F_Get_20_AEDesc(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_AE_20_Descriptor_2F_Set_20_AEDesc(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_AE_20_Descriptor_2F_Get_20_Type(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_AE_20_Descriptor_2F_Set_20_Type(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_AE_20_Descriptor_2F_Get_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_AE_20_Descriptor_2F_Set_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_AE_20_Descriptor_2F_Get_20_Key(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_AE_20_Descriptor_2F_Set_20_Key(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_AE_20_Descriptor_2F_Dispose(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Apple_20_Event_20_Callback_2F_Do_20_AE_20_Callback(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Apple_20_Event_20_Callback_2F_Install_20_Callback(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Apple_20_Event_20_Callback_2F_Remove_20_Callback(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Apple_20_Event_20_Callback_2F_Get_20_Event_20_Class(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Apple_20_Event_20_Callback_2F_Get_20_Event_20_ID(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Apple_20_Event_20_Callback_2F_Set_20_Event_20_ID(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Apple_20_Event_20_Callback_2F_Set_20_Event_20_Class(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Apple_20_Event_20_Callback_2F_Use_20_Parameters(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Apple_20_Event_20_Callback_2F_Clean_20_Up_20_Parameters(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Apple_20_Event_20_Callback_2F_Get_20_Parameter_20_List_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_AEParam_20_Specifier_2F_Process_20_Input(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_AEParam_20_Specifier_2F_Process_20_Output(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_AE_20_Send_2F_New(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_AE_20_Send_2F_Send_20_No_20_Reply(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_AE_20_Send_2F_Send_20_Wait_20_Reply(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_AE_20_Send_2F_Create_20_Event(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_AE_20_Send_2F_Dispose(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_AE_20_Send_2F_Get_20_Class(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_AE_20_Send_2F_Set_20_Class(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_AE_20_Send_2F_Get_20_ID(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_AE_20_Send_2F_Set_20_ID(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_AE_20_Send_2F_Get_20_Target(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_AE_20_Send_2F_Set_20_Target(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_AE_20_Send_2F_Get_20_Return_20_ID(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_AE_20_Send_2F_Set_20_Return_20_ID(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_AE_20_Send_2F_Get_20_Transaction_20_ID(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_AE_20_Send_2F_Set_20_Transaction_20_ID(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_AE_20_Send_2F_Get_20_Event_20_Parameters(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_AE_20_Send_2F_Set_20_Event_20_Parameters(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_AE_20_Send_2F_Test(V_Environment, enum boolType *, Nat4);
enum opTrigger vpx_method_AE_20_Send_2F_TEST_20_Raw_20_Quit(V_Environment, enum boolType *, Nat4);
enum opTrigger vpx_method_AE_20_Send_2F7E_AE_20_Idle(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_AE_20_Target_2F_New_20_From_20_Identifier(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_AE_20_Target_2F_New_20_From_20_Signature(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_AE_20_Target_2F_New_20_From_20_PSN(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_AE_20_Target_2F_New_20_From_20_AEDesc(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_AE_20_Target_2F_Create_20_Send_20_Event(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_AE_20_Target_2F_Dispose(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_AE_20_Target_2F_Get_20_Target_20_AEDesc(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_AE_20_Target_2F_Set_20_Target_20_AEDesc(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_AE_20_Target_2F_AE_20_Quit_20_Application(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_AE_20_Target_2F_TEST_20_AE_20_Quit(V_Environment, enum boolType *, Nat4);
enum opTrigger vpx_method_Simple_20_Run_20_OSA(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_OSA_20_Compile_2F_New(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_OSA_20_Compile_2F_Open(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_OSA_20_Compile_2F_Close(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_OSA_20_Compile_2F_Simple_20_Run_20_OSA(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_OSA_20_Compile_2F_Open_20_Component(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_OSA_20_Compile_2F_Compile_20_Text(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_OSA_20_Compile_2F_Compile(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_OSA_20_Compile_2F_Execute(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_OSA_20_Compile_2F_Extract_20_Error_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_OSA_20_Compile_2F_Get_20_Original_20_Text(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_OSA_20_Compile_2F_Set_20_Original_20_Text(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_OSA_20_Compile_2F_Get_20_Component_20_Type(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_OSA_20_Compile_2F_Set_20_Component_20_Type(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_OSA_20_Compile_2F_TEST_20_Script(V_Environment, enum boolType *, Nat4,V_Object *);
enum opTrigger vpx_method_OSA_20_Compile_2F_TEST(V_Environment, enum boolType *, Nat4);
enum opTrigger vpx_method_Execute_20_Callback_20_Deferred(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_TEST_20_Execute_20_Deferred(V_Environment, enum boolType *, Nat4);
enum opTrigger vpx_method_Dispatch_20_Event(V_Environment, enum boolType *, Nat4);
enum opTrigger vpx_method_Execute_20_Idle_20_Callback_20_Deferred(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Process_20_HICommand(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_EventRef_2F_Dispose(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_EventRef_2F_New(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_EventRef_2F_Get_20_Event_20_Reference(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_EventRef_2F_Get_20_Next_20_Handler(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_EventRef_2F_Get_20_User_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_EventRef_2F_Call_20_Next_20_Event_20_Handler(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_EventRef_2F_Return_20_Event_20_Not_20_Handled(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_EventRef_2F_Return_20_Internal_20_Error(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_EventRef_2F_Return_20_Parameter_20_Not_20_Found(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_EventRef_2F_Get_20_Event_20_Class(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_EventRef_2F_Get_20_Event_20_Kind(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_EventRef_2F_Get_20_Event_20_Parameter(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object *,V_Object *,V_Object *,V_Object *);
enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_HICommand(V_Environment, enum boolType *, Nat4,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_HIObjectRef(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_typePartCode(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_Control_20_Part(V_Environment, enum boolType *, Nat4,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_EventRef_2F_Set_20_Event_20_Parameter(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_EventRef_2F_Set_20_EP_20_HIObject_20_Instance(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_EventRef_2F_Set_20_EP_20_SInt16(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_EventRef_2F_Set_20_EP_20_UInt32(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_EventRef_2F_Set_20_EP_20_Boolean(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_EventRef_2F_Set_20_EP_20_typePartCode(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_EventRef_2F_Set_20_EP_20_typeRef(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_EventRef_2F_Set_20_EP_20_Text(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_EventRef_2F_Set_20_EP_20_Control_20_Part(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_QDRect(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_EventRef_2F_Set_20_EP_20_QDRect(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_QDPoint(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_EventRef_2F_Set_20_EP_20_QDPoint(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_Mouse_20_Location_20_CG(V_Environment, enum boolType *, Nat4,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_Mouse_20_Location_20_QD(V_Environment, enum boolType *, Nat4,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_Boolean(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_typeRef(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_SInt16(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_UInt32(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_QDRgnHandle(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_Control_20_Region(V_Environment, enum boolType *, Nat4,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_EventRef_2F_Set_20_EP_20_QDRgnHandle(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_EventRef_2F_Set_20_EP_20_Control_20_Region(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_Enumeration(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_typePtr(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_CGContextRef(V_Environment, enum boolType *, Nat4,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_EventRef_2F_Create_20_Event(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_EventRef_2F_Create_20_HIObject_20_Initialization_20_Event(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_EventRef_2F_Retain_20_Event(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_EventRef_2F_Release_20_Event(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_CFStringRef(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_CFString(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_CFMutableArrayRef(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_CFMutableArray(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_DragRef(V_Environment, enum boolType *, Nat4,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_EventRef_2F_Set_20_EP_20_Object(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_Object(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_Attributes(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_EventRef_2F_Set_20_EP_20_Attributes(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_EventRef_2F_Set_20_EP_20_CFStringRef(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_HIPoint(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_EventRef_2F_Set_20_EP_20_HIPoint(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_HISize(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_EventRef_2F_Set_20_EP_20_HISize(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_SInt32(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_Carbon_20_Event_20_Callback_2F_Open_20_UPP(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Carbon_20_Event_20_Callback_2F_Install_20_Callback(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Carbon_20_Event_20_Callback_2F_Get_20_EventTargetRef(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Carbon_20_Event_20_Callback_2F_Get_20_EventTypeSpec(V_Environment, enum boolType *, Nat4,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_Carbon_20_Event_20_Callback_2F_Do_20_CE_20_Callback(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Carbon_20_Event_20_Callback_2F_Use_20_Parameters(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Carbon_20_Event_20_Callback_2F_Remove_20_Callback(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Carbon_20_Event_20_Callback_2F_Close_20_UPP(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Carbon_20_Event_20_Callback_2F_Clean_20_Up_20_Parameters(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Carbon_20_Event_20_Callback_2F_Close(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Carbon_20_Event_20_Callback_2F_xxxCall(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Carbon_20_Event_20_Callback_2F_Open_20_As_20_Handler(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Carbon_20_Event_20_Callback_2F_Get_20_Parameter_20_List_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Carbon_20_Timer_20_Callback_2F_xOpen_20_UPP(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Carbon_20_Timer_20_Callback_2F_xClose_20_UPP(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Carbon_20_Timer_20_Callback_2F_Do_20_CT_20_Exec_20_Callback(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Carbon_20_Timer_20_Callback_2F_Do_20_CT_20_Callback(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Carbon_20_Timer_20_Callback_2F_Get_20_EventLoopRef(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Carbon_20_Timer_20_Callback_2F_Install_20_Callback(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Carbon_20_Timer_20_Callback_2F_Remove_20_Callback(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Carbon_20_Timer_20_Callback_2F_Get_20_Initial_20_Delay(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Carbon_20_Timer_20_Callback_2F_Get_20_Repeat_20_Delay(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Carbon_20_Timer_20_Callback_2F_Close(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Carbon_20_Timer_20_Callback_2F_Reset_20_Repeat_20_Delay(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Carbon_20_Timer_20_Callback_2F_Set_20_Initial_20_Delay(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Carbon_20_Timer_20_Callback_2F_Set_20_Repeat_20_Delay(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Carbon_20_Timer_20_Callback_2F_Set_20_Next_20_Fire_20_Time(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Carbon_20_Timer_20_Callback_2F_Get_20_Parameter_20_List_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Carbon_20_Timer_20_Callback_2F_Schedule_20_Callback(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Carbon_20_Idle_20_Timer_20_Callback_2F_xOpen_20_UPP(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Carbon_20_Idle_20_Timer_20_Callback_2F_xClose_20_UPP(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Carbon_20_Idle_20_Timer_20_Callback_2F_Do_20_CIT_20_Callback(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Carbon_20_Idle_20_Timer_20_Callback_2F_Do_20_CT_20_Exec_20_Callback(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Carbon_20_Idle_20_Timer_20_Callback_2F_Install_20_Callback(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Carbon_20_Idle_20_Timer_20_Callback_2F_Remove_20_Callback(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Carbon_20_Idle_20_Timer_20_Callback_2F_Get_20_Idle_20_Action(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Carbon_20_Idle_20_Timer_20_Callback_2F_Set_20_Idle_20_Action(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Carbon_20_Event_20_Target_20_Proxy_2F_Get_20_Carbon_20_EventTargetRef(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Carbon_20_Event_20_Target_20_Proxy_2F_Get_20_HIObjectRef(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Carbon_20_Event_20_Target_20_Proxy_2F_Set_20_HIObjectRef(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Carbon_20_Event_20_Target_20_Proxy_2F_Dispose(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Carbon_20_Event_20_Target_20_Proxy_2F_New(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Carbon_20_Event_20_Target_20_Proxy_2F_Close(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Get_20_Clipboard(V_Environment, enum boolType *, Nat4,V_Object *);
enum opTrigger vpx_method_Get_20_Clipboard_20_Text(V_Environment, enum boolType *, Nat4,V_Object *);
enum opTrigger vpx_method_Set_20_Clipboard_20_Text(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Get_20_Find_20_Pasteboard(V_Environment, enum boolType *, Nat4,V_Object *);
enum opTrigger vpx_method_Get_20_Find_20_Pasteboard_20_Text(V_Environment, enum boolType *, Nat4,V_Object *);
enum opTrigger vpx_method_Set_20_Find_20_Pasteboard_20_Text(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_PasteboardItemID_20_To_20_Object(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Object_20_To_20_PasteboardItemID(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_TEST_20_Show_20_Clipboard_20_Flavors(V_Environment, enum boolType *, Nat4);
enum opTrigger vpx_method_TEST_20_Show_20_Clipboard_20_Text(V_Environment, enum boolType *, Nat4);
enum opTrigger vpx_method_TEST_20_Show_20_Find_20_Text(V_Environment, enum boolType *, Nat4);
enum opTrigger vpx_method_TEST_20_Set_20_Clipboard_20_Text(V_Environment, enum boolType *, Nat4);
enum opTrigger vpx_method_TEST_20_Set_20_Find_20_Text(V_Environment, enum boolType *, Nat4);
enum opTrigger vpx_method_TEST_20_UTI_20_Generator(V_Environment, enum boolType *, Nat4);
enum opTrigger vpx_method_Pasteboard_20_Service_2F_Get_20_Clipboard(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Pasteboard_20_Service_2F_Get_20_Find(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Pasteboard_20_Service_2F_CE_20_Handle_20_Event(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Pasteboard_20_Service_2F_Find_20_Pasteboard_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Pasteboard_20_Service_2F_Add_20_Pasteboards(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Pasteboard_20_Service_2F_Get_20_Pasteboards(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Pasteboard_20_Service_2F_Set_20_Pasteboards(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Pasteboard_20_Service_2F_Get_20_Initial_20_Pasteboards(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Pasteboard_20_Service_2F_Set_20_Initial_20_Pasteboards(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Pasteboard_20_Service_2F_Get_20_Event_20_Handlers(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Pasteboard_20_Service_2F_Set_20_Event_20_Handlers(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Pasteboard_20_Service_2F_Open_20_Event_20_Handlers(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Pasteboard_20_Service_2F_Close_20_Event_20_Handlers(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Pasteboard_20_Service_2F_Initialize(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Pasteboard_20_Service_2F_Close(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Pasteboard_2F_CE_20_Handle_20_Event(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Pasteboard_2F_Create(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Pasteboard_2F_Setup_20_Clipboard(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Pasteboard_2F_Setup_20_Find(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Pasteboard_2F_Get_20_Values_20_As_20_UTIs(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_Pasteboard_2F_Find_20_Flavors_20_For_20_UTIs(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_Pasteboard_2F_Find_20_UTIs_20_For_20_Value(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Pasteboard_2F_Put_20_Values_20_As_20_UTIs(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Pasteboard_2F_Find_20_Tasty_20_Flavors_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Pasteboard_2F_Synchronize(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Pasteboard_2F_Create_20_Items_20_From_20_Count(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Pasteboard_2F_Create_20_Items_20_From_20_Values(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Pasteboard_2F_Do_20_Changed_20_Callback(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Pasteboard_2F_Do_20_Standard_20_Changed_20_Callback(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Pasteboard_2F_Do_20_Standard_20_Promise_20_Keeper_20_Callback(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Pasteboard_2F_Get_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Pasteboard_2F_Set_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Pasteboard_2F_Get_20_Identifier(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Pasteboard_2F_Set_20_Identifier(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Pasteboard_2F_Get_20_PasteboardRef(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Pasteboard_2F_Set_20_PasteboardRef(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Pasteboard_2F_Get_20_Changed_20_Callback(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Pasteboard_2F_Set_20_Changed_20_Callback(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Pasteboard_2F_Get_20_Promise_20_Callback(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Pasteboard_2F_Set_20_Promise_20_Callback(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Pasteboard_2F_Pasteboard_20_Create(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Pasteboard_2F_Pasteboard_20_Create_20_Unique(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Pasteboard_2F_Pasteboard_20_Synchronize(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Pasteboard_2F_Pasteboard_20_Clear(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Pasteboard_2F_Pasteboard_20_Get_20_Item_20_Count(V_Environment, enum boolType *, Nat4,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_Pasteboard_2F_Pasteboard_20_Get_20_Item_20_Identifier(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_Pasteboard_2F_Pasteboard_20_Copy_20_Item_20_Flavors(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_Pasteboard_2F_Pasteboard_20_Copy_20_Item_20_Flavor_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_Pasteboard_2F_Pasteboard_20_Put_20_Item_20_Flavor(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Pasteboard_2F_Pasteboard_20_Set_20_Promise_20_Keeper(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Pasteboard_2F_Get_20_Known_20_Flavors(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Pasteboard_2F_Set_20_Known_20_Flavors(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Pasteboard_2F_Get_20_Calling_20_Promise_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Pasteboard_2F_Set_20_Calling_20_Promise_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Pasteboard_2F_Open(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Pasteboard_2F_Release(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Pasteboard_2F_Close(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Pasteboard_2F_New(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Pasteboard_20_Notifier_2F_Register_20_Item(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Pasteboard_20_Notifier_2F_Unregister_20_Item(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Pasteboard_20_Notifier_2F_Do_20_Standard_20_Changed_20_Callback(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Pasteboard_20_Notifier_2F_Get_20_Revision_20_ID(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Pasteboard_20_Notifier_2F_Set_20_Revision_20_ID(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Pasteboard_20_Notifier_2F_Get_20_Items(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Pasteboard_20_Notifier_2F_Set_20_Items(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Pasteboard_20_Item_2F_Find_20_Flavor_20_Values_20_For_20_Identifiers(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Pasteboard_20_Item_2F_Create_20_Item_20_From_20_Number(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Pasteboard_20_Item_2F_Create_20_Item_20_From_20_Value(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Pasteboard_20_Item_2F_Get_20_Item_20_Value_20_By_20_UTI(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *,V_Object *,V_Object *);
enum opTrigger vpx_method_Pasteboard_20_Item_2F_Put_20_Item_20_Data_20_By_20_UTI(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Pasteboard_20_Item_2F_Copy_20_Item_20_Flavor_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Pasteboard_20_Item_2F_Commit_20_Promise(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Pasteboard_20_Item_2F_Fullfill_20_Promise(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Pasteboard_20_Item_2F_Add_20_Flavors(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Pasteboard_20_Item_2F_Get_20_Item_20_ID(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Pasteboard_20_Item_2F_Set_20_Item_20_ID(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Pasteboard_20_Item_2F_Get_20_Flavors(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Pasteboard_20_Item_2F_Set_20_Flavors(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Pasteboard_20_Item_2F_Get_20_Value(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Pasteboard_20_Item_2F_Set_20_Value(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Pasteboard_20_Item_2F_Clean_20_Up(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Pasteboard_20_Flavor_2F_Match_20_Identifier_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Pasteboard_20_Flavor_2F_Match_20_UTI_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Pasteboard_20_Flavor_2F_Find_20_UTIs_20_For_20_Value(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Pasteboard_20_Flavor_2F_Convert_20_Data_20_To_20_Value(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Pasteboard_20_Flavor_2F_Convert_20_Value_20_To_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Pasteboard_20_Flavor_2F_Is_20_Tasty_20_Flavor_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Pasteboard_20_Flavor_2F_Is_20_Tasty_20_Pasteboard_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Pasteboard_20_Flavor_2F_Get_20_Put_20_Attributes(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Pasteboard_20_Flavor_2F_Get_20_Known_20_IDs_20_For_20_Type(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Pasteboard_20_Flavor_2F_Get_20_Exclude_20_IDs_20_For_20_Type(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Pasteboard_20_Flavor_2F_Get_20_Promised_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Pasteboard_20_Flavor_2F_Set_20_Promised_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Pasteboard_20_Flavor_2F_Get_20_Sender_20_Only_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Pasteboard_20_Flavor_2F_Set_20_Sender_20_Only_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Pasteboard_20_Flavor_2F_Get_20_Sender_20_Translated_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Pasteboard_20_Flavor_2F_Set_20_Sender_20_Translated_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Pasteboard_20_Flavor_2F_Get_20_Not_20_Saved_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Pasteboard_20_Flavor_2F_Set_20_Not_20_Saved_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Pasteboard_20_Flavor_2F_Get_20_Request_20_Only_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Pasteboard_20_Flavor_2F_Set_20_Request_20_Only_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Pasteboard_20_Flavor_2F_Get_20_System_20_Translated_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Pasteboard_20_Flavor_2F_Set_20_System_20_Translated_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Pasteboard_20_Flavor_2F_Get_20_Identifier(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Pasteboard_20_Flavor_2F_Set_20_Identifier(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Pasteboard_20_Flavor_2F_Get_20_Known_20_IDs(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Pasteboard_20_Flavor_2F_Set_20_Known_20_IDs(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Pasteboard_20_Flavor_2F_Get_20_Extracted_20_Value(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Pasteboard_20_Flavor_2F_Set_20_Extracted_20_Value(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Pasteboard_20_Flavor_2F_Get_20_Exclude_20_Types(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Pasteboard_20_Flavor_2F_Set_20_Exclude_20_Types(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Pasteboard_20_Flavor_2F_Clean_20_Up(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Text_2F_Find_20_UTIs_20_For_20_Value(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Text_2F_Convert_20_Data_20_To_20_Value(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Text_2F_Convert_20_Value_20_To_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Text_20_MacRoman_2F_Find_20_UTIs_20_For_20_Value(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Text_20_MacRoman_2F_Convert_20_Data_20_To_20_Value(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Text_20_MacRoman_2F_Convert_20_Value_20_To_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Instance_2F_Find_20_UTIs_20_For_20_Value(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Instance_2F_Convert_20_Data_20_To_20_Value(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Instance_2F_Convert_20_Value_20_To_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Instance_2F_Check_20_UTI(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_2F_Find_20_UTIs_20_For_20_Value(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_2F_Convert_20_Data_20_To_20_Value(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_2F_Convert_20_Value_20_To_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_2F_Check_20_UTI(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_2F_Get_20_Archive_20_Types(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_2F_Set_20_Archive_20_Types(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_List_20_Helper_20_Name_2F_Find_20_UTIs_20_For_20_Value(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_List_20_Helper_20_Name_2F_Convert_20_Data_20_To_20_Value(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_List_20_Helper_20_Name_2F_Convert_20_Value_20_To_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_List_20_Helper_20_Name_2F_Is_20_Tasty_20_Flavor_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_URL_2F_Find_20_UTIs_20_For_20_Value(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_URL_2F_Convert_20_Data_20_To_20_Value(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_URL_2F_Convert_20_Value_20_To_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_Text_2F_Find_20_UTIs_20_For_20_Value(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_Text_2F_Convert_20_Data_20_To_20_Value(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_Text_2F_Convert_20_Value_20_To_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_Text_2F_Is_20_Tasty_20_Pasteboard_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_Text_2F_Is_20_Tasty_20_Flavor_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Object_20_Value_2F_Find_20_UTIs_20_For_20_Value(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Object_20_Value_2F_Convert_20_Data_20_To_20_Value(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Object_20_Value_2F_Convert_20_Value_20_To_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Object_20_Operations_2F_Find_20_UTIs_20_For_20_Value(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Object_20_Operations_2F_Convert_20_Data_20_To_20_Value(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Object_20_Operations_2F_Convert_20_Value_20_To_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Find_20_UTIs_20_For_20_Value(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Convert_20_Data_20_To_20_Value(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Convert_20_Value_20_To_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Get_20_Limit_20_UTIs(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Set_20_Limit_20_UTIs(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Match_20_UTI_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Is_20_Tasty_20_Pasteboard_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Is_20_Tasty_20_Flavor_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Trash_20_Label_2F_Find_20_UTIs_20_For_20_Value(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Trash_20_Label_2F_Convert_20_Data_20_To_20_Value(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Trash_20_Label_2F_Convert_20_Value_20_To_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Trash_20_Label_2F_Find_20_UTIs_20_For_20_Value_2023_1(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Pasteboard_20_Changed(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HICommand_20_Update_20_Status(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HICommand_20_Determine_20_State(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HICommand_20_Owner_20_State(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HICommand_20_Selection_20_State(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HICommand_20_Pasteboard_20_State(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HICommand_20_Process(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Get_20_HICommand_20_State(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Set_20_HICommand_20_State(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Clear_20_HICommand_20_Cache(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Open(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Open_20_Flavors(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Close(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Get_20_Window(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Get_20_Select_20_Values(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Get_20_Put_20_Values(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Get_20_Registrar_20_Pasteboard(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Get_20_Tasty_20_Pasteboard(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Get_20_Owner(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Set_20_Owner(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Get_20_HICommand_20_Cache(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Set_20_HICommand_20_Cache(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HIC_20_Edit_20_Copy(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HIC_20_Edit_20_Clear(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HIC_20_Edit_20_Cut(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HIC_20_Edit_20_Paste(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HIC_20_Edit_20_Duplicate(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HIC_20_Edit_20_Select_20_All(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Get_20_UTIs_20_For_20_Type(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Get_20_Flavors_20_For_20_Type(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Get_20_Exclude_20_Flavors_20_For_20_Type(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Get_20_Known_20_Flavors(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Set_20_Known_20_Flavors(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Put_20_Onto_20_Pasteboard(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Get_20_From_20_Pasteboard(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Window_20_Pasteboard_20_Handler_2F_Open(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Window_20_Pasteboard_20_Handler_2F_Close(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Window_20_Pasteboard_20_Handler_2F_Open_20_Drag_20_Handler(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Window_20_Pasteboard_20_Handler_2F_Close_20_Drag_20_Handler(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Window_20_Pasteboard_20_Handler_2F_Get_20_Window_20_Drag_20_Handler(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Window_20_Pasteboard_20_Handler_2F_Set_20_Window_20_Drag_20_Handler(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_HICommand_20_Owner_20_State(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_HICommand_20_Pasteboard_20_State(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_Open_20_Flavors(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_Get_20_Put_20_Values(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Object_20_Archive_20_Abstract_2F_Create_20_Archive(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Object_20_Archive_20_Abstract_2F_Close_20_Archive(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Object_20_Archive_20_Abstract_2F_Extract_20_Archive(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Object_20_Archive_20_Abstract_2F_Archive_20_Preflight(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_Object_20_Archive_20_Abstract_2F_Archive_20_Postflight(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Object_20_Archive_20_Abstract_2F_Create_20_Archive_20_MetaData(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Object_20_Archive_20_Abstract_2F_Get_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Object_20_Archive_20_Abstract_2F_Set_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Object_20_Archive_20_Abstract_2F_Get_20_Archive(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Object_20_Archive_20_Abstract_2F_Set_20_Archive(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Object_20_Archive_20_Abstract_2F_Get_20_Text(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Object_20_Archive_20_Abstract_2F_Set_20_Text(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Object_20_Archive_20_Abstract_2F_Get_20_Archive_20_Size(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Object_20_Archive_20_Abstract_2F_Set_20_Archive_20_Size(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Object_20_Archive_20_Abstract_2F_Clean_20_Up(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Object_20_Archive_20_Abstract_2F_Get_20_URL_20_Text(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Object_20_Archive_20_Abstract_2F_Set_20_URL_20_Text(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_List_20_Item_20_Archive_2F_Create_20_Archive(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_List_20_Item_20_Archive_2F_Archive_20_Preflight(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_List_20_Item_20_Archive_2F_Archive_20_Postflight(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Value_20_Item_20_Archive_2F_Create_20_Archive(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Value_20_Item_20_Archive_2F_Extract_20_Archive(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Operation_20_Item_20_Archive_2F_Create_20_Operations_20_Archive(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Operation_20_Item_20_Archive_2F_Create_20_Archive_20_MetaData(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Operation_20_Item_20_Archive_2F_Archive_20_Preflight(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_Operation_20_Item_20_Archive_2F_Archive_20_Postflight(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Abstract_20_Drag_202620_Drop_20_Reference_2F_Get_20_DragRef(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Abstract_20_Drag_202620_Drop_20_Reference_2F_Set_20_DragRef(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Abstract_20_Drag_202620_Drop_20_Reference_2F_New(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Abstract_20_Drag_202620_Drop_20_Reference_2F_Release(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Abstract_20_Drag_202620_Drop_20_Reference_2F_Show_20_Hilite(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Abstract_20_Drag_202620_Drop_20_Reference_2F_Hide_20_Hilite(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Abstract_20_Drag_202620_Drop_20_Reference_2F_Get_20_Attributes(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Abstract_20_Drag_202620_Drop_20_Reference_2F_Has_20_Left_20_Sender_20_Window_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Abstract_20_Drag_202620_Drop_20_Reference_2F_Inside_20_Sender_20_Window_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Abstract_20_Drag_202620_Drop_20_Reference_2F_Inside_20_Sender_20_Application_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Abstract_20_Drag_202620_Drop_20_Reference_2F_Get_20_Drag_20_Pasteboard(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Abstract_20_Drag_202620_Drop_20_Reference_2F_Find_20_Tasty_20_Flavors_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Abstract_20_Drag_202620_Drop_20_Reference_2F_Get_20_Values_20_As_20_UTIs(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Abstract_20_Drag_202620_Drop_20_Reference_2F_Get_20_Pasteboard(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Abstract_20_Drag_202620_Drop_20_Reference_2F_Set_20_Pasteboard(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Abstract_20_Drag_202620_Drop_20_Reference_2F_Get_20_Item_20_Bounds(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Abstract_20_Drag_202620_Drop_20_Reference_2F_Set_20_Item_20_Bounds(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Abstract_20_Drag_202620_Drop_20_Reference_2F_Get_20_Total_20_Bounds(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Abstract_20_Drag_202620_Drop_20_Reference_2F_Count_20_Drag_20_Items(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Abstract_20_Drag_202620_Drop_20_Reference_2F_Get_20_Drag_20_Mouse(V_Environment, enum boolType *, Nat4,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_Abstract_20_Drag_202620_Drop_20_Reference_2F_Get_20_Drag_20_Origin(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Abstract_20_Drag_202620_Drop_20_Reference_2F_New_20_With_20_Pasteboard(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Abstract_20_Drag_202620_Drop_20_Reference_2F_Track_20_Drag(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Abstract_20_Drag_202620_Drop_20_Reference_2F_Set_20_Drag_20_CGImage(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Abstract_20_Drag_202620_Drop_20_Reference_2F_Set_20_Drag_20_Allowable_20_Actions(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Abstract_20_Drag_202620_Drop_20_Reference_2F_Get_20_Drag_20_Allowable_20_Actions(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Abstract_20_Drag_202620_Drop_20_Reference_2F_Set_20_Drag_20_Drop_20_Action(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Abstract_20_Drag_202620_Drop_20_Reference_2F_Get_20_Drag_20_Drop_20_Action(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Drop_20_Reference_2F_New(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Drag_20_Reference_2F_Standard_20_Drag_20_Input_20_Callback(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Drag_20_Reference_2F_Open_20_Drag_20_Input_20_Callback(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Drag_20_Reference_2F_Close_20_Drag_20_Input_20_Callback(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Drag_20_Reference_2F_Get_20_Drag_20_Input_20_Callback(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Drag_20_Reference_2F_Set_20_Drag_20_Input_20_Callback(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Drag_20_Reference_2F_Set_20_Drag_20_Input_20_Proc(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Drag_20_Reference_2F_Track_20_Drag(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Abstract_20_Drag_20_Handler_2F_Default_20_The_20_Drag(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Abstract_20_Drag_20_Handler_2F_Open(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Abstract_20_Drag_20_Handler_2F_Close(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Abstract_20_Drag_20_Handler_2F_Get_20_Owner(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Abstract_20_Drag_20_Handler_2F_Set_20_Owner(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Abstract_20_Drag_20_Handler_2F_Get_20_The_20_Drag(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Abstract_20_Drag_20_Handler_2F_Set_20_The_20_Drag(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Abstract_20_Drag_20_Handler_2F_Get_20_Drop_20_Flavors(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Abstract_20_Drag_20_Handler_2F_Set_20_Drop_20_Flavors(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Abstract_20_Drag_20_Handler_2F_Get_20_Drop_20_Flavor_20_UTIs(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Abstract_20_Drag_20_Handler_2F_Get_20_Current_20_Drop_20_Flavors(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Abstract_20_Drag_20_Handler_2F_Set_20_Current_20_Drop_20_Flavors(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Abstract_20_Drag_20_Handler_2F_Any_20_Drop_20_Flavors_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Abstract_20_Drag_20_Handler_2F_Check_20_Drop_20_Flavors(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Abstract_20_Drag_20_Handler_2F_Check_20_Tasty_20_Flavors(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Abstract_20_Drag_20_Handler_2F_Extract_20_Drop_20_Flavors(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Abstract_20_Drag_20_Handler_2F_Dispose_20_Drop(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Abstract_20_Drag_20_Handler_2F_Install_20_Handlers(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Abstract_20_Drag_20_Handler_2F_Remove_20_Handlers(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Abstract_20_Drag_20_Handler_2F_Show_20_Hilite(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Abstract_20_Drag_20_Handler_2F_Hide_20_Hilite(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Abstract_20_Drag_20_Handler_2F_Get_20_Tasty_20_Pasteboard(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Window_20_Drag_20_Handler_2F_Do_20_Tracking_20_Handler(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Window_20_Drag_20_Handler_2F_Do_20_Receive_20_Handler(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Window_20_Drag_20_Handler_2F_Drag_20_In_20_Window(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Window_20_Drag_20_Handler_2F_Drag_20_Track_20_In_20_Window(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Window_20_Drag_20_Handler_2F_Drag_20_Enter_20_Window(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Window_20_Drag_20_Handler_2F_Drag_20_Leave_20_Window(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Window_20_Drag_20_Handler_2F_Drag_20_Enter_20_Handler(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Window_20_Drag_20_Handler_2F_Drag_20_Leave_20_Handler(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Window_20_Drag_20_Handler_2F_Drag_20_Receive(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Window_20_Drag_20_Handler_2F_Remove_20_Handlers(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Window_20_Drag_20_Handler_2F_Install_20_Handlers(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Window_20_Drag_20_Handler_2F_Show_20_Hilite(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Window_20_Drag_20_Handler_2F_Hide_20_Hilite(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Window_20_Drag_20_Handler_2F_Accept_20_Drop(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Window_20_Drag_20_Handler_2F_Get_20_Window(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Window_20_Drag_20_Handler_2F_Drag_20_Items(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Window_20_Drag_20_Handler_2F_Delete_20_Items(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Window_20_Drag_20_Handler_2F_Create_20_Drag_20_Image(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Window_20_Drag_20_Handler_2F_Create_20_Offscreen_20_Image(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_Print_20_Job_20_Abstract_2F_Page_20_Draw(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Print_20_Job_20_Abstract_2F_Page_20_Setup(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Print_20_Job_20_Abstract_2F_Print(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Print_20_Job_20_Abstract_2F_Print_20_Loop(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Print_20_Job_20_Abstract_2F_Open(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Print_20_Job_20_Abstract_2F_Close(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Print_20_Job_20_Abstract_2F_Get_20_Page_20_Range(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Print_20_Job_20_Abstract_2F_Get_20_Session(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Print_20_Job_20_Abstract_2F_Set_20_Session(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Print_20_Job_20_Abstract_2F_Get_20_Format(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Print_20_Job_20_Abstract_2F_Set_20_Format(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Print_20_Job_20_Abstract_2F_Get_20_Settings(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Print_20_Job_20_Abstract_2F_Set_20_Settings(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Print_20_Job_20_Abstract_2F_Get_20_Window(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Print_20_Job_20_Abstract_2F_Set_20_Window(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Print_20_Job_20_Abstract_2F_Get_20_Error(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Print_20_Job_20_Abstract_2F_Set_20_Error(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_PM_20_Session_2F_Create(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_PM_20_Session_2F_Open(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_PM_20_Session_2F_Release(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_PM_20_Session_2F_Default_20_Print_20_Settings(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_PM_20_Session_2F_Default_20_Page_20_Format(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_PM_20_Session_2F_Validate_20_Page_20_Format(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_PM_20_Session_2F_Page_20_Setup_20_Dialog(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_PM_20_Session_2F_Print_20_Dialog(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_PM_20_Session_2F_Use_20_Sheets(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_PM_20_Session_2F_Default_20_Page_20_Setup_20_Done_20_Callback(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_PM_20_Session_2F_Default_20_Print_20_Dialog_20_Done_20_Callback(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_PM_20_Session_2F_Get_20_PMPrintSession(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_PM_20_Session_2F_Set_20_PMPrintSession(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_PM_20_Session_2F_Get_20_Page_20_Setup_20_Done_20_Callback(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_PM_20_Session_2F_Set_20_Page_20_Setup_20_Done_20_Callback(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_PM_20_Session_2F_Get_20_Print_20_Dialog_20_Done_20_Callback(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_PM_20_Session_2F_Set_20_Print_20_Dialog_20_Done_20_Callback(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_PM_20_Session_2F_Destroy(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_PM_20_Session_2F_Get_20_Print_20_Job(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_PM_20_Session_2F_Set_20_Print_20_Job(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_PM_20_Session_2F_Get_20_Session_20_Error(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_PM_20_Session_2F_Setup_20_For_20_CoreGraphics(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_PM_20_Session_2F_Begin_20_Document(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_PM_20_Session_2F_Begin_20_Page(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_PM_20_Session_2F_Get_20_CoreGraphics_20_Context(V_Environment, enum boolType *, Nat4,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_PM_20_Session_2F_End_20_Page(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_PM_20_Session_2F_End_20_Document(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_PM_20_Format_2F_Get_20_PMPageFormat(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_PM_20_Format_2F_Set_20_PMPageFormat(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_PM_20_Format_2F_Create(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_PM_20_Format_2F_Release(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_PM_20_Format_2F_Setup(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_PM_20_Format_2F_Destroy(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_PM_20_Settings_2F_Get_20_PMPrintSettings(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_PM_20_Settings_2F_Set_20_PMPrintSettings(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_PM_20_Settings_2F_Set_20_Job_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_PM_20_Settings_2F_Set_20_Page_20_Range(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_PM_20_Settings_2F_Create(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_PM_20_Settings_2F_Release(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_PM_20_Settings_2F_Destroy(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_PM_20_Settings_2F_Get_20_First_20_Page(V_Environment, enum boolType *, Nat4,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_PM_20_Settings_2F_Get_20_Last_20_Page(V_Environment, enum boolType *, Nat4,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_PM_20_Settings_2F_Set_20_Last_20_Page(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_New_20_Folder_20_FSRef(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_New_20_FSRef(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_New_20_FSRef_20_From_20_Alias(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_New_20_FSSpec(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Find_20_Media(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Find_20_Folder(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_Find_20_Users_20_Folder(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Formalize_20_POSIX_20_Path(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Close(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Close_20_Alias(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Coerce_20_FSRef(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Coerce_20_FSSpec(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Compare(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Create_20_Alias(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Delete(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Error_20_Debug(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Exchange_20_Objects(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Get_20_Alias_20_Record(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Get_20_Display_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Get_20_Error(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Get_20_FSRef(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Get_20_FSSpec(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Get_20_Full_20_Path(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Get_20_Full_20_Path_20_CFString(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Get_20_Full_20_Path_20_CFURL(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Get_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Get_20_Name_20_As_20_String(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Get_20_Name_20_As_20_Unicode(V_Environment, enum boolType *, Nat4,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Get_20_Parent(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Get_20_Parent_20_ID(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Get_20_Reference(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Get_20_Specification(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Is_20_Desktop_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Is_20_Folder_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Is_20_In_20_Trash_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Move_20_To(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_New(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_New_20_From_20_Alias(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_New_20_From_20_CFString(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_New_20_From_20_CFURL(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_New_20_From_20_FSRef(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_New_20_From_20_FSSpec(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_New_20_From_20_Path_20_String(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_New_20_From_20_Unicode(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Open(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Open_20_Update(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Rename(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Rename_20_CFString(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Rename_20_Unicode(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Resolve_20_Alias_20_File(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *,V_Object *,V_Object *);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Alias_20_Record(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Name_20_As_20_String(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Name_20_As_20_Unicode(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Parent_20_URL(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Reference(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Update_20_Alias(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Update_20_All(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Update_20_FSCatInfo(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Update_20_FSRef(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Update_20_Name(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F7E_FNNotify(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F7E_FSGetCatalogInfo(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object,V_Object *,V_Object *,V_Object *,V_Object *);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F7E_FSGetCatalogInfo_20_NodeFlag(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F7E_FSpMakeFSRef(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F7E_LSOpenFSRef(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F7E7E_Extract_20_FSCatInfo(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F7E7E_Param_20_Error(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F7E7E_Update_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Get_20_Directory_20_Items(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F7E_FSGetCatalogInfo_20_FInfo(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Get_20_Finder_20_Info(V_Environment, enum boolType *, Nat4,V_Object,V_Object *,V_Object *,V_Object *);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Read_20_Object_20_File(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Read_20_Text_20_File(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F7E_FSGetCatalogInfo_20_FXInfo(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Get_20_FX_20_ScriptCode(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Create_20_File(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Create_20_Directory(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F7E_LSCopyItemInfo(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Get_20_Bundle_20_Resource_20_FSRef(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F7E_FSSetCatalogInfo(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Get_20_Item_20_UTI(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Error_20_Accept(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_MacOS_20_Folder_20_Reference_2F_Capture_20_App_20_Folder(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_MacOS_20_Folder_20_Reference_2F_Capture_20_Folder_20_Type(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_MacOS_20_Folder_20_Reference_2F_Capture_20_Path(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_MacOS_20_Folder_20_Reference_2F_New(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_MacOS_20_File_20_Iterator_2F_Close(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_MacOS_20_File_20_Iterator_2F_Get_20_Depth_20_Flag(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_MacOS_20_File_20_Iterator_2F_Get_20_Folder(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_MacOS_20_File_20_Iterator_2F_Get_20_Reference(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_MacOS_20_File_20_Iterator_2F_Open(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_MacOS_20_File_20_Iterator_2F_Set_20_Folder(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_MacOS_20_File_20_Iterator_2F_Set_20_Reference(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_MacOS_20_File_20_Iterator_2F7E_FSGetCatalogInfoBulk(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object,V_Object,V_Object *,V_Object *,V_Object *,V_Object *,V_Object *);
enum opTrigger vpx_method_MacOS_20_File_20_Iterator_2F_Bulk_20_Pass(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object,V_Object,V_Object *,V_Object *,V_Object *,V_Object *,V_Object *);
enum opTrigger vpx_method_Folder_20_Search_2F_Setup_20_Search(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Folder_20_Search_2F_Search_20_Pass(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Folder_20_Search_2F_Collect_20_Found(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Folder_20_Search_2F_Get_20_Completed_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Folder_20_Search_2F_Dispose(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Folder_20_Search_2F_Search_20_Sync(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_Folder_20_Search_2F_Get_20_Bulk_20_Count(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Folder_20_Search_2F_Valid_20_Subfolder_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_File_20_Process_2F_Create_20_File(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_File_20_Process_2F_Locate_20_File(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_File_20_Process_2F_Open_20_Data_20_Fork(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_File_20_Process_2F_Write_20_To_20_Fork(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_File_20_Process_2F_Write_20_String(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_File_20_Process_2F_Read_20_From_20_Fork(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_File_20_Process_2F_Read_20_String(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_File_20_Process_2F_Close_20_Fork(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_File_20_Process_2F_Save_20_String(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_File_20_Process_2F_Load_20_String(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_File_20_Process_2F_Error_3F_(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_File_20_Process_2F_Open_20_Reference(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_File_20_Process_2F_Get_20_Cache_20_Mode(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_File_20_Process_2F_Get_20_Reference(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_File_20_Process_2F_Get_20_ID(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_File_20_Process_2F_Get_20_New_20_Line_20_Char(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_File_20_Process_2F_Get_20_New_20_Line_20_Mode_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_File_20_Process_2F_Get_20_Permission(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_File_20_Process_2F_Get_20_Position_20_Mode(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_File_20_Process_2F_Get_20_Position_20_Offset(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_File_20_Process_2F_Get_20_Status(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_File_20_Process_2F_Get_20_Verify_20_Reads_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_File_20_Process_2F_Set_20_Cache_20_Mode(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_File_20_Process_2F_Set_20_Reference(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_File_20_Process_2F_Set_20_New_20_Line_20_Char(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_File_20_Process_2F_Set_20_New_20_Line_20_Mode_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_File_20_Process_2F_Set_20_ID(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_File_20_Process_2F_Set_20_Permission(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_File_20_Process_2F_Set_20_Position_20_Mode(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_File_20_Process_2F_Set_20_Position_20_Offset(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_File_20_Process_2F_Set_20_Status(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_File_20_Process_2F_Set_20_Verify_20_Reads_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_File_20_Process_2F_Get_20_Write_20_Cache_20_Mode(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_File_20_Process_2F_Get_20_Read_20_Cache_20_Mode(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_File_20_Process_2F_Get_20_Read_20_Verify_20_Mode(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_File_20_Process_2F_Get_20_Read_20_Line_20_Mode(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_MacOS_20_Bundle_20_Reference_2F_Get_20_Bundle(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_MacOS_20_Bundle_20_Reference_2F_Set_20_Bundle(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_MacOS_20_Bundle_20_Reference_2F_Update_20_Bundle(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_MacOS_20_Bundle_20_Reference_2F_Get_20_Bundle_20_Resource_20_FSRef(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_MacOS_20_Bundle_20_Reference_2F_Update_20_FSRef(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Nav_20_Ask_20_Discard_20_Changes(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Nav_20_Ask_20_Review_20_Documents(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Nav_20_Ask_20_Save_20_Changes(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Nav_20_Choose_20_File(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Nav_20_Choose_20_Folder(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Nav_20_Choose_20_Object(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Nav_20_Choose_20_Volume(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Nav_20_Get_20_File(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Nav_20_New_20_Folder(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Nav_20_Put_20_File(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_New_20_NavTypeList(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_NavEvent_20_Simple(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_TEST_20_New_20_Nav_20_Modal_20_GF(V_Environment, enum boolType *, Nat4);
enum opTrigger vpx_method_TEST_20_New_20_Nav_20_Modal_20_CF(V_Environment, enum boolType *, Nat4);
enum opTrigger vpx_method_Navigation_20_Reply_2F_Get_20_File_20_Translation_20_Spec(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Navigation_20_Reply_2F_Get_20_Key_20_Script(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Navigation_20_Reply_2F_Get_20_Replacing_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Navigation_20_Reply_2F_Get_20_Selected_20_Files(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Navigation_20_Reply_2F_Get_20_Stationery_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Navigation_20_Reply_2F_Get_20_Translation_20_Needed_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Navigation_20_Reply_2F_Get_20_Valid_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Navigation_20_Reply_2F_Get_20_Version(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Navigation_20_Reply_2F_Set_20_File_20_Translation_20_Spec(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Navigation_20_Reply_2F_Set_20_Key_20_Script(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Navigation_20_Reply_2F_Set_20_Replacing_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Navigation_20_Reply_2F_Set_20_Selected_20_Files(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Navigation_20_Reply_2F_Set_20_Stationery_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Navigation_20_Reply_2F_Set_20_Translation_20_Needed_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Navigation_20_Reply_2F_Set_20_Valid_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Navigation_20_Reply_2F_Set_20_Version(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Navigation_20_Reply_2F7E7E_Generate_20_Reply(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Navigation_20_Reply_2F7E7E_Parse_20_Reply_20_Selection_20_AEDesc(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Nav_20_Choose_20_Volume_20_Dialog_2F7E_Nav_20_Create_20_Dialog(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Nav_20_Ask_20_Save_20_Changes_20_Dialog_2F_Extract_20_Reply(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Nav_20_Ask_20_Save_20_Changes_20_Dialog_2F_Extract_20_Result(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Nav_20_Ask_20_Save_20_Changes_20_Dialog_2F_Get_20_Save_20_Changes_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Nav_20_Ask_20_Save_20_Changes_20_Dialog_2F_NavUA_20_Dont_20_Save_20_Changes(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Nav_20_Ask_20_Save_20_Changes_20_Dialog_2F_Set_20_Save_20_Changes_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Nav_20_Ask_20_Save_20_Changes_20_Dialog_2F_Setup_20_Run_20_Flags(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Nav_20_Ask_20_Save_20_Changes_20_Dialog_2F7E_Nav_20_Create_20_Dialog(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Close(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Close_20_Callbacks(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Close_20_Event_20_Callback(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Dispose(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Do_20_Completion_20_Behavior(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Extract_20_Reply(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Extract_20_Result(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Get_20_Action(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Get_20_Canceled_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Get_20_Completion_20_Behavior(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Get_20_Creation_20_Options_20_Record(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Get_20_Event_20_Callback_20_Behavior(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Get_20_File_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Get_20_Modality(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Get_20_Parameter_20_String(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Get_20_Parent_20_Window(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Get_20_Reply(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Get_20_Reply_20_Record(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Get_20_Reply_20_Selection(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Get_20_Result(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Get_20_Window_20_Record(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_NavCB_20_Accept(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_NavCB_20_Cancel(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_NavCB_20_Event(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_NavCB_20_Start(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_NavCB_20_Terminate(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_NavCB_20_Unknown_20_Selector(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_NavCB_20_User_20_Action(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_NavEvent_20_Simple(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_NavUA_20_Cancel(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_NavUA_20_Choose(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_NavUA_20_Discard_20_Changes(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_NavUA_20_Dont_20_Save_20_Any_20_Documents(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_NavUA_20_Dont_20_Save_20_Changes(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_NavUA_20_New_20_Folder(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_NavUA_20_None(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_NavUA_20_Open(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_NavUA_20_Review_20_Documents(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_NavUA_20_Save_20_As(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_NavUA_20_Save_20_Changes(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_NavUA_20_Unknown_20_Action(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Open(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Open_20_Event_20_Callback(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Report_20_Error(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Run(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Set_20_Action(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Set_20_Canceled_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Set_20_Completion_20_Behavior(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Set_20_Creation_20_Options_20_Record(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Set_20_Error(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Set_20_File_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Set_20_Finished_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Set_20_Modality(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Set_20_Parameter_20_String(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Set_20_Parent_20_Window(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Set_20_Preference_20_Key(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Set_20_Reply(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Set_20_Result(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Set_20_Window_20_Record(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Set_20_Window_20_Title(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Setup_20_Dialog(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Setup_20_Options(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Setup_20_Run_20_Flags(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F7E_Nav_20_Create_20_Dialog(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F7E_New_20_NavDialog_2A2A_(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Nav_20_New_20_Folder_20_Dialog_2F7E_Nav_20_Create_20_Dialog(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Nav_20_Object_20_Filter_20_Dialog_2F_Close_20_Callbacks(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Nav_20_Object_20_Filter_20_Dialog_2F_Close_20_Filter_20_Callback(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Nav_20_Object_20_Filter_20_Dialog_2F_Get_20_Filter_20_Callback_20_Behavior(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Nav_20_Object_20_Filter_20_Dialog_2F_Open_20_Filter_20_Callback(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Nav_20_Object_20_Filter_20_Dialog_2F_Set_20_Filter_20_Callback_20_Behavior(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Nav_20_Object_20_Filter_20_Dialog_2F7E_Nav_20_Create_20_Dialog(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Nav_20_Choose_20_Folder_20_Dialog_2F7E_Nav_20_Create_20_Dialog(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Nav_20_Preview_20_Filter_20_Dialog_2F_Close_20_Callbacks(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Nav_20_Preview_20_Filter_20_Dialog_2F_Close_20_Preview_20_Callback(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Nav_20_Preview_20_Filter_20_Dialog_2F_Get_20_Preview_20_Callback_20_Behavior(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Nav_20_Preview_20_Filter_20_Dialog_2F_Open_20_Preview_20_Callback(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Nav_20_Preview_20_Filter_20_Dialog_2F_Set_20_Preview_20_Callback_20_Behavior(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Nav_20_Get_20_File_20_Dialog_2F_Get_20_NavTypeList(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Nav_20_Get_20_File_20_Dialog_2F_Get_20_Creator_20_Code(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Nav_20_Get_20_File_20_Dialog_2F_Set_20_Creator_20_Code(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Nav_20_Get_20_File_20_Dialog_2F_Get_20_Type_20_List(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Nav_20_Get_20_File_20_Dialog_2F_Set_20_Type_20_List(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Nav_20_Get_20_File_20_Dialog_2F7E_Nav_20_Create_20_Dialog(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Nav_20_Put_20_File_20_Dialog_2F_Get_20_File_20_Creator(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Nav_20_Put_20_File_20_Dialog_2F_Get_20_File_20_Type(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Nav_20_Put_20_File_20_Dialog_2F_Set_20_File_20_Creator(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Nav_20_Put_20_File_20_Dialog_2F_Set_20_File_20_Type(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Nav_20_Put_20_File_20_Dialog_2F7E_Nav_20_Create_20_Dialog(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Nav_20_Put_20_File_20_Dialog_2F_NavUA_20_Save_20_As(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Nav_20_Choose_20_Object_20_Dialog_2F7E_Nav_20_Create_20_Dialog(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Nav_20_Choose_20_File_20_Dialog_2F_Get_20_NavTypeList(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Nav_20_Choose_20_File_20_Dialog_2F_Set_20_Creator_20_Code(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Nav_20_Choose_20_File_20_Dialog_2F_Get_20_Creator_20_Code(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Nav_20_Choose_20_File_20_Dialog_2F_Get_20_Type_20_List(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Nav_20_Choose_20_File_20_Dialog_2F_Set_20_Type_20_List(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Nav_20_Choose_20_File_20_Dialog_2F7E_Nav_20_Create_20_Dialog(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Nav_20_Ask_20_Discard_20_Changes_20_Dialog_2F7E_Nav_20_Create_20_Dialog(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Nav_20_Ask_20_Discard_20_Changes_20_Dialog_2F_Extract_20_Reply(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Nav_20_Ask_20_Review_20_Documents_20_Dialog_2F_Extract_20_Reply(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Nav_20_Ask_20_Review_20_Documents_20_Dialog_2F_Extract_20_Result(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Nav_20_Ask_20_Review_20_Documents_20_Dialog_2F_Get_20_Document_20_Count(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Nav_20_Ask_20_Review_20_Documents_20_Dialog_2F_Get_20_Review_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Nav_20_Ask_20_Review_20_Documents_20_Dialog_2F_NavUA_20_Dont_20_Save_20_Any_20_Documents(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Nav_20_Ask_20_Review_20_Documents_20_Dialog_2F_Set_20_Document_20_Count(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Nav_20_Ask_20_Review_20_Documents_20_Dialog_2F_Set_20_Review_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Nav_20_Ask_20_Review_20_Documents_20_Dialog_2F_Setup_20_Run_20_Flags(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Nav_20_Ask_20_Review_20_Documents_20_Dialog_2F7E_Nav_20_Create_20_Dialog(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Nav_20_Dialog_2F_Set_20_Nav_20_Class(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Nav_20_Dialog_2F_Get_20_Nav_20_Class(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Nav_20_Dialog_2F_Set_20_Window_20_Title(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Nav_20_Dialog_2F_Set_20_Preference_20_Key(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Nav_20_Dialog_2F_Set_20_Type_20_List(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Nav_20_Dialog_2F_Set_20_File_20_Type(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Nav_20_Dialog_2F_Set_20_File_20_Creator(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Nav_20_Dialog_2F_Set_20_File_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Nav_20_Dialog_2F_Set_20_Modality(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Nav_20_Dialog_2F_Set_20_Parent_20_Window(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Nav_20_Dialog_2F_Set_20_Document_20_Count(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Nav_20_Dialog_2F_Set_20_Completion_20_Behavior(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Nav_20_Dialog_2F_Run(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Nav_20_Dialog_2F_Get_20_Canceled_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Nav_20_Dialog_2F_Get_20_Select_20_List(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Nav_20_Dialog_2F_Get_20_Select_20_Item(V_Environment, enum boolType *, Nat4,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_Nav_20_Dialog_2F_Get_20_Select_20_Result(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Nav_20_Dialog_2F_Get_20_Select_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Nav_20_Dialog_2F_Destruct(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Nav_20_Dialog_2F7E_Default_20_Completion(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Nav_20_Dialog_2F_New(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_HIObjectRef_20_To_20_Object(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_MacOS_20_HIObject_20_Service_2F_Open(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_HIObject_20_Class_2F_Register(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_HIObject_20_Class_2F_Unregister(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_HIObject_20_Class_2F_Is_20_Registered(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_HIObject_20_Class_2F_Register_20_Subclass(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_HIObject_20_Class_2F_Allocate_20_Class_20_ID(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_HIObject_20_Class_2F_Allocate_20_Base_20_Class_20_ID(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_HIObject_20_Class_2F_Make_20_HIObject_20_Instance(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_HIObject_20_Class_2F_Report_20_Error(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_HIObject_20_Class_2F_Dispose(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_HIObject_20_Class_2F_Get_20_HIObjectClassRef(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_HIObject_20_Class_2F_Set_20_HIObjectClassRef(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_HIObject_20_Class_2F_Get_20_HIObject_20_Instance_20_Type(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_HIObject_20_Class_2F_CE_20_HIObject_20_Event(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HIObject_20_Class_2F_CE_20_HIObject_20_Class_20_Event(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HIObject_20_Class_2F_CE_20_HIObject_20_Construct(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HIObject_20_Class_2F_CE_20_HIObject_20_Destruct(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HIObject_20_Class_2F_Dispose_20_Instance(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_HIObject_20_Class_20_Callback_2F_Open_20_UPP(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_HIObject_20_Class_20_Callback_2F_Get_20_EventTypeSpec(V_Environment, enum boolType *, Nat4,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_HIObject_20_Class_20_Callback_2F_Do_20_HI_20_Callback(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HIObject_20_Class_20_Callback_2F_Use_20_Parameters(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_HIObject_20_Class_20_Callback_2F_Close_20_UPP(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_HIObject_20_Class_20_Callback_2F_Clean_20_Up_20_Parameters(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_HIObject_20_Class_20_Callback_2F_Get_20_Parameter_20_List_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_HIObject_2F_HIObject_20_Construct(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_HIObject_2F_HIObject_20_Initialize(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HIObject_2F_HIObject_20_Destruct(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_HIObject_2F_HIObject_20_Is_20_Equal(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HIObject_2F_HIObject_20_Print_20_Debug_20_Info(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_HIObject_2F_Use_20_Initial_20_Parameters(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_HIObject_2F_Register_20_HIObject(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_HIObject_2F_Register_20_Instance(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_HIObject_2F_Unregister_20_Instance(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_HIObject_2F_CE_20_Handle_20_Event(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HIObject_2F_CE_20_HIObject_20_Event(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HIObject_2F_CE_20_HIObject_20_Class_20_Event(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HIObject_2F_CE_20_HIObject_20_Construct(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HIObject_2F_CE_20_HIObject_20_Initialize(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HIObject_2F_CE_20_HIObject_20_Destruct(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HIObject_2F_CE_20_HIObject_20_Is_20_Equal(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HIObject_2F_CE_20_HIObject_20_Print_20_Debug_20_Info(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HIObject_2F_Set_20_HIObject_20_Reference(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_HIObject_2F_Get_20_HIObject_20_Reference(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_HIObject_2F_Get_20_HIObject_20_Class(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_HIObject_2F_Set_20_HIObject_20_Class(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_HIObject_2F_Dispose(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_HIObject_2F_Debug(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_HIObject_2F_Get_20_HIObjectRef(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_HIObject_2F_Create(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_HIObject_2F_Create_20_Instance(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_HIObject_2F7E_Make_20_Initialization_20_Event(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HIObject_2F7E_Make_20_Initialization_20_Parameters(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_HIObject_2F_Get_20_Carbon_20_EventTargetRef(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_HIToolbar_2F_Add_20_Items(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_HIToolbar_2F_Add_20_Window(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_HIToolbar_2F_Attach_20_Window(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_HIToolbar_2F_CE_20_Handle_20_Event(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HIToolbar_2F_CE_20_Toolbar_20_Create_20_Item_20_From_20_Drag(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HIToolbar_2F_CE_20_Toolbar_20_Create_20_Item_20_With_20_Identifier(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HIToolbar_2F_CE_20_Toolbar_20_Event(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HIToolbar_2F_CE_20_Toolbar_20_Get_20_Allowed_20_Identifiers(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HIToolbar_2F_CE_20_Toolbar_20_Get_20_Default_20_Identifiers(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HIToolbar_2F_CE_20_Toolbar_20_Item_20_Added(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HIToolbar_2F_CE_20_Toolbar_20_Item_20_Removed(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HIToolbar_2F_CE_20_Toolbar_20_Layout_20_Changed(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HIToolbar_2F_Toolbar_20_Create_20_Custom_20_Item(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_HIToolbar_2F_Toolbar_20_Create_20_Item_20_From_20_Drag(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_HIToolbar_2F_Toolbar_20_Create_20_Item_20_With_20_Identifier(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_HIToolbar_2F_Toolbar_20_Get_20_Allowed_20_Identifiers(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HIToolbar_2F_Toolbar_20_Get_20_Default_20_Identifiers(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HIToolbar_2F_Toolbar_20_Item_20_Added(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HIToolbar_2F_Toolbar_20_Item_20_Removed(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HIToolbar_2F_Toolbar_20_Layout_20_Changed(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HIToolbar_2F_Detach_20_Window(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_HIToolbar_2F_Find_20_Item_20_ID(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HIToolbar_2F_Find_20_Known_20_Item_20_ID(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HIToolbar_2F_Get_20_Allowed_20_Items(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_HIToolbar_2F_Get_20_Attributes(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_HIToolbar_2F_Get_20_Default_20_Items(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_HIToolbar_2F_Get_20_HIToolbarRef(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_HIToolbar_2F_Get_20_Identifier(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_HIToolbar_2F_Get_20_Items(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_HIToolbar_2F_Get_20_Known_20_Items(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_HIToolbar_2F_Get_20_Supports_20_Drop_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_HIToolbar_2F_Get_20_Visible_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_HIToolbar_2F_Get_20_Windows(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_HIToolbar_2F_Remove_20_Window(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_HIToolbar_2F_Set_20_HIToolbarRef(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_HIToolbar_2F_Set_20_Items(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_HIToolbar_2F_Set_20_Known_20_Items(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_HIToolbar_2F_Set_20_Windows(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_HIToolbar_2F_Use_20_Initial_20_Parameters(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_HIToolbar_20_Item_20_Object_2F_CE_20_Handle_20_Event(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HIToolbar_20_Item_20_Object_2F_CE_20_Toolbar_20_Item_20_Event(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HIToolbar_20_Item_20_Object_2F_CE_20_Control_20_Event(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HIToolbar_20_Item_20_Object_2F_Create_20_Toolbar_20_Item(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_HIToolbar_20_Item_20_Object_2F7E_Make_20_Initialization_20_Parameters(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_HIToolbar_20_Item_20_Object_2F_Use_20_Initial_20_Parameters(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_HIToolbar_20_Standard_20_Item_2F_Append_20_Identifier(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_HIToolbar_20_Standard_20_Item_2F_Close(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_HIToolbar_20_Standard_20_Item_2F_Create_20_Item(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HIToolbar_20_Standard_20_Item_2F_Find_20_Matching_20_Identifier(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HIToolbar_20_Standard_20_Item_2F_Get_20_Allowed_20_Order(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_HIToolbar_20_Standard_20_Item_2F_Get_20_Default_20_Order(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_HIToolbar_20_Standard_20_Item_2F_Get_20_Enabled_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_HIToolbar_20_Standard_20_Item_2F_Get_20_Identifier(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_HIToolbar_20_Standard_20_Item_2F_Open(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_HIToolbar_20_Standard_20_Item_2F_Report_20_Error(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_HIToolbar_20_Standard_20_Item_2F_Clone(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_HIToolbar_20_Item_2F_Close(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_HIToolbar_20_Item_2F_Create_20_Item(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HIToolbar_20_Item_2F_Get_20_Attributes(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_HIToolbar_20_Item_2F_Get_20_Command_20_ID(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_HIToolbar_20_Item_2F_Get_20_Icon_20_Reference(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_HIToolbar_20_Item_2F_Get_20_Label(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_HIToolbar_20_Item_2F_Get_20_Long_20_Help_20_Text(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_HIToolbar_20_Item_2F_Get_20_Owner(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_HIToolbar_20_Item_2F_Get_20_Short_20_Help_20_Text(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_HIToolbar_20_Item_2F_Open(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_HIToolbar_20_Item_2F_Set_20_Owner(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_HIToolbar_20_Item_2F_Setup_20_Help(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_HIToolbar_20_Item_2F_Setup_20_Icon(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_HIToolbar_20_Item_2F_Setup_20_Item(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_HIToolbar_20_Item_2F_Setup_20_Menu(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_HIToolbar_20_Item_2F7E_Create_20_HIToolbarItem(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HIToolbar_20_Custom_20_Item_2F_Bounds_20_Changed(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HIToolbar_20_Custom_20_Item_2F_Capture_20_Value(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_HIToolbar_20_Custom_20_Item_2F_CE_20_Bounds_20_Changed(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HIToolbar_20_Custom_20_Item_2F_CE_20_Toolbar_20_Item_20_Command_20_ID_20_Changed(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HIToolbar_20_Custom_20_Item_2F_CE_20_Toolbar_20_Item_20_Create_20_Custom_20_View(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HIToolbar_20_Custom_20_Item_2F_CE_20_Toolbar_20_Item_20_Enabled_20_State_20_Changed(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HIToolbar_20_Custom_20_Item_2F_CE_20_Toolbar_20_Item_20_Get_20_Persistent_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HIToolbar_20_Custom_20_Item_2F_CE_20_Toolbar_20_Item_20_Help_20_Text_20_Changed(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HIToolbar_20_Custom_20_Item_2F_CE_20_Toolbar_20_Item_20_Image_20_Changed(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HIToolbar_20_Custom_20_Item_2F_CE_20_Toolbar_20_Item_20_Label_20_Changed(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HIToolbar_20_Custom_20_Item_2F_CE_20_Toolbar_20_Item_20_Perform_20_Action(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HIToolbar_20_Custom_20_Item_2F_CE_20_Control_20_Event(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HIToolbar_20_Custom_20_Item_2F_CE_20_Toolbar_20_Item_20_Event(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HIToolbar_20_Custom_20_Item_2F_CE_20_Toolbar_20_Item_20_View_20_Event(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HIToolbar_20_Custom_20_Item_2F_Create_20_Item(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HIToolbar_20_Custom_20_Item_2F_Extract_20_Persistent_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_HIToolbar_20_Custom_20_Item_2F_Get_20_HIToolbarItemRef(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_HIToolbar_20_Custom_20_Item_2F_Get_20_Value_20_CFType(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_HIToolbar_20_Custom_20_Item_2F_Register(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_HIToolbar_20_Custom_20_Item_2F_Set_20_Value_20_CFType(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_HIToolbar_20_Custom_20_Item_2F_Setup_20_Custom(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_HIToolbar_20_Custom_20_Item_2F_Toolbar_20_Item_20_Command_20_ID_20_Changed(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HIToolbar_20_Custom_20_Item_2F_Toolbar_20_Item_20_Create_20_Custom_20_View(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HIToolbar_20_Custom_20_Item_2F_Toolbar_20_Item_20_Enabled_20_State_20_Changed(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HIToolbar_20_Custom_20_Item_2F_Toolbar_20_Item_20_Get_20_Persistent_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_HIToolbar_20_Custom_20_Item_2F_Toolbar_20_Item_20_Help_20_Text_20_Changed(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HIToolbar_20_Custom_20_Item_2F_Toolbar_20_Item_20_Image_20_Changed(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HIToolbar_20_Custom_20_Item_2F_Toolbar_20_Item_20_Label_20_Changed(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HIToolbar_20_Custom_20_Item_2F_Toolbar_20_Item_20_Perform_20_Action(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HIToolbar_20_Custom_20_Item_2F_TIV_20_Config_20_For_20_Mode(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HIToolbar_20_Custom_20_Item_2F_TIV_20_Config_20_For_20_Size(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HIToolbar_20_Custom_20_Item_2F7E_Make_20_Initialization_20_Parameters(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_HIToolbar_20_Custom_20_Item_2F_Use_20_Initial_20_Parameters(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_HIToolbar_20_Custom_20_Item_2F_CE_20_Get_20_Size_20_Constraints(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HIToolbar_20_Custom_20_Item_2F_CE_20_Hit(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HIToolbar_20_Custom_20_Item_2F_CE_20_Owning_20_Window_20_Changed(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HIToolbar_20_Control_20_Item_2F_Capture_20_Value(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_HIToolbar_20_Control_20_Item_2F_Create_20_Control(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_HIToolbar_20_Control_20_Item_2F_Get_20_Control_20_Record(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_HIToolbar_20_Control_20_Item_2F_Get_20_Frame(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_HIToolbar_20_Control_20_Item_2F_Get_20_Maximum_20_Value(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_HIToolbar_20_Control_20_Item_2F_Get_20_Maximum_20_Size(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_HIToolbar_20_Control_20_Item_2F_Get_20_Minimum_20_Value(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_HIToolbar_20_Control_20_Item_2F_Get_20_Minimum_20_Size(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_HIToolbar_20_Control_20_Item_2F_Get_20_Value(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_HIToolbar_20_Control_20_Item_2F_Get_20_Value_20_CFType(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_HIToolbar_20_Control_20_Item_2F_Get_20_Window(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_HIToolbar_20_Control_20_Item_2F_Open_20_Control(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_HIToolbar_20_Control_20_Item_2F_Set_20_Control_20_Record(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_HIToolbar_20_Control_20_Item_2F_Set_20_Value(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_HIToolbar_20_Control_20_Item_2F_Set_20_Value_20_CFType(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_HIToolbar_20_Control_20_Item_2F_Toolbar_20_Item_20_Create_20_Custom_20_View(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HIToolbar_20_Control_20_Item_2F7E_Create_20_Control_20_Record(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_HIToolbar_20_Control_20_Item_2F7E_Get_20_Control_20_Value(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_HIToolbar_20_Control_20_Item_2F7E_Set_20_Control_20_Value(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_HIToolbar_20_Control_20_Item_2F_CE_20_Get_20_Size_20_Constraints(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HIToolbar_20_Control_20_Item_2F_Destruct_20_Control_20_Events(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_HIToolbar_20_Control_20_Item_2F_Initialize_20_Control_20_Events(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_HIToolbar_20_Control_20_Item_2F_Get_20_Carbon_20_EventTargetRef(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_HIToolbar_20_Control_20_Item_2F_CE_20_Handle_20_Event(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HIToolbar_20_Control_20_Item_2F_Get_20_Control_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object *,V_Object *,V_Object *);
enum opTrigger vpx_method_HIToolbar_20_Control_20_Item_2F_Get_20_Control_20_Data_20_Text(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HIToolbar_20_Control_20_Item_2F_Set_20_Control_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HIToolbar_20_Control_20_Item_2F_Set_20_Control_20_Data_20_Long(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HIToolbar_20_Control_20_Item_2F_Set_20_Control_20_Data_20_Ptr(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HIToolbar_20_Control_20_Item_2F_Get_20_Sub_20_ControlRef(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_HIToolbar_20_Control_20_Item_2F_Set_20_Sub_20_ControlRef(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_HIToolbar_20_Control_20_Item_2F_Create_20_Sub_20_Pane(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HIToolbar_20_Control_20_Item_2F_Bounds_20_Changed(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HIToolbar_20_Control_20_Item_2F_Find_20_Sub_20_Control_20_Bounds(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_HIToolbar_20_Control_20_Item_2F_TIV_20_Config_20_For_20_Size(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HIToolbar_20_HIView_20_Item_2F_Bounds_20_Changed(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HIToolbar_20_HIView_20_Item_2F_Get_20_HIView_20_Class(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_HIToolbar_20_HIView_20_Item_2F_Invalidate(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_HIToolbar_20_HIView_20_Item_2F_Make_20_HIView_20_Class(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_HIToolbar_20_HIView_20_Item_2F7E_Create_20_Control_20_Record(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_HIView_2F_Register_20_Instance(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_HIView_2F_Prefers_20_CoreGraphics(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_HIView_2F_Control_20_Hit(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HIView_2F_Control_20_Draw_20_QD(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_HIView_2F_Control_20_Draw_20_CG(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_HIView_2F_Control_20_Draw(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_HIView_2F_CE_20_Handle_20_Event(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HIView_2F_CE_20_HIView_20_Event(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HIView_2F_CE_20_Control_20_Class_20_Event(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HIView_2F_CE_20_Control_20_Draw(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HIView_2F_CE_20_Control_20_Hit(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HIView_2F_Control_20_Click(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HIView_2F_Get_20_Control_20_Bounds_20_QD(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_HIView_2F_Get_20_Bounds_20_QD(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_HIView_2F_CE_20_Control_20_Initialize(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HIView_2F_Control_20_Initialize(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_HIView_2F_Get_20_Supported_20_Behaviors(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_HIView_2F_Get_20_Control_20_Auto_20_Invalidate_20_Flags(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_HIView_2F_Set_20_Control_20_Auto_20_Invalidate_20_Flags(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_HIView_2F_Change_20_Auto_20_Invalidate_20_Flags(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_HIView_2F_Invalidate_20_Auto(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_HIView_2F_Invalidate(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_HIView_2F_HIView_20_Set_20_Needs_20_Display(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_HIView_2F_HIView_20_Get_20_Focus_20_Part(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_HIView_2F_HIView_20_Reshape_20_Structure(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_HIView_2F_Reshape(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_HIView_2F_Set_20_Control_20_Bounds_20_QD(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_HIView_2F_Get_20_Control_20_Hilite(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_HIView_2F_Set_20_Control_20_Hilite(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_HIView_2F_Get_20_Control_20_Minimum(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_HIView_2F_Set_20_Control_20_Minimum(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_HIView_2F_Set_20_Control_20_Maximum(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_HIView_2F_Get_20_Control_20_Maximum(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_HIView_2F_Set_20_Control_20_Value(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_HIView_2F_Get_20_Control_20_Value(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_HIView_2F_HIObject_20_Construct(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_HIView_2F_Control_20_Construct(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_HIView_2F_Control_20_Destruct(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_HIView_2F_HIObject_20_Destruct(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_HIView_2F_CE_20_Control_20_Dispose(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HIView_2F_Control_20_Dispose(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_HIView_2F_CE_20_Control_20_Get_20_Focus_20_Part(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HIView_2F_CE_20_Control_20_Hit_20_Test(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HIView_2F_Control_20_Hit_20_Test(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_HIView_2F_CE_20_Control_20_Set_20_Focus_20_Part(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HIView_2F_Control_20_Set_20_Focus_20_Part(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_HIView_2F_CE_20_Control_20_Simulate_20_Hit(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HIView_2F_Control_20_Simulate_20_Hit(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HIView_2F_CE_20_Control_20_Text_20_Input(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HIView_2F_Control_20_Text_20_Input(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HIView_2F_CE_20_HICommand_20_Dispatch(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HIView_2F_CE_20_Control_20_Click(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HIView_2F_CE_20_Control_20_Activate(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HIView_2F_Control_20_Active_20_State_20_Changed(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HIView_2F_CE_20_Control_20_Deactivate(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HIView_2F_CE_20_Control_20_Bounds_20_Changed(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HIView_2F_Control_20_Bounds_20_Changed(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HIView_2F_CE_20_Control_20_Enabled_20_State_20_Changed(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HIView_2F_Control_20_Enabled_20_State_20_Changed(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HIView_2F_CE_20_Control_20_Value_20_Field_20_Changed(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HIView_2F_Control_20_Value_20_Field_20_Changed(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HIView_2F_CE_20_Control_20_Title_20_Changed(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HIView_2F_Control_20_Title_20_Changed(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HIView_2F_CE_20_Control_20_Set_20_Cursor(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HIView_2F_Control_20_Set_20_Cursor(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HIView_2F_CE_20_Control_20_Hilite_20_Changed(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HIView_2F_Control_20_Hilite_20_Changed(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HIView_2F_CE_20_Control_20_Get_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HIView_2F_Control_20_Get_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_HIView_2F_Control_20_Get_20_Kind(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_HIView_2F_Get_20_Control_20_Kind(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_HIView_2F_Get_20_Carbon_20_EventTargetRef(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_HIView_2F_CE_20_Control_20_Set_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HIView_2F_Control_20_Set_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HIView_2F_CE_20_Control_20_Get_20_Part_20_Region(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HIView_2F_Control_20_Get_20_Part_20_Region(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_HIView_2F_CGPoint_20_In_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HIView_2F_QDPoint_20_In_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HIView_2F_Get_20_OpaqueControlRef(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_HIView_2F_Get_20_ControlRef(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_HIView_2F_Get_20_HIViewRef(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_HIView_2F_Use_20_Initial_20_Parameters(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_HIView_2F_Get_20_Bounds(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_HIView_2F_Set_20_Visible_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_HIView_2F_Get_20_Visible_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_HIView_2F_Get_20_Frame(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_HIView_2F_Set_20_Frame(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_HIView_20_Scrollable_20_View_2F_CE_20_HIView_20_Event(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HIView_20_Scrollable_20_View_2F_CE_20_Scrollable_20_Class_20_Event(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HIView_20_Scrollable_20_View_2F_Scrollable_20_Get_20_Info(V_Environment, enum boolType *, Nat4,V_Object,V_Object *,V_Object *,V_Object *,V_Object *);
enum opTrigger vpx_method_HIView_20_Scrollable_20_View_2F_Scrollable_20_Scroll_20_To(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_HIView_20_Scrollable_20_View_2F_Get_20_Total_20_Bounds(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_HIView_20_Scrollable_20_View_2F_Get_20_Total_20_Size(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_HIView_20_Scrollable_20_View_2F_Get_20_Origin(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_HIView_20_Scrollable_20_View_2F_Get_20_Line_20_Size(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_HIView_20_Scrollable_20_View_2F_Set_20_Origin(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_HIView_20_Scrollable_20_View_2F_Set_20_Total_20_Size(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_HIView_20_Scrollable_20_View_2F_Set_20_Line_20_Size(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_HIView_20_Scrollable_20_View_2F_Prefers_20_CoreGraphics(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_HIView_20_Scrollable_20_View_2F_Control_20_Draw_20_CG(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_MacOS_20_Icon_20_Service_2F_Register_20_Icons(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_MacOS_20_Icon_20_Service_2F_Unregister_20_Icons(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_MacOS_20_Icon_20_Service_2F_Close(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_MacOS_20_Icon_20_Service_2F_Open(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_MacOS_20_Icon_20_Reference_2F_Register_20_Icon(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_MacOS_20_Icon_20_Reference_2F_Unregister_20_Icon(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_MacOS_20_Icon_20_Reference_2F_Set_20_IconRef(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_MacOS_20_Icon_20_Reference_2F_Get_20_IconRef(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_MacOS_20_Icon_20_Reference_2F_Release_20_IconRef(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_MacOS_20_Icon_20_Reference_2F_Open(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_MacOS_20_Icon_20_Reference_2F_Close(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_MacOS_20_Icon_20_Registrar_2F_Register_20_Icon(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_MacOS_20_Icon_20_Registrar_2F_Unregister_20_Icon(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_MacOS_20_Icon_20_Registrar_2F_Get_20_Reference(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_MacOS_20_Icon_20_Registrar_2F_Get_20_Creator(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_MacOS_20_Icon_20_Registrar_2F_Get_20_Type(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_MacOS_20_Icon_20_Registrar_2F_Get_20_Domain(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_MacOS_20_Icon_20_icns_20_File_20_Registrar_2F_Register_20_Icon(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_CFSTR(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_To_20_CFStringRef(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_From_20_CFStringRef(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Create_20_CFStringRef(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_From_20_CFStringRef_20_Encoding(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_To_20_CFString(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_New_20_CFRange(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_From_20_CFRange(V_Environment, enum boolType *, Nat4,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_Get_20_CF_20_Constant(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Get_20_Framework_20_Constant(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Get_20_Framework_20_Structure(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Copy_20_Localized_20_String(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_CFPreferences_20_Synchronize(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_CFPrefs_20_Set_20_App_20_Value(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_CFPrefs_20_Get_20_App_20_Value(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_To_20_MacRoman(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_From_20_MacRoman(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_To_20_CFBooleanRef(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_From_20_CFBooleanRef(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_TEST_20_CFNumber(V_Environment, enum boolType *, Nat4);
enum opTrigger vpx_method_TEST_20_CFString_20_1(V_Environment, enum boolType *, Nat4);
enum opTrigger vpx_method_TEST_20_CFString_20_2(V_Environment, enum boolType *, Nat4);
enum opTrigger vpx_method_TEST_20_CFString_20_3(V_Environment, enum boolType *, Nat4);
enum opTrigger vpx_method_TEST_20_CFString_20_4(V_Environment, enum boolType *, Nat4);
enum opTrigger vpx_method_TEST_20_CFURL_20_1(V_Environment, enum boolType *, Nat4);
enum opTrigger vpx_method_TEST_20_CFURL_20_2(V_Environment, enum boolType *, Nat4);
enum opTrigger vpx_method_TEST_20_CFData(V_Environment, enum boolType *, Nat4);
enum opTrigger vpx_method_TEST_20_Display_20_Alert(V_Environment, enum boolType *, Nat4);
enum opTrigger vpx_method_TEST_20_Display_20_Notice(V_Environment, enum boolType *, Nat4);
enum opTrigger vpx_method_TEST_20_CFConstant(V_Environment, enum boolType *, Nat4);
enum opTrigger vpx_method_TEST_20_CFPref_20_Write(V_Environment, enum boolType *, Nat4);
enum opTrigger vpx_method_TEST_20_CFPref_20_Read(V_Environment, enum boolType *, Nat4);
enum opTrigger vpx_method_TEST_20_CFPref_20_Sync(V_Environment, enum boolType *, Nat4);
enum opTrigger vpx_method_To_20_CFType(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_From_20_CFType(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Get_20_CFNullRef(V_Environment, enum boolType *, Nat4,V_Object *);
enum opTrigger vpx_method_To_20_CFNumberRef(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_From_20_CFNumberRef(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_CF_20_Release(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_CF_20_Base_2F_Clone(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_CF_20_Base_2F_Clone_20_Reference(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_CF_20_Base_2F_Default_20_Range(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_CF_20_Base_2F_Dispose(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_CF_20_Base_2F_Equal(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_CF_20_Base_2F_Get_20_Allocator(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_CF_20_Base_2F_Get_20_CF_20_Reference(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_CF_20_Base_2F_Get_20_Class_20_Type_20_ID(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_CF_20_Base_2F_Get_20_Current_20_Allocator(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_CF_20_Base_2F_Get_20_Release_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_CF_20_Base_2F_Get_20_Retain_20_Count(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_CF_20_Base_2F_Get_20_Type_20_ID(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_CF_20_Base_2F_Hash(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_CF_20_Base_2F_New(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_CF_20_Base_2F_Release(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_CF_20_Base_2F_Retain(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_CF_20_Base_2F_Set_20_Allocator(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_CF_20_Base_2F_Set_20_CF_20_Reference(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_CF_20_Base_2F_Set_20_Release_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_CF_20_Base_2F_Show(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_CF_20_Base_2F_CF_20_Last_20_Release(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_CF_20_Base_2F_Don_27_t_20_Release(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_CF_20_Array_2F_New(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_CF_20_Array_2F_Get_20_Class_20_Type_20_ID(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_CF_20_Array_2F_Append_20_Value(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_CF_20_Array_2F_Get_20_Count(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_CF_20_Array_2F_Get_20_Value_20_At_20_Index(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_CF_20_Array_2F_Get_20_Value_20_At_20_Index_20_As_20_CFStringRef(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_CF_20_Array_2F_Get_20_Value_20_At_20_Index_20_As_20_String(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_CF_20_Array_2F_Get_20_All_20_Values(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_CF_20_Array_2F_Get_20_All_20_Values_20_As_20_Strings(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_CF_20_Bag_2F_New(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_CF_20_Bag_2F_Get_20_Class_20_Type_20_ID(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_CF_20_Boolean_2F_New(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_CF_20_Boolean_2F_Get_20_Class_20_Type_20_ID(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_CF_20_Bundle_2F_New(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_CF_20_Bundle_2F_Get_20_Class_20_Type_20_ID(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_CF_20_Bundle_2F_Create_20_Bundle(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_CF_20_Bundle_2F_Get_20_Bundle_20_Identifier(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_CF_20_Bundle_2F_Get_20_Bundle_20_With_20_Identifier(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_CF_20_Bundle_2F_Get_20_CFBundleRef(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_CF_20_Bundle_2F_Get_20_Data_20_Pointer_20_For_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_CF_20_Bundle_2F_Get_20_Function_20_Pointer_20_For_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_CF_20_Bundle_2F_Get_20_Main_20_Bundle(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_CF_20_Bundle_2F_Is_20_Executable_20_Loaded_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_CF_20_Bundle_2F_Load_20_Executable(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_CF_20_Bundle_2F_Unload_20_Executable(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_CF_20_Bundle_2F_Create_20_From_20_CFURL(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_CF_20_Bundle_2F_Create_20_From_20_FSRef(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_CF_20_Bundle_2F_Get_20_Package_20_Info(V_Environment, enum boolType *, Nat4,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_CF_20_Bundle_2F_Get_20_Value_20_For_20_Info_20_Dictionary_20_Key(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_CF_20_Bundle_2F_Get_20_Structure_20_Pointer_20_For_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_CF_20_Bundle_2F_Copy_20_Resource_20_URL(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_CF_20_Bundle_2F_Copy_20_Bundle_20_URL(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_CF_20_Data_2F_New(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_CF_20_Data_2F_Get_20_Class_20_Type_20_ID(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_CF_20_Data_2F_Append_20_Bytes(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_CF_20_Data_2F_Create(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_CF_20_Data_2F_Create_20_Mutable(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_CF_20_Data_2F_Create_20_Mutable_20_Copy(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_CF_20_Data_2F_Default_20_Bytes_20_Length(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_CF_20_Data_2F_Delete_20_Bytes(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_CF_20_Data_2F_Get_20_Byte_20_Pointer(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_CF_20_Data_2F_Get_20_Length(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_CF_20_Data_2F_Get_20_Mutable_20_Byte_20_Pointer(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_CF_20_Data_2F_Increase_20_Length(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_CF_20_Data_2F_Set_20_Length(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_CF_20_Data_2F_Replace_20_Bytes(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_CF_20_Data_2F_Get_20_Bytes(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_CF_20_Data_2F_Create_20_With_20_Object(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_CF_20_Data_2F_Get_20_Object(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_CF_20_Data_2F_Get_20_Text(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_CF_20_Data_2F_Create_20_With_20_String(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_CF_20_Data_2F_Get_20_Integer(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_CF_20_Date_2F_New(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_CF_20_Date_2F_Get_20_Class_20_Type_20_ID(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_CF_20_Date_2F_Get_20_Absolute_20_Time(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_CF_20_Date_2F_Get_20_Seconds_20_Since_20_Date(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_CF_20_Date_2F_Compare(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_CF_20_Dictionary_2F_New(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_CF_20_Dictionary_2F_Get_20_Class_20_Type_20_ID(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_CF_20_Dictionary_2F_Add_20_Key_20_Value(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_CF_20_Dictionary_2F_Set_20_Key_20_Value(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_CF_20_Dictionary_2F_Get_20_Key_20_Value(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_CF_20_Dictionary_2F_Create_20_Mutable_20_For_20_CFTypes(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_CF_20_Dictionary_2F7E_Set_20_Value(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_CF_20_Dictionary_2F7E_Get_20_Value(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_CF_20_Number_2F_New(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_CF_20_Number_2F_Get_20_Class_20_Type_20_ID(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_CF_20_Number_2F_Create(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_CF_20_Number_2F_Get_20_Byte_20_Size(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_CF_20_Number_2F_Get_20_Type(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_CF_20_Number_2F_Is_20_Float_20_Type_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_CF_20_Number_2F_Get_20_Number_20_Value(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_CF_20_Number_2F_Get_20_Value(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_CF_20_Number_2F_Create_20_Byte_20_Integer(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_CF_20_Number_2F_Create_20_Long_20_Integer(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_CF_20_Number_2F_Create_20_Short_20_Integer(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_CF_20_Number_2F_Create_20_Float(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_CF_20_PlugIn_2F_New(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_CF_20_PlugIn_2F_Get_20_Class_20_Type_20_ID(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_CF_20_Set_2F_New(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_CF_20_Set_2F_Get_20_Class_20_Type_20_ID(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_CF_20_String_2F_New(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_CF_20_String_2F_Get_20_Class_20_Type_20_ID(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_CF_20_String_2F_Append(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_CF_20_String_2F_Append_20_String(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_CF_20_String_2F_Capitalize(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_CF_20_String_2F_Clone_20_Reference(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_CF_20_String_2F_Compare_20_Range(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_CF_20_String_2F_Compare(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_CF_20_String_2F_Create_20_Mutable(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_CF_20_String_2F_Create_20_Mutable_20_Copy(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_CF_20_String_2F_Create_20_With_20_String(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_CF_20_String_2F_Create_20_With_20_Substring(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_CF_20_String_2F_Create_20_With_20_CString(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_CF_20_String_2F_Create_20_With_20_UniChar(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_CF_20_String_2F_Default_20_Range(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_CF_20_String_2F_Default_20_Encoding(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_CF_20_String_2F_Default_20_Locale(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_CF_20_String_2F_Find(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *,V_Object *,V_Object *);
enum opTrigger vpx_method_CF_20_String_2F_Find_20_Range(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object *,V_Object *,V_Object *);
enum opTrigger vpx_method_CF_20_String_2F_Get_20_CString(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_CF_20_String_2F_Get_20_Character_20_At_20_Index(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_CF_20_String_2F_Get_20_Characters(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_CF_20_String_2F_Get_20_Double_20_Value(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_CF_20_String_2F_Get_20_Encoding_20_Default(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_CF_20_String_2F_Get_20_Encoding_20_Fastest(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_CF_20_String_2F_Get_20_Encoding_20_Smallest(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_CF_20_String_2F_Get_20_Encoding_20_System(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_CF_20_String_2F_Get_20_Integer_20_Value(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_CF_20_String_2F_Get_20_Length(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_CF_20_String_2F_Get_20_Maximum_20_Size_20_For_20_Encoding(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_CF_20_String_2F_Get_20_String(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_CF_20_String_2F_Get_20_UniChar(V_Environment, enum boolType *, Nat4,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_CF_20_String_2F_Has_20_Prefix(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_CF_20_String_2F_Has_20_Suffix(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_CF_20_String_2F_Lowercase(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_CF_20_String_2F_Uppercase(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_CF_20_String_2F_Pad(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_CF_20_String_2F_Replace(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_CF_20_String_2F_Replace_20_All(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_CF_20_String_2F_Show(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_CF_20_String_2F_Trim(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_CF_20_String_2F_Trim_20_Whitespace(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_CF_20_TimeZone_2F_New(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_CF_20_TimeZone_2F_Get_20_Class_20_Type_20_ID(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_CF_20_Tree_2F_New(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_CF_20_Tree_2F_Get_20_Class_20_Type_20_ID(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_CF_20_URL_2F_New(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_CF_20_URL_2F_Get_20_Class_20_Type_20_ID(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_CF_20_URL_2F_Can_20_Be_20_Decomposed_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_CF_20_URL_2F_Capture_20_Main_20_Bundle(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_CF_20_URL_2F_Capture_20_Private_20_Frameworks_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_CF_20_URL_2F_Capture_20_Private_20_Frameworks(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_CF_20_URL_2F_Capture_20_Resources_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_CF_20_URL_2F_Capture_20_Resources_20_Directory(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_CF_20_URL_2F_Copy_20_Absolute_20_URL(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_CF_20_URL_2F_Copy_20_File_20_System_20_Path(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_CF_20_URL_2F_Copy_20_Host_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_CF_20_URL_2F_Copy_20_Last_20_Path_20_Component(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_CF_20_URL_2F_Copy_20_Net_20_Location(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_CF_20_URL_2F_Copy_20_Path(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_CF_20_URL_2F_Copy_20_Path_20_Extension(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_CF_20_URL_2F_Default_20_Path_20_Style(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_CF_20_URL_2F_Create_20_Copy_20_Appending_20_Path_20_Component(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_CF_20_URL_2F_Create_20_Copy_20_Deleting_20_Last_20_Path_20_Component(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_CF_20_URL_2F_Create_20_From_20_File_20_System_20_Path(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_CF_20_URL_2F_Create_20_From_20_FSRef(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_CF_20_URL_2F_Create_20_With_20_CFString(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_CF_20_URL_2F_Create_20_With_20_String(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_CF_20_URL_2F_Get_20_FSRef(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_CF_20_URL_2F_Get_20_Port_20_Number(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_CF_20_URL_2F_Get_20_String(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_CF_20_URL_2F_LS_20_Open_20_URL(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_CF_20_URL_2F_Create_20_File(V_Environment, enum boolType *, Nat4,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_CF_20_URL_2F_Write_20_Data_20_And_20_Properties_20_To_20_Resource(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_CF_20_URL_2F_Create_20_Data_20_And_20_Properties_20_From_20_Resource(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object,V_Object *,V_Object *,V_Object *,V_Object *);
enum opTrigger vpx_method_CF_20_URL_2F_Destroy_20_Resource(V_Environment, enum boolType *, Nat4,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_CF_20_URL_2F_Create_20_Property_20_List_20_From_20_XML_20_File(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_CF_20_URL_2F_Write_20_XML_20_File_20_From_20_Property_20_List(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_CF_20_UUID_2F_New(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_CF_20_UUID_2F_Get_20_Class_20_Type_20_ID(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_CF_20_UUID_2F_Create(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_CF_20_UUID_2F_Create_20_From_20_UUID_20_Bytes(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_CF_20_UUID_2F_Create_20_From_20_List(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_CF_20_UUID_2F_Create_20_From_20_String(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_CF_20_UUID_2F_Get_20_Bytes(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_CF_20_UUID_2F_Get_20_Bytes_20_List(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_CF_20_UUID_2F_Get_20_String(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_CF_20_XMLNode_2F_New(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_CF_20_XMLNode_2F_Get_20_Class_20_Type_20_ID(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_CF_20_XMLParser_2F_New(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_CF_20_XMLParser_2F_Get_20_Class_20_Type_20_ID(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_CF_20_Absolute_20_Time_2F_Get_20_Value(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_CF_20_Absolute_20_Time_2F_Set_20_Value(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_CF_20_Absolute_20_Time_2F_New(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_CF_20_Absolute_20_Time_2F_Get_20_Gregorian_20_Date(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_CF_20_Absolute_20_Time_2F_Create_20_With_20_Now(V_Environment, enum boolType *, Nat4,V_Object *);
enum opTrigger vpx_method_New_20_CGPoint(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_New_20_CGSize(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_New_20_CGRect(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_From_20_CGPoint(V_Environment, enum boolType *, Nat4,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_From_20_CGSize(V_Environment, enum boolType *, Nat4,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_From_20_CGRect(V_Environment, enum boolType *, Nat4,V_Object,V_Object *,V_Object *,V_Object *,V_Object *);
enum opTrigger vpx_method_list_2D_to_2D_CGRect(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_list_2D_to_2D_CGSize(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_list_2D_to_2D_CGPoint(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_CG_20_Context_2F_New(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_CG_20_Context_2F_Setup_20_CoreGraphics(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_CG_20_Context_2F_Dispose(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_CG_20_Context_2F_Set_20_CGContextRef(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_CG_20_Context_2F_Get_20_CGContextRef(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_CG_20_Context_2F_Set_20_Stroke_20_RGB_20_Color(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_CG_20_Context_2F_Set_20_Fill_20_RGB_20_Color(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_CG_20_Context_2F_Fill_20_Rect(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_CG_20_Context_2F_Fill_20_Path(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_CG_20_Context_2F_Fill_20_Oval(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_CG_20_Context_2F_Stroke_20_Rect(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_CG_20_Context_2F_Stroke_20_Path(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_CG_20_Context_2F_Stroke_20_Oval(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_CG_20_Context_2F_Add_20_Arc_20_To_20_Point(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_CG_20_Context_2F_Add_20_Line_20_To_20_Point(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_CG_20_Context_2F_Add_20_Rect(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_CG_20_Context_2F_Add_20_Rounded_20_Rect(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_CG_20_Context_2F_Add_20_Oval(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_CG_20_Context_2F_Add_20_Arc(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_CG_20_Context_2F_Save_20_GState(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_CG_20_Context_2F_Restore_20_GState(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_CG_20_Context_2F_Begin_20_Path(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_CG_20_Context_2F_Close_20_Path(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_CG_20_Context_2F_Translate_20_CTM(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_CG_20_Context_2F_Scale_20_CTM(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_CG_20_Context_2F_Move_20_To_20_Point(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_CG_20_Context_2F_Fill_20_Rounded_20_Rect(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_CG_20_Context_2F_Stroke_20_Rounded_20_Rect(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_CG_20_Context_2F_Stroke_20_Line(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_CG_20_Context_2F_Begin_20_For_20_CGrafPort(V_Environment, enum boolType *, Nat4,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_CG_20_Context_2F_End_20_For_20_CGrafPort(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_CG_20_Context_2F_Clear_20_Rect(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_CG_20_Context_2F_Sync_20_Origin_20_With_20_CGrafPort(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_CG_20_Context_2F_Flush(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_CG_20_Context_2F_Stroke_20_Arc(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_CG_20_Context_2F_Release(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_CG_20_Context_2F_Set_20_Should_20_Antialias(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_CG_20_Context_2F_Set_20_Line_20_Width(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_CG_20_Context_2F_Add_20_Path(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_CG_20_Context_2F_Fill_20_And_20_Stroke_20_Path(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_CG_20_Context_2F_Add_20_Star(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_CG_20_Context_2F_Add_20_Burst(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_CG_20_Path_2F_Set_20_CGPathRef(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_CG_20_Path_2F_Get_20_CGPathRef(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_CG_20_Path_2F_Dispose(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_CG_20_Path_2F_Create_20_Mutable(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_CG_20_Path_2F_Close_20_Subpath(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_CG_20_Path_2F_Release(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_CG_20_Path_2F_Retain(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_CG_20_Path_2F_Add_20_Arc(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_CG_20_Path_2F_Add_20_Arc_20_Rect(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_CG_20_Path_2F_Add_20_Arc_20_To_20_Point(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_CG_20_Path_2F_Add_20_Line_20_To_20_Point(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_CG_20_Path_2F_Add_20_Rect(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_CG_20_Path_2F_Add_20_Path(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_CG_20_Path_2F_Move_20_To_20_Point(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_CG_20_Path_2F_Equal_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_CG_20_Path_2F_Is_20_Empty_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_CG_20_Path_2F_Is_20_Rect_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_CG_20_Path_2F_Create_20_Corners(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_CG_20_Path_2F_Get_20_Current_20_Transform(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_CG_20_Path_2F_Set_20_Current_20_Transform(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_CG_20_Path_2F_Begin_20_Path(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_CG_20_Path_2F_Close_20_Path(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_CG_20_Path_2F_Release_20_Path(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_CG_20_Path_2F_Add_20_Line(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_CG_20_Path_2F_Add_20_Oval(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_CG_20_Path_2F_Add_20_Diamond(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_CG_20_Path_2F_Add_20_Corners(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_CG_20_Path_2F_Add_20_Rounded_20_Rect(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_CG_20_Path_2F_Add_20_Triangle(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_CG_20_Path_2F_Add_20_Star(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_CG_20_Path_2F_Add_20_Burst(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_CG_20_Bitmap_20_Context_2F_Create(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_CG_20_Bitmap_20_Context_2F_Create_20_32_2D_RGBA(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_CG_20_Bitmap_20_Context_2F_Create_20_Image(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_WindowRef_20_To_20_Object(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Get_20_Front_20_Window(V_Environment, enum boolType *, Nat4,V_Object *);
enum opTrigger vpx_method_Get_20_Front_20_Window_20_Type(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Close_20_All_20_Windows(V_Environment, enum boolType *, Nat4);
enum opTrigger vpx_method_Window_2F_CE_20_Handle_20_Event(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Window_2F_CE_20_HICommand_20_Update_20_Status(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Window_2F_CE_20_HICommand_20_Process(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Window_2F_CE_20_Window_20_Event(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Window_2F_Create_20_Window_20_Class(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Window_2F_Create_20_Nib_20_Window(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Window_2F_Create_20_With_20_WindowRef(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Window_2F_Report_20_Error(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Window_2F_Get_20_WindowRef(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Window_2F_Set_20_WindowRef(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Window_2F_Initialize(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Window_2F_Initialize_20_Window_20_Events(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Window_2F_Dispose(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Window_2F_Close(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Window_2F_Get_20_CGrafPtr(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Window_2F_Set_20_Title(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Window_2F_Copy_20_Title(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Window_2F_Set_20_Alternate_20_Title(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Window_2F_Copy_20_Alternate_20_Title(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Window_2F_Show(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Window_2F_Hide(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Window_2F_Is_20_Visible_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Window_2F_Select(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Window_2F_Draw(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Window_2F_Activated(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Window_2F_Deactivated(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Window_2F_Moved(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Window_2F_Resized(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Window_2F_Get_20_Ideal_20_Size(V_Environment, enum boolType *, Nat4,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_Window_2F_Click_20_Content(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Window_2F_Move_20_Content_20_TopLeft_20_To(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Window_2F_Set_20_Content_20_Size(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Window_2F_Invalidate_20_Region(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Window_2F_Invalidate_20_Rect(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Window_2F_Validate_20_Region(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Window_2F_Validate_20_Rect(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Window_2F_Update_20_Now(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Window_2F_Find_20_ControlRef(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Window_2F_Enable_20_Control(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Window_2F_Disable_20_Control(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Window_2F_Show_20_Control(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Window_2F_Hide_20_Control(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Window_2F_CE_20_Window_20_Close(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Window_2F_CE_20_Window_20_Close_20_All(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Window_2F_CE_20_Window_20_Click_20_Content(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Window_2F_CE_20_Window_20_Draw_20_Content(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Window_2F_CE_20_Window_20_Activated(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Window_2F_CE_20_Window_20_Deactivated(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Window_2F_CE_20_Window_20_Bounds_20_Changed(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Window_2F_CE_20_Window_20_Get_20_Ideal_20_Size(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Window_2F_CE_20_Window_20_Resize_20_Completed(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Window_2F_CE_20_Window_20_Drag_20_Completed(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Window_2F_Get_20_Carbon_20_EventTargetRef(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Window_2F_Get_20_Content_20_HIViewRef(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Window_2F_Get_20_Root_20_HIViewRef(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Window_2F_Get_20_Window_20_Alpha(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Window_2F_Set_20_Window_20_Alpha(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Window_2F_Get_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Window_2F7E_Change_20_Window_20_Attributes(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Window_2F7E_Set_20_Automatic_20_Control_20_Drag_20_Tracking_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Window_2F_Find_20_Control(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Window_2F_Default_20_ControlID(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Window_2F_Get_20_Window_20_Bounds(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Window_2F_Set_20_Window_20_Bounds(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Window_2F7E_Set_20_Window_20_Modified(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Window_2F7E_Set_20_Proxy_20_Type(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Window_2F7E_Set_20_Proxy_20_Alias(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Window_2F7E_Set_20_Proxy_20_FSSpec(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Window_2F7E_Set_20_Proxy_20_IconRef(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Window_2F7E_Get_20_Proxy_20_IconRef(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Window_2F_Get_20_Project_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Window_2F_Get_20_Method_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Window_2F_Advance_20_Focus(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Window_2F_Is_20_Compositing_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Window_2F_Refresh(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Window_2F_Close_20_All(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Sheet_20_Window_2F_Set_20_Parent_20_Window(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Sheet_20_Window_2F_Get_20_Parent_20_Window(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Sheet_20_Window_2F_Show(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Sheet_20_Window_2F_Hide(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Sheet_20_Window_2F_Dispose(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Sheet_20_Window_2F_CE_20_HICommand_20_Update_20_Status(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Drawer_20_Window_2F_Set_20_Parent_20_Window(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Drawer_20_Window_2F_Get_20_Parent_20_Window(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Drawer_20_Window_2F_Dispose(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Drawer_20_Window_2F_Show(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Drawer_20_Window_2F_Hide(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Drawer_20_Window_2F_Is_20_Open_3F_(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Drawer_20_Window_2F_Default_20_Edge(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Drawer_20_Window_2F_Drawer_20_Close(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Drawer_20_Window_2F_Drawer_20_Get_20_Current_20_Edge(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Drawer_20_Window_2F_Drawer_20_Get_20_Offsets(V_Environment, enum boolType *, Nat4,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_Drawer_20_Window_2F_Drawer_20_Get_20_Parent(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Drawer_20_Window_2F_Drawer_20_Get_20_Preferred_20_Edge(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Drawer_20_Window_2F_Drawer_20_Get_20_State(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Drawer_20_Window_2F_Drawer_20_Open(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Drawer_20_Window_2F_Drawer_20_Set_20_Offsets(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Drawer_20_Window_2F_Drawer_20_Set_20_Parent(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Drawer_20_Window_2F_Drawer_20_Set_20_Preferred_20_Edge(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Drawer_20_Window_2F_Drawer_20_Toggle(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Drawer_20_Window_2F_Toggle(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Drawer_20_Window_2F_Open(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Document_20_Window_2F_Initialize(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Document_20_Window_2F_Initialize_20_Drawers(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Document_20_Window_2F_Initialize_20_Toolbar(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Document_20_Window_2F_Toggle_20_Drawer(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Document_20_Window_2F_Find_20_Drawer_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Document_20_Window_2F_Create_20_HIToolbar(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Document_20_Window_2F_Get_20_Toolbar(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Document_20_Window_2F_Set_20_Toolbar(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Document_20_Window_2F_Dispose(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Document_20_Window_2F_Dispose_20_Drawers(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Document_20_Window_2F_Dispose_20_Toolbar(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Document_20_Window_2F7E_Set_20_Toolbar_20_Button_20_Attribute(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Document_20_Window_2F7E_Set_20_Toolbar_20_Visible_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Document_20_Window_2F7E_Set_20_Window_20_Toolbar(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Document_20_Window_2F_Install_20_Toolbar(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Document_20_Window_2F_Remove_20_Toolbar(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_ControlRef_20_To_20_Object(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Object_20_To_20_ControlRef(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Convert_20_HIPoint(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_Convert_20_HIRect(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_Convert_20_Region(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_New_20_ControlID(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Window_20_Control_2F_Get_20_ControlRef(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Window_20_Control_2F_Set_20_ControlRef(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Window_20_Control_2F_Add_20_Subview(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Window_20_Control_2F_Remove_20_From_20_Superview(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Window_20_Control_2F_Get_20_Superview_20_HIViewRef(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Window_20_Control_2F_Get_20_Superview(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Window_20_Control_2F_Get_20_First_20_Subview_20_HIViewRef(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Window_20_Control_2F_Get_20_First_20_Subview(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Window_20_Control_2F_Get_20_Last_20_Subview_20_HIViewRef(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Window_20_Control_2F_Get_20_Last_20_Subview(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Window_20_Control_2F_Get_20_Next_20_View_20_HIViewRef(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Window_20_Control_2F_Get_20_Next_20_View(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Window_20_Control_2F_Get_20_Previous_20_View_20_HIViewRef(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Window_20_Control_2F_Get_20_Previous_20_View(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Window_20_Control_2F_Set_20_ZOrder(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Window_20_Control_2F_Set_20_Visible_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Window_20_Control_2F_Get_20_Visible_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Window_20_Control_2F_Get_20_Bounds(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Window_20_Control_2F_Get_20_Frame(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Window_20_Control_2F_Set_20_Frame(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Window_20_Control_2F_Move_20_By(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Window_20_Control_2F_Move_20_To(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Window_20_Control_2F_Reshape_20_Structure(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Window_20_Control_2F_Get_20_View_20_For_20_Mouse_20_Event(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Window_20_Control_2F_Click(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Window_20_Control_2F_Simulate_20_Click(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Window_20_Control_2F_Get_20_Part_20_Hit(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Window_20_Control_2F_Get_20_Subview_20_HIViewRef_20_Hit(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Window_20_Control_2F_Get_20_Subview_20_Hit(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Window_20_Control_2F_Set_20_Needs_20_Display_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Window_20_Control_2F_Get_20_Needs_20_Display_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Window_20_Control_2F_Set_20_Needs_20_Display_20_In_20_Region_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Window_20_Control_2F_Flash_20_Dirty_20_Area(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Window_20_Control_2F_Get_20_Size_20_Constraints(V_Environment, enum boolType *, Nat4,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_Window_20_Control_2F_Get_20_Drawing_20_Enabled_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Window_20_Control_2F_Set_20_Drawing_20_Enabled_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Window_20_Control_2F_Scroll_20_Rect(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Window_20_Control_2F_Set_20_Bounds_20_Origin(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Window_20_Control_2F_Advance_20_Focus(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Window_20_Control_2F_Get_20_Focus_20_Part(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Window_20_Control_2F_Subtree_20_Contains_20_Focus_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Window_20_Control_2F_Set_20_Next_20_Focus(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Window_20_Control_2F_Set_20_First_20_Subview_20_Focus(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Window_20_Control_2F_Find_20_ID_20_HIViewRef(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Window_20_Control_2F_Find_20_ID(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Window_20_Control_2F_Get_20_Attributes(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Window_20_Control_2F_Change_20_Attributes(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Window_20_Control_2F_Create_20_Offscreen_20_Image(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_Window_20_Control_2F_Create_20_CGImage(V_Environment, enum boolType *, Nat4,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_Window_20_Control_2F_Get_20_Control_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object *,V_Object *,V_Object *);
enum opTrigger vpx_method_Window_20_Control_2F_Get_20_Control_20_Data_20_Long(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Window_20_Control_2F_Get_20_Control_20_Data_20_Short(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Window_20_Control_2F_Get_20_Control_20_Data_20_Text(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Window_20_Control_2F_Get_20_Control_20_Data_20_Ptr(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Window_20_Control_2F_Get_20_Control_20_Data_20_Object(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Window_20_Control_2F_Set_20_Control_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Window_20_Control_2F_Set_20_Control_20_Data_20_Long(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Window_20_Control_2F_Set_20_Control_20_Data_20_Short(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Window_20_Control_2F_Set_20_Control_20_Data_20_Ptr(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Window_20_Control_2F_Set_20_Control_20_Data_20_Object(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Window_20_Control_2F_Get_20_Property(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object *,V_Object *,V_Object *);
enum opTrigger vpx_method_Window_20_Control_2F_Get_20_Property_20_Long(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Window_20_Control_2F_Get_20_Property_20_Object(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Window_20_Control_2F_Set_20_Property(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Window_20_Control_2F_Set_20_Property_20_Long(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Window_20_Control_2F_Set_20_Property_20_Ptr(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Window_20_Control_2F_Set_20_Property_20_Object(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Window_20_Control_2F_Remove_20_Property(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Window_20_Control_2F_Get_20_Property_20_Attributes(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_Window_20_Control_2F_Change_20_Property_20_Attributes(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Window_20_Control_2F_Get_20_Property_20_Size(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_Window_20_Control_2F_Retain_20_Self_20_Reference(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Window_20_Control_2F_Remove_20_Self_20_Reference(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Window_20_Control_2F_Get_20_Control_20_Hilite(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Window_20_Control_2F_Set_20_Control_20_Hilite(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Window_20_Control_2F_Get_20_Control_20_Minimum(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Window_20_Control_2F_Set_20_Control_20_Minimum(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Window_20_Control_2F_Set_20_Control_20_Maximum(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Window_20_Control_2F_Get_20_Control_20_Maximum(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Window_20_Control_2F_Set_20_Control_20_Value(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Window_20_Control_2F_Get_20_Control_20_Value(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Window_20_Control_2F_Set_20_Control_20_ID(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Window_20_Control_2F_Get_20_Control_20_ID(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Window_20_Control_2F_Get_20_Control_20_Kind(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Window_20_Control_2F_Set_20_Control_20_Title(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Window_20_Control_2F_Get_20_Control_20_Title(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Window_20_Control_2F_Create_20_From_20_ID(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Window_20_Control_2F_Create_20_With_20_ControlRef(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Window_20_Control_2F_Initialize(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Window_20_Control_2F_Initialize_20_Control_20_Events(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Window_20_Control_2F_CE_20_Handle_20_Event(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Window_20_Control_2F_CE_20_HICommand_20_Update_20_Status(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Window_20_Control_2F_CE_20_HICommand_20_Process(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Window_20_Control_2F_CE_20_Control_20_Event(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Window_20_Control_2F_CE_20_Control_20_Dispose(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Window_20_Control_2F_CE_20_Control_20_Hit(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Window_20_Control_2F_Control_20_Dispose(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Window_20_Control_2F_Control_20_Hit(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Window_20_Control_2F_Dispose(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Window_20_Control_2F_Destruct(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Window_20_Control_2F_Destruct_20_Control_20_Events(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Window_20_Control_2F_Get_20_Carbon_20_EventTargetRef(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Window_20_Control_2F_Get_20_Window(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Static_20_Text_20_Control_2F_Set_20_Text(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Live_20_Action_20_Control_2F_Install_20_Action_20_Proc(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Live_20_Action_20_Control_2F_Remove_20_Action_20_Proc(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Live_20_Action_20_Control_2F_Initialize(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Live_20_Action_20_Control_2F_Destruct(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Live_20_Action_20_Control_2F_Do_20_Live_20_Action(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_HIView_20_Control_2F_Create_20_With_20_HIView(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Progress_20_Bar_20_Control_2F_Get_20_Control_20_Data_20_Boolean(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Progress_20_Bar_20_Control_2F_Set_20_Control_20_Data_20_Boolean(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Progress_20_Bar_20_Control_2F_Set_20_Indeterminate_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Progress_20_Bar_20_Control_2F_Set_20_Animating_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Progress_20_Bar_20_Control_2F_Get_20_Indeterminate_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Progress_20_Bar_20_Control_2F_Get_20_Animating_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Progress_20_Bar_20_Control_2F_Set_20_Progress_20_Percent(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Edit_20_Unicode_20_Text_20_Control_2F_Set_20_Text(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Edit_20_Unicode_20_Text_20_Control_2F_Get_20_Text(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Edit_20_Unicode_20_Text_20_Control_2F_CE_20_Text_20_Accepted(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Edit_20_Unicode_20_Text_20_Control_2F_CE_20_Text_20_Field_20_Event(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Edit_20_Unicode_20_Text_20_Control_2F_CE_20_Handle_20_Event(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HISearch_20_Field_20_Control_2F_CE_20_Handle_20_Event(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HISearch_20_Field_20_Control_2F_CE_20_Text_20_Field_20_Event(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HISearch_20_Field_20_Control_2F_CE_20_Text_20_Accepted(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_HISearch_20_Field_20_Control_2F_CE_20_Search_20_Field_20_Event(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HISearch_20_Field_20_Control_2F_CE_20_Search_20_Field_20_Cancel_20_Clicked(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_HISearch_20_Field_20_Control_2F_Get_20_Text(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_HISearch_20_Field_20_Control_2F_Set_20_Text(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_HITextView_20_Control_2F_Get_20_TXNObject(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_HITextView_20_Control_2F_Set_20_Data_20_From_20_CFURL(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HITextView_20_Control_2F_Set_20_Text(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Add_20_DBColumns_20_Proper(V_Environment, enum boolType *, Nat4);
enum opTrigger vpx_method_Databrowser_20_Control_2F7E_Set_20_DBCallbacks(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Databrowser_20_Control_2F7E_Add_20_DBItems(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Databrowser_20_Control_2F7E_Remove_20_DBItems(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Databrowser_20_Control_2F_Initialize(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Databrowser_20_Control_2F_Initialize_20_Item_20_Callbacks(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Databrowser_20_Control_2F_Initialize_20_Item_20_Root(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Databrowser_20_Control_2F_Initialize_20_View(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Databrowser_20_Control_2F_Get_20_Content_20_List(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Databrowser_20_Control_2F_Set_20_Content_20_List(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Databrowser_20_Control_2F_Get_20_Databrowser(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Databrowser_20_Control_2F_Get_20_ItemID(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Databrowser_20_Control_2F7E_Get_20_Property_20_Flags(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_Databrowser_20_Control_2F7E_Set_20_Property_20_Flags(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Databrowser_20_Control_2F7E_Get_20_View_20_Style(V_Environment, enum boolType *, Nat4,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_Databrowser_20_Control_2F7E_Set_20_View_20_Style(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Databrowser_20_Control_2F7E_Add_20_ListView_20_Column(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Databrowser_20_Control_2F7E_Set_20_ListView_20_Disclosure_20_Column(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Databrowser_20_Control_2F7E_Set_20_ColumnView_20_Display_20_Type(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Databrowser_20_Control_2F_Toggle_20_View(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Databrowser_20_Control_2F7E_Set_20_Target_20_Item(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Databrowser_20_Control_2F7E_Get_20_Item_20_Count(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_Databrowser_20_Control_2F7E_Get_20_Items(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_Databrowser_20_Control_2F7E_Update_20_Items(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Databrowser_20_Control_2F_Get_20_Select_20_List(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Databrowser_20_Control_2F_Get_20_Select_20_Count(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Databrowser_20_Control_2F_Update_20_Item_20_List(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Databrowser_20_Control_2F_Remove_20_All_20_Items(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Databrowser_20_Control_2F_Get_20_Select_20_Values(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Databrowser_20_Control_2F7E_Autosize_20_List_20_View_20_Columns(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Databrowser_20_Control_2F7E_Select_20_DBItems(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Databrowser_20_Control_2F_Set_20_Select_20_List(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Databrowser_20_Control_2F7E_Reveal_20_DBItem(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Databrowser_20_Control_2F_DB_20_Item_20_Notification(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Databrowser_20_Control_2F_DB_20_Item_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Databrowser_20_Control_2F_DB_20_Drag_20_Add_20_Item(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Databrowser_20_Control_2F_DB_20_Drag_20_Accept_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Databrowser_20_Control_2F_DB_20_Drag_20_Receive(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Databrowser_20_Control_2F_DB_20_CTM_20_Create(V_Environment, enum boolType *, Nat4,V_Object,V_Object *,V_Object *,V_Object *,V_Object *);
enum opTrigger vpx_method_Databrowser_20_Control_2F_DB_20_CTM_20_Select(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Databrowser_20_Control_2F7E_Set_20_DBEdit_20_Item(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Databrowser_20_Control_2F_Destruct(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Databrowser_20_Control_2F_Old_207E_Get_20_Items(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_Databrowser_20_Callbacks_2F_Create_20_Reference(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Databrowser_20_Callbacks_2F_Create_20_Callbacks(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Databrowser_20_Callbacks_2F_Create(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Databrowser_20_Callbacks_2F_Get_20_CallbacksRef(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Databrowser_20_Callbacks_2F_Dispose(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Databrowser_20_Callbacks_2F_Dispose_20_Callbacks(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Databrowser_20_Callbacks_2F7E_Set_20_DBCallbacks(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Databrowser_20_Item_20_Callbacks_2F_Item_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Databrowser_20_Item_20_Callbacks_2F_Item_20_Notification(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Databrowser_20_Item_20_Callbacks_2F_Drag_20_Add_20_Item(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Databrowser_20_Item_20_Callbacks_2F_Drag_20_Accept_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Databrowser_20_Item_20_Callbacks_2F_Drag_20_Receive(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Databrowser_20_Item_20_Callbacks_2F_CTM_20_Create(V_Environment, enum boolType *, Nat4,V_Object,V_Object *,V_Object *,V_Object *,V_Object *);
enum opTrigger vpx_method_Databrowser_20_Item_20_Callbacks_2F_CTM_20_Select(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Databrowser_20_Item_20_Callback_2F_xOpen_20_UPP(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Databrowser_20_Item_20_Callback_2F_xClose_20_UPP(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Databrowser_20_Item_20_Callback_2F_Get_20_Parameter_20_List_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Databrowser_20_Item_20_Callback_2F_Do_20_DBItemData(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Databrowser_20_Item_20_Callback_2F_Do_20_DBItemNotification(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Databrowser_20_Item_20_Callback_2F_Do_20_DBItemNotification_20_With_20_Item(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Databrowser_20_Item_20_Callback_2F_Do_20_DBDrag_20_Add_20_Item(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Databrowser_20_Item_20_Callback_2F_Do_20_DBDrag_20_Accept_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Databrowser_20_Item_20_Callback_2F_Do_20_DBDrag_20_Receive(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Databrowser_20_Item_20_Callback_2F_Do_20_DBCTM_20_Create(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Databrowser_20_Item_20_Callback_2F_Do_20_DBCTM_20_Select(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Databrowser_20_Item_20_Data_2F_Set_20_Item_20_Data_20_Property(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Databrowser_20_Item_20_Data_2F_Set_20_Item_20_Meta_20_Property(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Databrowser_20_Item_20_Data_2F_Change_20_Item_20_Data_20_Property(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Databrowser_20_Item_20_Data_2F_Get_20_ItemID(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Databrowser_20_Item_20_Data_2F_Add_20_Content_20_Items(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Databrowser_20_Item_20_Data_2F_Remove_20_Content_20_Items(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Databrowser_20_Item_20_Data_2F_Container_20_Opened(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Databrowser_20_Item_20_Data_2F_Container_20_Closing(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Databrowser_20_Item_20_Data_2F_Container_20_Closed(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Databrowser_20_Item_20_Data_2F_Container_20_User_20_Toggled(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Databrowser_20_Item_20_Data_2F_Double_20_Clicked(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Databrowser_20_Item_20_Data_2F_Item_20_Notification(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Databrowser_20_Item_20_Data_2F_Add_20_Item(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Databrowser_20_Item_20_Data_2F_Add_20_Items(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Databrowser_20_Item_20_Data_2F_Initialize(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Databrowser_20_Item_20_Data_2F_Initialize_20_Content(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Databrowser_20_Item_20_Data_2F_Initialize_20_Containers(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Databrowser_20_Item_20_Data_2F_Dispose(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Databrowser_20_Item_20_Data_2F_Dispose_20_Content(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Databrowser_20_Item_20_Data_2F_Get_20_Owner(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Databrowser_20_Item_20_Data_2F_Get_20_Databrowser(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Databrowser_20_Item_20_Data_2F_Get_20_ParentID(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Databrowser_20_Item_20_Data_2F_Set_20_Items(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Databrowser_20_Item_20_Data_2F_Get_20_Value(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Databrowser_20_Item_20_Data_2F_Open_20_Container(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Databrowser_20_Item_20_Data_2F_Close_20_Container(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Databrowser_20_Item_20_Data_2F_Toggle_20_Container(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Databrowser_20_Item_20_Data_2F_Drag_20_Add_20_Item(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Databrowser_20_Item_20_Data_2F_Drag_20_Accept_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Databrowser_20_Item_20_Data_2F_Drag_20_Receive(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Databrowser_20_Item_20_Data_2F_Find_20_Item_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Databrowser_20_Item_20_Data_2F_Get_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Databrowser_20_Item_20_Data_2F_Set_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Databrowser_20_Item_20_Data_2F_Get_20_Identity_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Databrowser_20_Item_20_Data_2F_Set_20_Content(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Databrowser_20_Item_20_Data_2F_Edit_20_Item(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Databrowser_20_Item_20_Data_2F_Remove_20_Items(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Databrowser_20_Item_20_Root_2F_Get_20_ItemID(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Databrowser_20_Item_20_Root_2F_Initialize(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Databrowser_20_List_20_Column_2F_Get_20_Maximum_20_Width(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Databrowser_20_List_20_Column_2F_Get_20_Minimum_20_Width(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Databrowser_20_List_20_Column_2F_Get_20_Title_20_Offset(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Databrowser_20_List_20_Column_2F_Get_20_Title(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Databrowser_20_List_20_Column_2F_Get_20_Sort_20_Order(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Databrowser_20_List_20_Column_2F_Get_20_Sortable_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Databrowser_20_List_20_Column_2F_Get_20_Title_20_CFString(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Databrowser_20_List_20_Column_2F_Get_20_ColumnDesc(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Databrowser_20_List_20_Column_2F_Get_20_FontStyleRec(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Databrowser_20_List_20_Column_2F_Get_20_ContentInfo(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Databrowser_20_List_20_Column_2F_Get_20_Property_20_ID(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Databrowser_20_List_20_Column_2F_Get_20_Property_20_Type(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Databrowser_20_List_20_Column_2F_Get_20_Property_20_Flags(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Databrowser_20_List_20_Column_2F_Add_20_Column_20_Number(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Databrowser_20_List_20_Column_2F_Get_20_Editable_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Databrowser_20_List_20_Column_2F_Get_20_Active_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Databrowser_20_Viewer_2F_Get_20_List_20_View(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Databrowser_20_Viewer_2F_Get_20_Column_20_View(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Databrowser_20_Viewer_2F_Get_20_Initial_20_View(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Databrowser_20_Viewer_2F_Get_20_Current_20_View(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Databrowser_20_Viewer_2F_Initialize(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Databrowser_20_Viewer_2F_Install_20_Current_20_View(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Databrowser_20_List_20_View_2F_Install(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Databrowser_20_List_20_View_2F_Get_20_Disclosure_20_Column(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Databrowser_20_List_20_View_2F_Get_20_Columns(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Databrowser_20_List_20_View_2F_Get_20_Active_20_Columns(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Databrowser_20_Column_20_View_2F_Install(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Databrowser_20_Column_20_View_2F_Get_20_Display_20_Type(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_TEST_20_MP_20_Task(V_Environment, enum boolType *, Nat4);
enum opTrigger vpx_method_TEST_20_Shell_20_Command(V_Environment, enum boolType *, Nat4);
enum opTrigger vpx_method_Find_20_Task_20_Service(V_Environment, enum boolType *, Nat4,V_Object *);
enum opTrigger vpx_method_MP_20_Task_20_Service_2F_Add_20_Current_20_Task(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_MP_20_Task_20_Service_2F_Remove_20_Current_20_Task(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_MP_20_Task_20_Service_2F_Add_20_Initial_20_Task(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_MP_20_Task_20_Service_2F_Get_20_Current_20_Tasks(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_MP_20_Task_20_Service_2F_Set_20_Current_20_Tasks(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_MP_20_Task_20_Service_2F_Get_20_Initial_20_Tasks(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_MP_20_Task_20_Service_2F_Set_20_Initial_20_Tasks(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_MP_20_Task_20_Service_2F_Check_20_Tasks(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_MP_20_Task_20_Service_2F_Get_20_Check_20_Timer(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_MP_20_Task_20_Service_2F_Set_20_Check_20_Timer(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_MP_20_Task_20_Service_2F_Open(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_MP_20_Task_20_Service_2F_Close(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_MP_20_Task_20_Service_2F_Start_20_Timer(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_MP_20_Task_20_Service_2F_Stop_20_Timer(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_MP_20_Task_2F_Do_20_Task(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_MP_20_Task_2F_Post_20_Task(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_MP_20_Task_2F_Wait_20_On_20_Queue(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *,V_Object *,V_Object *,V_Object *);
enum opTrigger vpx_method_MP_20_Task_2F_Notify_20_Queue(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_MP_20_Task_2F_Create_20_Queue(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_MP_20_Task_2F_Create_20_Task(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_MP_20_Task_2F_Do_20_Completion(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_MP_20_Task_2F_Delete_20_Queue(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_MP_20_Task_2F_Set_20_Queue_20_Reserve(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_MP_20_Task_2F_Get_20_Current_20_Task_20_ID(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_MP_20_Task_2F_Check_20_Error(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_MP_20_Task_2F_Finish(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_MP_20_Task_2F_Close(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_MP_20_Task_2F_Post_20_Initial_20_Task(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_MP_20_Task_2F_Is_20_Completed_3F_(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_MP_20_Task_2F_Is_20_Finished_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_MP_20_Task_2F_Is_20_Current_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_MP_20_Task_2F_Is_20_Preemptive_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_MP_20_Task_2F_Set_20_Task_20_Type(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_MP_20_Task_2F_Set_20_Task_20_Weight(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_MP_20_Task_2F_Exit_20_This_20_Task(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_MP_20_Task_2F_Terminate_20_Task(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_MP_20_Task_2F_Yield(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_MP_20_Task_2F_Get_20_Queue_20_ID(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_MP_20_Task_2F_Set_20_Queue_20_ID(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_MP_20_Task_2F_Get_20_Task_20_ID(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_MP_20_Task_2F_Set_20_Task_20_ID(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_MP_20_Task_2F_Get_20_Stack_20_Size(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_MP_20_Task_2F_Set_20_Stack_20_Size(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_MP_20_Task_2F_Get_20_Error(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_MP_20_Task_2F_Set_20_Error(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_MP_20_Task_2F_Get_20_MPTask(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_MP_20_Task_2F_Set_20_MPTask(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_MP_20_Task_2F_Get_20_Result_20_Code(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_MP_20_Task_2F_Set_20_Result_20_Code(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_MP_20_Task_2F_Task_20_Preflight(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_MP_20_Task_2F_Task_20_Postflight(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_MP_20_Shell_20_Command_20_Task_2F_Do_20_Task(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_MP_20_Shell_20_Command_20_Task_2F_Post_20_Command(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_MP_20_Shell_20_Command_20_Task_2F_Get_20_Command_20_Line(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_MP_20_Shell_20_Command_20_Task_2F_Set_20_Command_20_Line(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_MP_20_Shell_20_Command_20_Task_2F_Get_20_Buffer_20_Size(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_MP_20_Shell_20_Command_20_Task_2F_Set_20_Buffer_20_Size(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_MP_20_Shell_20_Command_20_Task_2F_Get_20_Result_20_Text(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_MP_20_Shell_20_Command_20_Task_2F_Set_20_Result_20_Text(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_MPT_20_PFAB_20_Compile_20_Sources_2F_Create_20_Task(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_MPT_20_PFAB_20_Compile_20_Sources_2F_Task_20_Preflight(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_MPT_20_PFAB_20_Compile_20_Sources_2F_Task_20_Postflight(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_MPT_20_PFAB_20_Compile_20_Sources_2F_Post_20_Command(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_MPT_20_PFAB_20_Compile_20_Sources_2F_Do_20_Task(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_MPT_20_PFAB_20_Compile_20_Sources_2F_Get_20_Command(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_MPT_20_PFAB_20_Compile_20_Sources_2F_Set_20_Command(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_MPT_20_PFAB_20_Compile_20_Sources_2F_Get_20_Text_20_Command(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_MPT_20_PFAB_20_Compile_20_Sources_2F_Set_20_Text_20_Command(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_MPT_20_PFAB_20_Compile_20_Sources_2F_Get_20_Block_20_Pages(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_MPT_20_PFAB_20_Compile_20_Sources_2F_Set_20_Block_20_Pages(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_MPT_20_PFAB_20_Compile_20_Sources_2F_Get_20_BlockPtr(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_MPT_20_PFAB_20_Compile_20_Sources_2F_Set_20_BlockPtr(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_MPT_20_PFAB_20_Compile_20_Sources_2F_Get_20_Shell_20_Result(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_MPT_20_PFAB_20_Compile_20_Sources_2F_Set_20_Shell_20_Result(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_MPT_20_PFAB_20_Compile_20_Sources_2F_Get_20_Shell_20_Text(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_MPT_20_PFAB_20_Compile_20_Sources_2F_Set_20_Shell_20_Text(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_MPT_20_PFAB_20_Compile_20_Sources_2F_Get_20_Block_20_Size(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_MPT_20_PFAB_20_Compile_20_Sources_2F_Get_20_Bytes_20_Read(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_MPT_20_PFAB_20_Compile_20_Sources_2F_Set_20_Bytes_20_Read(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Activity_20_Abstract_2F_Get_20_Progress(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Activity_20_Abstract_2F_User_20_Cancel(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Activity_20_Abstract_2F_Cancel(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Activity_20_Abstract_2F_Begin(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Activity_20_Abstract_2F_Finish(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Activity_20_Abstract_2F_Synchronize(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Activity_20_Abstract_2F_Set_20_Progress_20_Percent(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Activity_20_Abstract_2F_Set_20_Activity_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Activity_20_Abstract_2F_Set_20_Primary_20_Prompt(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Activity_20_Abstract_2F_Set_20_Secondary_20_Prompt(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Activity_20_Abstract_2F_Get_20_Canceled_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Activity_20_Abstract_2F_Do_20_Async(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Activity_20_Abstract_2F_Do_20_Async_20_Callback(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Activity_20_Abstract_2F_Async_20_Schedule_20_Callback(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Activity_20_Abstract_2F_Async_20_Delay(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Activity_20_Abstract_2F_Async_20_Repeat(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Activity_20_Abstract_2F_Do_20_Sync(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Activity_20_Abstract_2F_Do(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Activity_20_Abstract_2F_Run_20_Begin(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Activity_20_Abstract_2F_Run(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Activity_20_Abstract_2F_Run_20_End(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Activity_20_Abstract_2F_Initialize_20_Progress_20_Window(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Activity_20_Progress_2F_Get_20_Activity_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Activity_20_Progress_2F_Get_20_Primary_20_Prompt(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Activity_20_Progress_2F_Get_20_Secondary_20_Prompt(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Activity_20_Progress_2F_Get_20_Progress_20_Percent(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Activity_20_Progress_2F_Get_20_Window(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Activity_20_Progress_2F_Begin(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Activity_20_Progress_2F_Get_20_Duration(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Activity_20_Progress_2F_Begin_20_Window(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Activity_20_Progress_2F_Synchronize(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Activity_20_Progress_2F_Set_20_Progress_20_Percent(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Activity_20_Progress_2F_Set_20_Activity_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Activity_20_Progress_2F_Set_20_Primary_20_Prompt(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Activity_20_Progress_2F_Set_20_Secondary_20_Prompt(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Activity_20_Progress_2F_Finish(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Activity_20_Progress_2F_Finish_20_Window(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Activity_20_Progress_20_Window_2F_Open(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Activity_20_Progress_20_Window_2F_Open_20_Controls(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Activity_20_Progress_20_Window_2F_Dispose(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Activity_20_Progress_20_Window_2F_Find_20_Activity_20_Text(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Activity_20_Progress_20_Window_2F_Find_20_Primary_20_Text(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Activity_20_Progress_20_Window_2F_Find_20_Secondary_20_Text(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Activity_20_Progress_20_Window_2F_Find_20_Progress_20_Bar(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Activity_20_Progress_20_Window_2F_Update_20_Progress(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Activity_20_Progress_20_Window_2F_CE_20_HICommand_20_Process(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Activity_20_Progress_20_Window_2F_HIC_20_Cancel(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Activity_20_Progress_20_Window_2F_Close_20_All(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Activity_20_Staged_2F_Run(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Activity_20_Staged_2F_Run_20_Verify_20_Completion(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Activity_20_Staged_2F_Cancel(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Activity_20_Staged_2F_Push_20_Next_20_Stage(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Activity_20_Staged_2F_Push_20_Last_20_Stage(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Activity_20_Stage_2F_Run(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Activity_20_Stage_2F_Run_20_Begin(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Activity_20_Stage_2F_Run_20_End(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Activity_20_Stage_2F_Cancel(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Activity_20_Stage_2F_Get_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_TEST_20_Activity_20_Simple_20_Sync(V_Environment, enum boolType *, Nat4);
enum opTrigger vpx_method_TEST_20_Activity_20_Simple_20_ASync(V_Environment, enum boolType *, Nat4);
enum opTrigger vpx_method_TEST_20_Activity_20_Staged_20_Sync(V_Environment, enum boolType *, Nat4);
enum opTrigger vpx_method_TEST_20_Activity_20_Staged_20_ASync(V_Environment, enum boolType *, Nat4);
enum opTrigger vpx_method_Activity_20_Test_20_Data_2F_Run(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Activity_20_Test_20_Data_2F_Run_20_Begin(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Activity_20_Counting_20_Stage_2F_Run(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Activity_20_Counting_20_Stage_2F_Run_20_Begin(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Nav_20_ASC_20_Callback(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Nav_20_Files_20_Callback(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Nav_20_Folder_20_Callback(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Nav_20_Search_20_Callback(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Nav_20_Put_20_File_20_Callback(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_TEST_20_Nav_20_Ask_20_Save_20_Changes(V_Environment, enum boolType *, Nat4);
enum opTrigger vpx_method_TEST_20_Nav_20_Ask_20_Discard_20_Changes(V_Environment, enum boolType *, Nat4);
enum opTrigger vpx_method_TEST_20_Nav_20_Choose_20_Volume(V_Environment, enum boolType *, Nat4);
enum opTrigger vpx_method_TEST_20_Nav_20_Choose_20_Folder(V_Environment, enum boolType *, Nat4);
enum opTrigger vpx_method_TEST_20_Nav_20_New_20_Folder(V_Environment, enum boolType *, Nat4);
enum opTrigger vpx_method_TEST_20_Nav_20_Ask_20_Review_20_Documents(V_Environment, enum boolType *, Nat4);
enum opTrigger vpx_method_TEST_20_Nav_20_Get_20_File(V_Environment, enum boolType *, Nat4);
enum opTrigger vpx_method_TEST_20_Nav_20_Put_20_File(V_Environment, enum boolType *, Nat4);
enum opTrigger vpx_method_URL_20_Open_20_In_20_Browser(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_URL_20_Search_20_appledev_2E_com(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Display_20_Operation_20_Info(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_INFO_3A20_Lookup(V_Environment, enum boolType *, Nat4);
enum opTrigger vpx_method_Escape_20_Text(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Unescape_20_Text(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Procedure_20_Info(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Constant_20_Info(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Structure_20_Info(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Primitive_20_Info(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPL_20_Parse_20_URL(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPL_20_Parse_20_Inline_20_Method(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Nav_20_Modal_20_Put_20_File(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_Nav_20_Modal_20_Get_20_File(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_TEST_20_Nav_20_Modal_20_PF(V_Environment, enum boolType *, Nat4);
enum opTrigger vpx_method_TEST_20_Nav_20_Modal_20_GF(V_Environment, enum boolType *, Nat4);
enum opTrigger vpx_method_TEST_20_Nav_20_Modal_20_ASC(V_Environment, enum boolType *, Nat4);
enum opTrigger vpx_method_TEST_20_VPL_20_URL_20_Types(V_Environment, enum boolType *, Nat4);
enum opTrigger vpx_method_Reveal_20_Location_20_String(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Display_20_Demo_20_Message(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_AH_20_Find_20_Help_20_Book_20_Name(V_Environment, enum boolType *, Nat4,V_Object *);
enum opTrigger vpx_method_AH_20_Lookup_20_Anchor(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_AH_20_Search(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_AH_20_Goto_20_Page(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Marten_20_Application_2F_CE_20_Handle_20_Event(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Marten_20_Application_2F_CE_20_Window_20_Event(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Marten_20_Application_2F_CE_20_Service_20_Event(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Marten_20_Application_2F_CE_20_HICommand_20_Update_20_Status(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Marten_20_Application_2F_AE_20_Open_20_Documents(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Marten_20_Application_2F_AE_20_Open_20_Application(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Marten_20_Application_2F_AE_20_Reopen_20_Application(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Marten_20_Application_2F_AE_20_Go_20_To_20_URL(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Marten_20_Application_2F_HICommand_20_New(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Marten_20_Application_2F_HICommand_20_About(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Marten_20_Application_2F_HICommand_20_Preferences(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Marten_20_Application_2F_HICommand_20_Open(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Marten_20_Application_2F_HICommand_20_App_20_Custom(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Marten_20_Application_2F_HIC_20_Find_20_Find(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Marten_20_Application_2F_HIC_20_File_20_New_20_Text(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Marten_20_Application_2F_HIC_20_File_20_New_20_Project(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Marten_20_Application_2F_HIC_20_File_20_New_20_Section(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Marten_20_Application_2F_HIC_20_File_20_Open_20_Text(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Marten_20_Application_2F_HIC_20_File_20_Open_20_Project(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Marten_20_Application_2F_HIC_20_File_20_Open_20_Section(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Marten_20_Application_2F_HIC_20_File_20_Add_20_To_20_Project(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Marten_20_Application_2F_File_20_Open_20_Project_20_Callback(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Marten_20_Application_2F_Open_20_Environment(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Marten_20_Application_2F_Open_20_Services(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Marten_20_Application_2F_Close_20_Services(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Marten_20_Application_2F_Close_20_Local(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Marten_20_Application_2F_Get_20_Application(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Marten_20_Application_2F_Install_20_Tools(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Marten_20_Application_2F_Get_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Marten_20_Application_2F_Get_20_Signature(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Marten_20_Application_2F_Open_20_File_20_Type(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Marten_20_Application_2F_HIC_20_Info_20_Last_20_Error(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Marten_20_Application_2F_HIC_20_Window_20_Info(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Marten_20_Application_2F_HIC_20_Window_20_Projects(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Marten_20_Application_2F_HIC_20_Window_20_New_20_Projects(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Marten_20_Application_2F_HIC_20_Window_20_Project_20_Window(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Marten_20_Application_2F_HIC_20_Exec_20_Execute_20_Method(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Marten_20_Application_2F_HIC_20_Exec_20_Run_20_Application(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Marten_20_Application_2F_HIC_20_Go_20_To_20_URL(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Marten_20_Application_2F_HIC_20_Quit_20_Now(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Marten_20_Application_2F_HIC_20_File_20_Import(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Marten_20_Application_2F_HIC_20_File_20_Update_20_App(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Marten_20_Application_2F_HIC_20_File_20_Open_20_App(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Marten_20_Application_2F_HIC_20_File_20_Build(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Marten_20_Application_2F_Get_20_All_20_File_20_Open_20_Types(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Marten_20_Application_2F_File_20_Open_20_Any_20_Type(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Marten_20_Application_2F_File_20_Open_20_Any_20_Callback(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Marten_20_Application_2F_Display_20_List(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Marten_20_Application_2F_Send_20_Refresh(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Marten_20_Application_2F_Quit(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Marten_20_Application_2F_NULL_20_Event(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Marten_20_Application_2F_CE_20_Window_20_Close_20_All(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Marten_20_Application_2F_HIC_20_Click_20_Marten(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Marten_20_Application_2F_HIC_20_Recents_20_Clear(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Marten_20_Application_2F_HIC_20_Recents_20_Open_20_Project(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Marten_20_Application_2F_Display_20_Welcome(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Marten_20_Application_2F_Get_20_Path_20_List(V_Environment, enum boolType *, Nat4,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_VPLAbout_20_Window_2F_Open(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLAbout_20_Window_2F_Open_20_Once(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_VPLAbout_20_Window_2F_Open_20_Controls(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPLAbout_20_Version_20_Text_2F_Get_20_Values(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLAbout_20_Version_20_Text_2F_Set_20_Values(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLAbout_20_Version_20_Text_2F_Get_20_Current_20_Value(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLAbout_20_Version_20_Text_2F_Set_20_Current_20_Value(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLAbout_20_Version_20_Text_2F_CE_20_Control_20_Click(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_VPLAbout_20_Version_20_Text_2F_CE_20_Control_20_Event(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Show_20_Project_20_Info(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Show_20_Project_20_Messages(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Lookup_20_Project_20_Info(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_VPLInfo_20_Window_2F_CE_20_HICommand_20_Process(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_VPLInfo_20_Window_2F_CE_20_Keyboard_20_Event(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_VPLInfo_20_Window_2F_CE_20_Mouse_20_Wheel_20_Moved(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_VPLInfo_20_Window_2F_Search_20_For_20_Text(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_VPLInfo_20_Window_2F_Lookup_20_Project_20_Info(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_VPLInfo_20_Window_2F_HIC_20_Contents(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPLInfo_20_Window_2F_HIC_20_Classes(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPLInfo_20_Window_2F_HIC_20_Search(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPLInfo_20_Window_2F_HIC_20_Search_20_Apple(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPLInfo_20_Window_2F_Find_20_Search_20_Text(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLInfo_20_Window_2F_Set_20_Search_20_Text(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLInfo_20_Window_2F_Get_20_Search_20_Text(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLInfo_20_Window_2F_Get_20_Project_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLInfo_20_Window_2F_Get_20_Method_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLInfo_20_Window_2F_Display_20_Page(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_VPLInfo_20_Window_2F_Display_20_Text(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_VPLInfo_20_Window_2F_Display_20_List(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_VPLInfo_20_Window_2F_Open_20_Helper_20_List(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_VPLInfo_20_Window_2F_Open(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLInfo_20_Window_2F_Open_20_Once(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_VPLInfo_20_Window_2F_Open_20_Controls(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPLInfo_20_Window_2F_Search_20_Cancel(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPLInfo_20_Window_2F_Install_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLInfo_20_Window_2F_HIC_20_Nav_20_Back(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPLInfo_20_Window_2F_HIC_20_Nav_20_Forward(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPLInfo_20_Window_2F_Focus_20_Search_20_Text(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPLInfo_20_Window_2F_Save_20_To_20_History(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLInfo_20_Window_2F_Create_20_Banner_20_Item(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_VPLInfo_20_Window_2F_OLD_20_Search_20_For_20_Text_23_(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_VPLInfo_20_Window_2F_CE_20_Mouse_20_Moved(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_VPLInfo_20_Window_2F_HIC_20_Messages(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPLInfo_20_Window_2F_HIC_20_Checks(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPLInfo_20_Window_2F_Get_20_Creation_20_Attributes(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_OLD_20_Info_20_Window_2F_Open(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_OLD_20_Info_20_Window_2F_Open_20_Controls(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_OLD_20_Info_20_Window_2F_Find_20_Output_20_Text(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_OLD_20_Info_20_Window_2F_Find_20_List_20_View(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_OLD_20_Info_20_Window_2F_Find_20_Search_20_Text(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_OLD_20_Info_20_Window_2F_Find_20_Edit_20_Text(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_OLD_20_Info_20_Window_2F_Set_20_Output_20_Text(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_OLD_20_Info_20_Window_2F_Set_20_List_20_View(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_OLD_20_Info_20_Window_2F_Set_20_Search_20_Text(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_OLD_20_Info_20_Window_2F_Get_20_Search_20_Text(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_OLD_20_Info_20_Window_2F_CE_20_HICommand_20_Process(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_OLD_20_Info_20_Window_2F_HIC_20_Contents(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_OLD_20_Info_20_Window_2F_HIC_20_Classes(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_OLD_20_Info_20_Window_2F_HIC_20_Search(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_OLD_20_Info_20_Window_2F_HIC_20_Search_20_Apple(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_OLD_20_Info_20_Window_2F_Get_20_Project_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_OLD_20_Info_20_Window_2F_Search_20_For_20_Text(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_OLD_20_Info_20_Window_2F_Open_20_Once(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_OLD_20_Info_20_Window_2F_Lookup_20_Project_20_Info(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_OLD_20_Info_20_Window_2F_Get_20_Method_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_OLD_20_Info_20_Window_2F_Search_20_Cancel(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPLInfo_20_View_2F_Erase_20_View_20_CG(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLInfo_20_View_2F_Align_20_Content(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPLInfo_20_View_2F_Resize(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLInfo_20_View_2F_Create_20_Banner_20_Item(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_VPLInfo_20_View_2F_Advance_20_Focus(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLInfo_20_View_2F_Setup_20_Drawing_20_CG(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLInfo_20_Text_2F_Process_20_Click(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLInfo_20_Text_2F_Resize(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLInfo_20_Text_2F_Create_20_HIThemeTextInfo(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLInfo_20_Page_20_Description_2F_Get_20_Title(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLInfo_20_Page_20_Description_2F_Get_20_Topical_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLInfo_20_Page_20_Description_2F_Get_20_Standard_20_List_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLInfo_20_Page_20_Description_2F_Get_20_Search_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLInfo_20_Page_20_Description_2F_Get_20_Search_20_Phrase(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLInfo_20_Page_20_Description_2F_Get_20_Standard_20_Text_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLInfo_20_Page_20_Description_2F_Refresh(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPLInfo_20_Page_20_Description_2F_Destroy(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPLInfo_20_Page_20_Description_2F_Create(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Find_20_Project_20_Info(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Find_20_Project_20_Info_20_List(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Get_20_Recents_20_Service(V_Environment, enum boolType *, Nat4,V_Object *);
enum opTrigger vpx_method_Unique_20_Recents_20_Names(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *,V_Object *,V_Object *);
enum opTrigger vpx_method_VPLInfo_20_Page_20_Contents_2F_Refresh(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPLProject_20_Info_20_Service_2F_Open_20_Project(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLProject_20_Info_20_Service_2F_Find_20_Project_20_Info(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_VPLProject_20_Info_20_Service_2F_Close_20_Project(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLProject_20_Info_2F_New(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLProject_20_Info_2F_Open(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLProject_20_Info_2F_Open_20_Lists(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPLProject_20_Info_2F_Close(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPLProject_20_Info_2F_Close_20_Lists(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPLProject_20_Info_2F_Get_20_Initial_20_Lists(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLProject_20_Info_2F_Get_20_Project_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLProject_20_Info_2F_Get_20_Current_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLProject_20_Info_2F_Find_20_List_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_VPLProject_20_Info_20_List_2F_Open(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLProject_20_Info_20_List_2F_Close(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPLProject_20_Info_20_List_2F_Get_20_Project_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLProject_20_Info_20_List_2F_Get_20_Current_20_Find_20_Result(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLProject_20_Info_20_List_2F_Update_20_Find_20_Result(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLProject_20_Info_20_List_2F_Find_20_All_20_Results(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLProject_20_Info_20_List_2F_Create_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLProject_20_Info_20_List_2F_Update_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLProject_20_Info_20_List_2F_Register(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPLProject_20_Info_20_List_2F_In_20_Message_20_Group_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_VPLProject_20_Info_20_List_2F_Data_20_Message(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLProject_20_Info_20_List_2F_Get_20_List(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLProject_20_Info_20_List_2F_Refresh_20_Result(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPLProject_20_Info_20_Tools_2F_Find_20_All_20_Results(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLProject_20_Info_20_Tools_2F_Install_20_Tools(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLProject_20_Info_20_Tools_2F_Remove_20_Tools(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLProject_20_Info_20_Tools_2F_Update_20_Tool_20_Set(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPLProject_20_Info_20_Tools_2F_Close(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPLProject_20_Info_20_Tools_2F_Create_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLProject_20_Info_20_Tools_2F_Add_20_Methods(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLProject_20_Info_20_Tools_2F_Register_20_Method(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLProject_20_Info_20_Tools_2F_Unregister_20_Method(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLProject_20_Info_20_Tools_2F_In_20_Message_20_Group_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_VPLProject_20_Info_20_Tools_2F_Data_20_Message(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLProject_20_Info_20_Messages_2F_Find_20_All_20_Results(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Initialize(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Load_20_Projects(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Save_20_Projects(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Close_20_Projects(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Close(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Add_20_Project(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Trim_20_Projects(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Change_20_Projects_20_Max(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_20_Visibility(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Clear_20_Projects(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Post_20_Update_20_Menu(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Choose_20_Recent_20_Project(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Choose_20_Clear_20_Menu(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Get_20_Projects_20_Max(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLInfo_20_Page_20_Code_20_Checks_2F_Refresh(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPLPrefs_20_Sync(V_Environment, enum boolType *, Nat4);
enum opTrigger vpx_method_VPLPrefs_20_Load(V_Environment, enum boolType *, Nat4);
enum opTrigger vpx_method_VPLPrefs_20_Reset(V_Environment, enum boolType *, Nat4);
enum opTrigger vpx_method_Preferences_20_Window_2F_Open(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Preferences_20_Window_2F_Open_20_Controls(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Preferences_20_Window_2F_Find_20_Run_20_Mode(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Preferences_20_Window_2F_CE_20_HICommand_20_Process(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Preferences_20_Window_2F_HIC_20_Run_20_Tests(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Preferences_20_Window_2F_HIC_20_Run_20_Mode(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Preferences_20_Window_2F_Find_20_Case_20_Drawer(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Preferences_20_Window_2F_Find_20_Deep_20_Case(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Preferences_20_Window_2F_HIC_20_Open_20_Cases(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Preferences_20_Window_2F_HIC_20_Deep_20_Cases(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Preferences_20_Window_2F_Get_20_Project_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Preferences_20_Window_2F_Get_20_Method_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Preferences_20_Window_2F_Find_20_Proto_20_Windows(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Preferences_20_Window_2F_HIC_20_Proto_20_Windows(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Preferences_20_Window_2F_Find_20_Export_20_Mode(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Preferences_20_Window_2F_Find_20_Dock_20_Position(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Preferences_20_Window_2F_HIC_20_Dock_20_Position(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Preferences_20_Window_2F_HIC_20_Export_20_Mode(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Preferences_20_Window_2F_Find_20_Initial_20_Window_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Preferences_20_Window_2F_HIC_20_Initial_20_Window_3F_(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Preferences_20_Window_2F_Find_20_Reuse_20_List_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Preferences_20_Window_2F_HIC_20_Reuse_20_List_3F_(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Preferences_20_Window_2F_Find_20_Line_20_Hilite_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Preferences_20_Window_2F_HIC_20_Line_20_Hilite_3F_(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Preferences_20_Window_2F_HIC_20_Recent_20_Projects(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Preferences_20_Window_2F_Find_20_Recent_20_Projects(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Get_20_Front_20_Project(V_Environment, enum boolType *, Nat4,V_Object *);
enum opTrigger vpx_method_Front_20_Or_20_New_20_Project(V_Environment, enum boolType *, Nat4,V_Object *);
enum opTrigger vpx_method_Open_20_Project_20_File(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Open_20_Library_20_File(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Open_20_Section_20_File(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Open_20_Application_20_File(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Open_20_Resource_20_File(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_File_20_Open_20_Project_20_Callback(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_File_20_Open_20_Library_20_Callback(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_File_20_Open_20_Section_20_Callback(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_File_20_Open_20_Application_20_Callback(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_File_20_Open_20_Recource_20_Callback(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Select_20_Section(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Select_20_Class(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Get_20_Value_20_Clipboard(V_Environment, enum boolType *, Nat4,V_Object *);
enum opTrigger vpx_method_Create_20_Class_20_Heirarchy_20_List(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Modifier_20_Key_20_Pressed_3F_(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Get_20_Front_20_Method(V_Environment, enum boolType *, Nat4,V_Object *);
enum opTrigger vpx_method_Get_20_Item_20_Helper(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Import_20_CPX_20_File(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_File_20_Import_20_CPX_20_Callback(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Add_20_Files_20_To_20_Project(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Update_20_Status(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Process(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_CE_20_Window_20_Bounds_20_Changed(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_Open(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_Close(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_Toggle_20_DataBrowser(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_Set_20_Busy_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_Set_20_Prompt(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_xFile_20_New(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_xFile_20_New_20_Project(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_Extract_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_Install_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_Refresh_20_Data(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_Update_20_Data(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_Reinstall_20_Data(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_Find_20_List_20_View(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_New_20_Element(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_Open_20_Record(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_Open_20_With_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_Get_20_Project_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_Get_20_Section_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_Get_20_Method_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_Get_20_Save_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_Refresh(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_File_20_Add_20_To_20_Project(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_File_20_Export(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_File_20_Save(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_File_20_Save_20_As(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_File_20_Revert(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_Edit_20_Clear(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_Info_20_Last_20_Error(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_Info_20_Check_20_Program(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_Window_20_Info(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_Windows_20_Project(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_Exec_20_Execute_20_Method(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_Exec_20_Run_20_Application(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_Expose_20_URL(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_Clear_20_Breakpoints(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_Show_20_Breakpoints(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_Get_20_All_20_Breakpoints(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_In_20_Message_20_Group_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_Data_20_Message(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_Select_20_Item(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_File_20_Update_20_App(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create(V_Environment, enum boolType *, Nat4,V_Object,V_Object *,V_Object *,V_Object *,V_Object *);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_CE_20_HICommand_20_Update_20_Status(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_CE_20_HICommand_20_Process(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Clear(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Copy(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Cut(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Paste(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Move_20_To(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Duplicate(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_Get_20_Project_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Propagate_20_Attribute(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Paste_20_Value(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Copy_20_Value(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_Refresh_20_Selection(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_Select_20_Items(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Install_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Add_20_Content_20_Items(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Initialize_20_Value(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Reinstall_20_Data(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Change_20_Item_20_Data_20_Property(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Set_20_Item_20_Data_20_Property(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Double_20_Clicked(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Delete_20_Data(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Force_20_Reinstall(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Drag_20_Add_20_Item(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Drag_20_Accept_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Drag_20_Receive(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Change_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Update_20_Items(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Update_20_Self(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Get_20_Identity_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Set_20_Value(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Dispose(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_In_20_Message_20_Group_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Data_20_Message(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Send_20_Refresh(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Send_20_Reinstall(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Destroy(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Initialize(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Root_2F_Get_20_ItemID(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Root_2F_Reinstall_20_Data(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Root_2F_Initialize(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Root_2F_Drag_20_Accept_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Root_2F_Drag_20_Receive(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Value_20_Clipboard_2F_Can_20_Do_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Value_20_Clipboard_2F_Copy_20_Value(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Value_20_Clipboard_2F_Paste_20_Value(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Value_20_Clipboard_2F_Clear(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Value_20_Clipboard_2F_Open(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Value_20_Clipboard_2F_Close(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Project_20_DB_20_Method_20_Data_2F_Install_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Project_20_DB_20_Method_20_Data_2F_Double_20_Clicked(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Project_20_DB_20_Method_20_Data_2F_Change_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Project_20_DB_20_Case_20_Data_2F_Double_20_Clicked(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Project_20_Open_20_Activity_2F_Error(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Project_20_Open_20_Activity_2F_Get_20_Project_20_Helper(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Project_20_Open_20_Activity_2F_Run(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Project_20_Open_20_Activity_2F_Initialize_20_Progress_20_Window(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Project_20_File_20_Activity_20_Stage_2F_Run_20_Begin(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Project_20_File_20_Activity_20_Stage_2F_Update_20_Percent(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Project_20_File_20_Activity_20_Stage_2F_Up_20_Count(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Project_20_File_20_Activity_20_Stage_2F_Set_20_Count(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_POAS_20_Load_20_File_2F_Run(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_End(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_POAS_20_Read_20_Primitives_2F_Run(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_POAS_20_Read_20_Primitives_2F_Run_20_Begin(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_POAS_20_Read_20_Primitives_2F_Next_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_POAS_20_Read_20_Sections_2F_Run(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_POAS_20_Read_20_Sections_2F_Run_20_Begin(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_POAS_20_Read_20_Sections_2F_Run_20_End(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_POAS_20_Open_20_Project_2F_Run(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_POAS_20_Open_20_Sections_2F_Run(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_POAS_20_Open_20_Sections_2F_Run_20_Begin(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_POAS_20_Open_20_Sections_2F_Run_20_End(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_POAS_20_Open_20_Sections_2F_Push_20_On_20_Stack(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_POAS_20_Resolve_20_References_2F_Run(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_POAS_20_Resolve_20_References_2F_Run_20_Begin(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_POAS_20_Resolve_20_References_2F_Run_20_End(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_POAS_20_Post_20_Load_2F_Run(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_POAS_20_Update_20_Classes_2F_Run(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_POAS_20_Update_20_Classes_2F_Run_20_Begin(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_POAS_20_Update_20_Classes_2F_Run_20_End(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_POAS_20_Update_20_Persistents_2F_Run(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_POAS_20_Update_20_Persistents_2F_Run_20_Begin(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_POAS_20_Update_20_Persistents_2F_Run_20_End(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_POAS_20_Install_20_Tools_2F_Run(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_POAS_20_Copy_20_Resources_2F_Run(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_POAS_20_Copy_20_Resources_2F_Run_20_Begin(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_POAS_20_Copy_20_Resources_2F_Next_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_POAS_20_Open_20_Editor_2F_Run(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_POAS_20_Name_20_Application_2F_Run(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_POAS_20_Name_20_Application_2F_Run_20_Begin(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_POAS_20_Name_20_Application_2F_Run_20_End(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Run(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Run_20_Begin(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Item_20_Run(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Item_20_Stop(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Item_20_Start(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Nav_20_File_20_Callback(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Event(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Unknown_20_Selector(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Customize(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Start(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Accept(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Adjust_20_Rect(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Terminate(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Get_20_Custom_20_View_20_ID(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Find_20_Custom_20_View(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Find_20_Custom_20_Item(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Find_20_Nib_20_Window(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Get_20_Custom_20_Reply(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Set_20_Custom_20_Reply(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Create_20_Custom_20_View(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Create_20_Nib_20_Window(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Nav_20_Custom_20_Control(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCtl_20_Get_20_Location(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCtl_20_Terminate(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCtl_20_Add_20_Control(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_New_20_Location(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Update_20_Location_20_Prompt(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Project_20_Save_20_Activity_2F_Object_20_Save(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Project_20_Save_20_Activity_2F_Object_20_Save_20_Sync(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Project_20_Save_20_Activity_2F_Object_20_Save_20_As(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Project_20_Save_20_Activity_2F_C_20_Save(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Project_20_Save_20_Activity_2F_Initialize_20_Progress_20_Window(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Project_20_Save_20_Activity_2F_Run(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Project_20_Save_20_Activity_2F_Begin(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Project_20_Save_20_Activity_2F_Run_20_End(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_PFAS_20_Find_20_Type_20_Files_2F_Run(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_PFAS_20_Find_20_Type_20_Files_2F_Run_20_Begin(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_PFAS_20_Find_20_Type_20_Files_2F_Run_20_End(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_PFAS_20_Find_20_Files_20_Manually_2F_Run(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_PFAS_20_Find_20_Files_20_Manually_2F_Run_20_Begin(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_PFAS_20_Find_20_Files_20_Manually_2F_Item_20_Run(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_PFAS_20_Find_20_Files_20_Manually_2F_Item_20_Stop(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_PFAS_20_Find_20_Files_20_Manually_2F_Item_20_Start(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_PFAS_20_Find_20_Files_20_Manually_2F_Nav_20_File_20_Callback(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_PFAS_20_Write_20_Files_2F_Run_20_Begin(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_PFAS_20_Write_20_Files_2F_Run(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_PFAS_20_Write_20_Files_2F_Next_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_PFAS_20_Update_20_Window_20_Stage_2F_Run_20_Begin(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Project_20_Update_20_Activity_2F_Error(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Project_20_Update_20_Activity_2F_Get_20_Project_20_Helper(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Project_20_Update_20_Activity_2F_Run(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Project_20_Update_20_Activity_2F_Run_20_End(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Project_20_Update_20_Activity_2F_Initialize_20_Progress_20_Window(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_PUAS_20_Update_20_Values_2F_Run(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_PUAS_20_Update_20_Values_2F_Run_20_Begin(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_PUAS_20_Update_20_Values_2F_Run_20_End(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_PUAS_20_Update_20_VPZ_20_File_2F_Run(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_PUAS_20_Update_20_Bundles_2F_Run(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_PUAS_20_Update_20_Bundles_2F_Run_20_Begin(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_PUAS_20_Update_20_Bundles_2F_Run_20_End(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_PUAS_20_Update_20_Resources_2F_Run(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_PUAS_20_Update_20_Resources_2F_Run_20_Begin(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_PUAS_20_Update_20_Resources_2F_Run_20_End(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_TEST_20_Pipe(V_Environment, enum boolType *, Nat4);
enum opTrigger vpx_method_Pipe_20_Shell_20_Command(V_Environment, enum boolType *, Nat4,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_Product_20_Name_20_To_20_CFBundleIdentifier(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Find_20_SDK_20_Service(V_Environment, enum boolType *, Nat4,V_Object *);
enum opTrigger vpx_method_Pipe_20_Command_2F_Run_20_Sync(V_Environment, enum boolType *, Nat4,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_Pipe_20_Command_2F_Get_20_Delimiter(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Pipe_20_Command_2F_Get_20_Command(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Pipe_20_Command_2F_Set_20_Command(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Pipe_20_Command_2F_Get_20_Options(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Pipe_20_Command_2F_Set_20_Options(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Pipe_20_Command_2F_Get_20_Result(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Pipe_20_Command_2F_Set_20_Result(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Pipe_20_Command_2F_Get_20_Result_20_Text(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Pipe_20_Command_2F_Set_20_Result_20_Text(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Pipe_20_Command_2F_Add_20_Options(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Pipe_20_Command_2F_Form_20_Command_20_Text(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Pipe_20_Command_2F_New(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Pipe_20_Command_20_Option_2F_Form_20_Option_20_Text(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Pipe_20_Command_20_Option_2F_Get_20_Delimiter(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Pipe_20_Command_20_Option_2F_Get_20_Option(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Pipe_20_Command_20_Option_2F_Set_20_Option(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Pipe_20_Command_20_Option_2F_Get_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Pipe_20_Command_20_Option_2F_Set_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Pipe_20_Command_20_Option_2F_New(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_GCC_20_Command_2F_Get_20_Sources(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_GCC_20_Command_2F_Set_20_Sources(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_GCC_20_Command_2F_Compile_20_Sources_20_As(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_GCC_20_Command_2F_Link_20_Sources_20_As(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_GCC_20_Command_2F_Link_20_Add_20_Frameworks(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_GCC_20_Command_2F_Add_20_Framework_20_Locations(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_GCC_20_Command_2F_Add_20_Architecture(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_GCC_20_Command_2F_Add_20_SDK_20_Root(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_GCC_20_Command_2F_Add_20_Minimum_20_MacOSX(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_GCC_20_Command_2F_Get_20_Item(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_GCC_20_Command_2F_Set_20_Item(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_GCC_20_Command_2F_PFAB_20_Compile_20_Sources_20_As(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_GCC_20_Command_2F_PFAB_20_Link_20_Sources_20_As(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_LIPO_20_Command_2F_Create_20_Fat_20_Binary(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Project_20_Build_20_Activity_2F_Run(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Project_20_Build_20_Activity_2F_Run_20_End(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Project_20_Build_20_Activity_2F_Initialize_20_Progress_20_Window(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Project_20_Build_20_Activity_2F_Build_20_Project(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Project_20_Build_20_Activity_2F_Find_20_Build_20_Folder(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Project_20_Build_20_Activity_2F_Get_20_Project_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Project_20_Build_20_Activity_2F_Get_20_Packager_20_State(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Project_20_Build_20_Activity_2F_Set_20_Project_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Project_20_Build_20_Activity_2F_Set_20_Packager_20_State(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Project_20_Build_20_Activity_2F_Get_20_Engine_20_Framework(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Project_20_Build_20_Activity_2F_Set_20_Engine_20_Framework(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Project_20_Build_20_Activity_2F_Begin(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Project_20_Build_20_Activity_2F_Force_20_Synchronize(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Project_20_Build_20_Activity_2F_Stage_20_For_20_Error(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_PFAB_20_Build_20_Settings_2F_Run(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_PFAB_20_Build_20_Settings_2F_Run_20_Begin(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_PFAB_20_Build_20_Settings_2F_Run_20_End(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_PFAB_20_Find_20_Type_20_Files_2F_Run(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_PFAB_20_Find_20_Type_20_Files_2F_Run_20_Begin(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_PFAB_20_Find_20_Type_20_Files_2F_Run_20_End(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_PFAB_20_Find_20_Files_20_Manually_2F_Run(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_PFAB_20_Find_20_Files_20_Manually_2F_Run_20_Begin(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_PFAB_20_Find_20_Files_20_Manually_2F_Item_20_Run(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_PFAB_20_Find_20_Files_20_Manually_2F_Item_20_Stop(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_PFAB_20_Find_20_Files_20_Manually_2F_Item_20_Start(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_PFAB_20_Find_20_Files_20_Manually_2F_Nav_20_File_20_Callback(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_PFAB_20_Compile_20_Sources_20_As_2F_Run(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_PFAB_20_Compile_20_Sources_20_As_2F_Run_20_Begin(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_PFAB_20_Compile_20_Sources_20_As_2F_Run_20_End(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_PFAB_20_Packager_20_Preflight_2F_Run(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_PFAB_20_Update_20_Resources_2F_Run(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_PFAB_20_Update_20_Resources_2F_Run_20_Begin(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_PFAB_20_Update_20_Resources_2F_Run_20_End(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_PFAB_20_Update_20_Frameworks_2F_Run(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_PFAB_20_Update_20_Frameworks_2F_Run_20_Begin(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_PFAB_20_Update_20_Frameworks_2F_Run_20_End(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_PFAB_20_Packager_20_Create_20_Info_2F_Run(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_PFAB_20_Link_20_Sources_20_As_2F_Run(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_PFAB_20_Link_20_Sources_20_As_2F_Run_20_Begin(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_PFAB_20_Link_20_Sources_20_As_2F_Run_20_End(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_PFAB_20_Lipo_20_Binaries_2F_Run(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_PFAB_20_Lipo_20_Binaries_2F_Run_20_Begin(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_PFAB_20_Lipo_20_Binaries_2F_Run_20_End(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_PFAB_20_Packager_20_Postflight_2F_Run(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_PFAB_20_Build_20_Summary_2F_Run(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_PFAB_20_Build_20_Summary_2F_Run_20_Begin(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_PFAB_20_Build_20_Summary_2F_Run_20_End(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLProject_20_AppBuildSummary_20_Sheet_2F_Open(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLProject_20_AppBuildSummary_20_Sheet_2F_Open_20_Controls(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPLProject_20_AppBuildSummary_20_Sheet_2F_CE_20_HICommand_20_Process(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_VPLProject_20_AppBuildSummary_20_Sheet_2F_HIC_20_Click_20_Utility(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPLProject_20_AppBuildSummary_20_Sheet_2F_HIC_20_OK(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPLProject_20_AppBuildSummary_20_Sheet_2F_Close(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPLProject_20_AppBuildSummary_20_Sheet_2F_Get_20_Activity(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLProject_20_AppBuildSummary_20_Sheet_2F_Set_20_Activity(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLProject_20_AppBuildSummary_20_Sheet_2F_Get_20_Error_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLProject_20_AppBuildSummary_20_Sheet_2F_Set_20_Error_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLProject_20_AppBuildSummary_20_Sheet_2F_Find_20_Primary_20_Prompt(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLProject_20_AppBuildSummary_20_Sheet_2F_Find_20_Secondary_20_Prompt(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLProject_20_AppBuildSummary_20_Sheet_2F_Find_20_Utility_20_Button(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLProject_20_AppBuild_20_Sheet_2F_Open(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLProject_20_AppBuild_20_Sheet_2F_Open_20_Controls(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPLProject_20_AppBuild_20_Sheet_2F_Choose_20_Form(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLProject_20_AppBuild_20_Sheet_2F_Find_20_Name_20_Text(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLProject_20_AppBuild_20_Sheet_2F_Find_20_Bundle_20_Group(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLProject_20_AppBuild_20_Sheet_2F_Find_20_Bundle_20_Identifier(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLProject_20_AppBuild_20_Sheet_2F_Find_20_Package_20_Type(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLProject_20_AppBuild_20_Sheet_2F_Get_20_Product_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLProject_20_AppBuild_20_Sheet_2F_Set_20_Product_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLProject_20_AppBuild_20_Sheet_2F_CE_20_HICommand_20_Process(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_VPLProject_20_AppBuild_20_Sheet_2F_HIC_20_OK(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPLProject_20_AppBuild_20_Sheet_2F_HIC_20_Cancel(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPLProject_20_AppBuild_20_Sheet_2F_HIC_20_Pick_20_Type(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPLProject_20_AppBuild_20_Sheet_2F_HIC_20_Pick_20_Arch(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPLProject_20_AppBuild_20_Sheet_2F_HIC_20_Pick_20_Root(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPLProject_20_AppBuild_20_Sheet_2F_HIC_20_Pick_20_Min_20_MacOS(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPLProject_20_AppBuild_20_Sheet_2F_Close(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPLProject_20_AppBuild_20_Sheet_2F_Get_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLProject_20_AppBuild_20_Sheet_2F_Get_20_Form(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLProject_20_AppBuild_20_Sheet_2F_Set_20_Form(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLProject_20_AppBuild_20_Sheet_2F_Get_20_Project_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLProject_20_AppBuild_20_Sheet_2F_Get_20_Activity(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLProject_20_AppBuild_20_Sheet_2F_Set_20_Activity(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLProject_20_AppBuild_20_Sheet_2F_Set_20_Default_20_Form_20_Identifier(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPLProject_20_AppBuild_20_Sheet_2F_Get_20_All_20_Package_20_Types(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLProject_20_AppBuild_20_Sheet_2F_Extract_20_Form(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPLProject_20_AppBuild_20_Sheet_2F_Find_20_Creator_20_Code(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLProject_20_AppBuild_20_Sheet_2F_Find_20_Type_20_Code(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLProject_20_AppBuild_20_Sheet_2F_Find_20_Package_20_Extension(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLProject_20_AppBuild_20_Sheet_2F_Find_20_Private_20_Frameworks_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLProject_20_AppBuild_20_Sheet_2F_Find_20_Clean_20_Build_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLProject_20_AppBuild_20_Sheet_2F_Find_20_Bundle_20_Version(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLProject_20_AppBuild_20_Sheet_2F_Find_20_Release_20_Version(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLProject_20_AppBuild_20_Sheet_2F_Find_20_Arch_20_Type(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLProject_20_AppBuild_20_Sheet_2F_Find_20_Root_20_SDK(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLProject_20_AppBuild_20_Sheet_2F_Find_20_Min_20_MacOS(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLProject_20_Product_20_Name_20_Control_2F_CE_20_Text_20_Accepted(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Bundle_20_Packager_20_State_2F_Linking_20_Preflight(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Bundle_20_Packager_20_State_2F_Linking_20_Postflight(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Bundle_20_Packager_20_State_2F_Linking_20_Failed(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Bundle_20_Packager_20_State_2F_Find_20_Path_20_To_20_Binary(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Bundle_20_Packager_20_State_2F_Find_20_FSRef_20_To_20_Resources(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Bundle_20_Packager_20_State_2F_Find_20_FSRef_20_To_20_Frameworks(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Bundle_20_Packager_20_State_2F_Get_20_Application_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Bundle_20_Packager_20_State_2F_Get_20_Product_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Bundle_20_Packager_20_State_2F_Get_20_Project_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Bundle_20_Packager_20_State_2F_Set_20_Project_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Bundle_20_Packager_20_State_2F_Get_20_Build_20_Folder(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Bundle_20_Packager_20_State_2F_Set_20_Build_20_Folder(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Bundle_20_Packager_20_State_2F_Get_20_Stage(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Bundle_20_Packager_20_State_2F_Set_20_Stage(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Bundle_20_Packager_20_State_2F_Get_20_Packager(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Bundle_20_Packager_20_State_2F_Set_20_Packager(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Bundle_20_Packager_20_State_2F_TEST_20_Static_20_Form(V_Environment, enum boolType *, Nat4);
enum opTrigger vpx_method_Bundle_20_Packager_20_State_2F_Run_20_Link_20_State(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Bundle_20_Packager_20_State_2F_Open(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Bundle_20_Packager_20_State_2F_Close(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Bundle_20_Packager_20_Form_2F_Find_20_FSRef_20_To_20_Self(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Bundle_20_Packager_20_Form_2F_Find_20_FSRef_20_To_20_Contents(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Bundle_20_Packager_20_Form_2F_Find_20_FSRef_20_To_20_Resources(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Bundle_20_Packager_20_Form_2F_Find_20_FSRef_20_To_20_Frameworks(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Bundle_20_Packager_20_Form_2F_Find_20_FSRef_20_To_20_Info_2E_plist(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Bundle_20_Packager_20_Form_2F_Find_20_Path_20_To_20_Contents(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Bundle_20_Packager_20_Form_2F_Find_20_Path_20_To_20_Binary(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Bundle_20_Packager_20_Form_2F_Find_20_Path_20_To_20_Arch_20_Binary(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Bundle_20_Packager_20_Form_2F_Find_20_Path_20_To_20_Info_2E_plist(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Bundle_20_Packager_20_Form_2F_Find_20_Contents_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Bundle_20_Packager_20_Form_2F_Find_20_Package_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Bundle_20_Packager_20_Form_2F_Find_20_Product_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Bundle_20_Packager_20_Form_2F_Get_20_Contents_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Bundle_20_Packager_20_Form_2F_Get_20_Copy_20_Frameworks_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Bundle_20_Packager_20_Form_2F_Choose_20_Settings(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Bundle_20_Packager_20_Form_2F_Get_20_Package_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Bundle_20_Packager_20_Form_2F_Set_20_Package_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Bundle_20_Packager_20_Form_2F_Get_20_Package_20_ID(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Bundle_20_Packager_20_Form_2F_Set_20_Package_20_ID(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Bundle_20_Packager_20_Form_2F_Get_20_Path_20_To_20_Binary(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Bundle_20_Packager_20_Form_2F_Set_20_Path_20_To_20_Binary(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Bundle_20_Packager_20_Form_2F_Get_20_Link_20_States(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Bundle_20_Packager_20_Form_2F_Set_20_Link_20_States(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Bundle_20_Packager_20_Form_2F_Get_20_Product_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Bundle_20_Packager_20_Form_2F_Set_20_Product_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Bundle_20_Packager_20_Form_2F_Supports_20_UI_20_Settings(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Bundle_20_Packager_20_Form_2F_Get_20_All_20_Package_20_Types(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Bundle_20_Packager_20_Form_2F_Initialize(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Bundle_20_Packager_20_Form_2F_Get_20_Clean_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Bundle_20_Packager_20_Form_2F_Set_20_Clean_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Bundle_20_Packager_20_Form_2F_Clean_20_Product(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Bundle_20_Packager_20_Form_2F_Get_20_Architectures(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Bundle_20_Packager_20_Form_2F_Set_20_Architectures(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Bundle_20_Packager_20_Form_2F_Get_20_Root_20_SDK(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Bundle_20_Packager_20_Form_2F_Set_20_Root_20_SDK(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Bundle_20_Packager_20_Form_2F_Get_20_Minimum_20_MacOSX(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Bundle_20_Packager_20_Form_2F_Set_20_Minimum_20_MacOSX(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Bundle_20_Packager_20_Form_2F_Get_20_Export_20_Level(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Bundle_20_Packager_20_Form_2F_Set_20_Export_20_Level(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_MacOS_20_Bundle_20_Form_2F_Find_20_Development_20_Region(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_MacOS_20_Bundle_20_Form_2F_Find_20_Package_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_MacOS_20_Bundle_20_Form_2F_Find_20_PkgInfo_20_Type(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_MacOS_20_Bundle_20_Form_2F_Find_20_PkgInfo_20_Creator(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_MacOS_20_Bundle_20_Form_2F_Find_20_Bundle_20_Version(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_MacOS_20_Bundle_20_Form_2F_Find_20_Bundle_20_Identifier(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_MacOS_20_Bundle_20_Form_2F_Find_20_Bundle_20_Icon_20_File(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_MacOS_20_Bundle_20_Form_2F_Find_20_Release_20_Version(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_MacOS_20_Bundle_20_Form_2F_Find_20_Custom_20_Plist_20_Keys(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_MacOS_20_Bundle_20_Form_2F_Create_20_Static_20_Form(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_MacOS_20_Bundle_20_Form_2F_Create_20_PkgInfo(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_MacOS_20_Bundle_20_Form_2F_Create_20_Info_2E_plist(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_MacOS_20_Bundle_20_Form_2F_Copy_20_Resources(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_MacOS_20_Bundle_20_Form_2F7E_Create_20_Subfolders(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_MacOS_20_Bundle_20_Form_2F_Get_20_Contents_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_MacOS_20_Bundle_20_Form_2F_Choose_20_Settings(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_MacOS_20_Bundle_20_Form_2F_Get_20_Static_20_Directories(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_MacOS_20_Bundle_20_Form_2F_Set_20_Static_20_Directories(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_MacOS_20_Bundle_20_Form_2F_Get_20_Bundle_20_Extension(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_MacOS_20_Bundle_20_Form_2F_Set_20_Bundle_20_Extension(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_MacOS_20_Bundle_20_Form_2F_Get_20_Bundle_20_Identifier(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_MacOS_20_Bundle_20_Form_2F_Set_20_Bundle_20_Identifier(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_MacOS_20_Bundle_20_Form_2F_Get_20_PkgInfo_20_Creator(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_MacOS_20_Bundle_20_Form_2F_Set_20_PkgInfo_20_Creator(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_MacOS_20_Bundle_20_Form_2F_Get_20_PkgInfo_20_Type(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_MacOS_20_Bundle_20_Form_2F_Set_20_PkgInfo_20_Type(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_MacOS_20_Bundle_20_Form_2F_Get_20_Copy_20_Frameworks_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_MacOS_20_Bundle_20_Form_2F_Set_20_Copy_20_Frameworks_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_MacOS_20_Bundle_20_Form_2F_Supports_20_UI_20_Settings(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_MacOS_20_Bundle_20_Form_2F_Clone(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_MacOS_20_Bundle_20_Form_2F_Initialize(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_MacOS_20_Bundle_20_Form_2F_Clean_20_Product(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_MacOS_20_Bundle_20_Form_2F_Get_20_Bundle_20_Version(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_MacOS_20_Bundle_20_Form_2F_Set_20_Bundle_20_Version(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_MacOS_20_Bundle_20_Form_2F_Get_20_Release_20_Version(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_MacOS_20_Bundle_20_Form_2F_Set_20_Release_20_Version(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_MacOS_20_Bundle_20_Form_2F_Get_20_Custom_20_Plist_20_Keys(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_MacOS_20_Bundle_20_Form_2F_Set_20_Custom_20_Plist_20_Keys(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_MacOS_20_Bundle_20_Form_2F_Get_20_Bundle_20_Icon_20_File(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_MacOS_20_Bundle_20_Form_2F_Set_20_Bundle_20_Icon_20_File(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Bundle_20_Packager_20_SDK_20_Service_2F_Get_20_SDKs(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Bundle_20_Packager_20_SDK_20_Service_2F_Set_20_SDKs(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Bundle_20_Packager_20_SDK_20_Service_2F_Refresh_20_List(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Bundle_20_Packager_20_SDK_20_Service_2F_Get_20_Sorted_20_SDK_20_Names(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Bundle_20_Packager_20_SDK_20_Service_2F_Find_20_SDK_20_By_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Bundle_20_Packager_20_SDK_20_Service_2F_Find_20_SDK_20_Path(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Bundle_20_Packager_20_SDK_20_Service_2F_Initialize(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Bundle_20_Packager_20_SDK_2F_Create_20_From_20_Path(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Bundle_20_Packager_20_SDK_2F_Get_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Bundle_20_Packager_20_SDK_2F_Set_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Bundle_20_Packager_20_SDK_2F_Get_20_Path(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Bundle_20_Packager_20_SDK_2F_Set_20_Path(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Bundle_20_Packager_20_SDK_2F_Get_20_Architectures(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Bundle_20_Packager_20_SDK_2F_Set_20_Architectures(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Bundle_20_Packager_20_SDK_2F_Get_20_Build_20_Settings(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Bundle_20_Packager_20_SDK_2F_Set_20_Build_20_Settings(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Bundle_20_Packager_20_SDK_2F_Get_20_Custom_20_Properties(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Bundle_20_Packager_20_SDK_2F_Set_20_Custom_20_Properties(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Bundle_20_Packager_20_SDK_2F_Get_20_Default_20_Properties(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Bundle_20_Packager_20_SDK_2F_Set_20_Default_20_Properties(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Bundle_20_Packager_20_SDK_2F_Get_20_Supports_20_ZeroLink_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Bundle_20_Packager_20_SDK_2F_Set_20_Supports_20_ZeroLink_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLProject_20_AppBuild_20_Icon_20_Well_2F_Get_20_Resource_20_File(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLProject_20_AppBuild_20_Icon_20_Well_2F_Set_20_Resource_20_File(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLProject_20_AppBuild_20_Icon_20_Well_2F_Get_20_IconRef(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLProject_20_AppBuild_20_Icon_20_Well_2F_Set_20_IconRef(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLProject_20_AppBuild_20_Icon_20_Well_2F_Set_20_Image_20_Well_20_From_20_File(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Case_20_Data_2F_C_20_Code_20_Export_20_Connections(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Case_20_Data_2F_C_20_Code_20_Export_20_Operations(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Case_20_Data_2F_C_20_Code_20_Export_20_Synchros(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Case_20_Data_2F_C_20_Code_20_Footer(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Case_20_Data_2F_C_20_Code_20_Header(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Case_20_Data_2F_Export_20_Text(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Case_20_Data_2F_Get_20_Project_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Case_20_Data_2F_Initialize_20_Item_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Case_20_Data_2F_Open(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Case_20_Data_2F_Push_20_Lists_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Case_20_Data_2F_Remove_20_Self(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Case_20_Data_2F_Do_20_Sort_20_Operations(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Case_20_Data_2F_Update_20_List_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Case_20_Data_2F_Update_20_Names(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Case_20_Data_2F_Dispose_20_Record(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Case_20_Data_2F_Order_20_Records(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Case_20_Data_2F_Post_20_Open(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Case_20_Data_2F_Parse_20_CPX_20_Buffer(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object *,V_Object *,V_Object *);
enum opTrigger vpx_method_Case_20_Data_2F_Set_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Case_20_Data_2F_Get_20_All_20_Breakpoints(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Case_20_Data_2F_Get_20_Universal(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Case_20_Data_2F_Get_20_Export_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Case_20_Data_2F_Create_20_Default_20_Case(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Case_20_Data_2F_Reveal_20_Path_20_Item(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Case_20_Data_2F_Next_20_Case_20_Check(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Case_20_Data_2F_Dead_20_Case_20_Check(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Case_20_Data_2F_Can_20_Fail_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Case_20_Data_2F_Tidy(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Case_20_Data_2F_Sort_20_Control(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Case_20_Data_2F_Handle_20_Item_20_Click(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Case_20_Data_2F_Get_20_Ideal_20_Size(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Case_20_Data_2F_Sort_20_Operations(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Case_20_Comment_20_Data_2F_Initial_20_Where(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Case_20_Comment_20_Data_2F_Initialize_20_Item_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Case_20_Comment_20_Data_2F_Set_20_Text(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Case_20_Comment_20_Data_2F_Construct_20_Editor(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Case_20_Comment_20_Data_2F_Open_20_Editor(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Case_20_Comment_20_Data_2F_Get_20_Find_20_Text(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Case_20_Comment_20_Data_2F_Set_20_Find_20_Text(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Case_20_Comment_20_Data_2F_Move_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Case_20_Comment_20_Data_2F_Use_20_Best_20_Frame(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Case_20_Comment_20_Data_2F_Get_20_Top(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Case_20_Comment_20_Data_2F_Get_20_Left(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Case_20_Comment_20_Data_2F_Get_20_Bottom(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Case_20_Comment_20_Data_2F_Get_20_Right(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Case_20_Comment_20_Data_2F_Get_20_Baseline(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Case_20_Comment_20_Data_2F_Move_20_Item(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Attribute_20_Data_2F_Add_20_To_20_List_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Attribute_20_Data_2F_Export_20_Text(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Attribute_20_Data_2F_Remove_20_Self(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Attribute_20_Data_2F_Set_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Attribute_20_Data_2F_Substitute_20_With(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Attribute_20_Data_2F_Open(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Attribute_20_Data_2F_Dispose_20_Record(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Attribute_20_Data_2F_Order_20_Records(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Attribute_20_Data_2F_Update_20_Record(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Attribute_20_Data_2F_Handle_20_Item_20_Click(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Attribute_20_Data_2F_Update_20_Value(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Attribute_20_Data_2F_Full_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Attribute_20_Data_2F_Get_20_Direct_20_Value(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Attribute_20_Data_2F_Set_20_Direct_20_Value(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Attribute_20_Data_2F_Set_20_Value_20_Address(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Attribute_20_Data_2F_Get_20_Value_20_Address(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Attribute_20_Data_2F_Get_20_Value(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Attribute_20_Data_2F_Set_20_Value(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Attribute_20_Data_2F_Have_20_Row_20_Values_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_Attribute_20_Data_2F_Have_20_Icon_20_Values_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_Attribute_20_Data_2F_Create_20_Accessor_20_Method(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Attribute_20_Data_2F_Parse_20_CPX_20_Buffer(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object *,V_Object *,V_Object *);
enum opTrigger vpx_method_Attribute_20_Data_2F_Set_20_CPX_20_Text(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Attribute_20_Data_2F_Isolate_20_First(V_Environment, enum boolType *, Nat4,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_Attribute_20_Data_2F_Integrate_20_First(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Class_20_Data_2F_C_20_Code_20_Export_20_Attributes(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Class_20_Data_2F_C_20_Code_20_Export_20_Universals(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Class_20_Data_2F_C_20_Code_20_Footer(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Class_20_Data_2F_C_20_Code_20_Header(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Class_20_Data_2F_C_20_Code_20_Super(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Class_20_Data_2F_Clone(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Class_20_Data_2F_Close(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Class_20_Data_2F_Delete_20_Nth_20_Attribute(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Class_20_Data_2F_Export_20_Text(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Class_20_Data_2F_Full_20_Persistent_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Class_20_Data_2F_Full_20_Universal_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Class_20_Data_2F_Get_20_Attributes(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Class_20_Data_2F_Get_20_Class_20_Attributes(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Class_20_Data_2F_Get_20_Value(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Class_20_Data_2F_Initialize_20_Item_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Class_20_Data_2F_Insert_20_Attribute(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Class_20_Data_2F_Integrate(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Class_20_Data_2F_Isolate(V_Environment, enum boolType *, Nat4,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_Class_20_Data_2F_Open(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Class_20_Data_2F_Remove_20_Self(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Class_20_Data_2F_Remove_20_Sub_20_Class(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Class_20_Data_2F_Resolve_20_Class(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_Class_20_Data_2F_Set_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Class_20_Data_2F_Set_20_Super_20_Class(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Class_20_Data_2F_Update_20_Attribute_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Class_20_Data_2F_Substitute_20_Attribute(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Class_20_Data_2F_Update_20_Class_20_Attribute_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Class_20_Data_2F_Substitute_20_Class_20_Attribute(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Class_20_Data_2F_Insert_20_Class_20_Attribute(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Class_20_Data_2F_Delete_20_Nth_20_Class_20_Attribute(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Class_20_Data_2F_Update_20_Record(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Class_20_Data_2F_Post_20_Open(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Class_20_Data_2F_Class_20_To_20_Instance(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Class_20_Data_2F_Update_20_Value(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Class_20_Data_2F_Find_20_Editor(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Class_20_Data_2F_Update_20_Editors(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Class_20_Data_2F_Set_20_Value(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Class_20_Data_2F_Get_20_Universals(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Class_20_Data_2F_Get_20_All_20_Breakpoints(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Class_20_Data_2F_Update_20_Attribute_20_Value(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Class_20_Data_2F_Update_20_Class_20_Attribute_20_Value(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Class_20_Data_2F_Test_20_Attribute_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Class_20_Data_2F_Create_20_Super_20_Class(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Class_20_Data_2F_Add_20_Sub_20_Class(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Class_20_Data_2F_After_20_Import(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Class_20_Data_2F_Parse_20_CPX_20_Buffer(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object *,V_Object *,V_Object *);
enum opTrigger vpx_method_Class_20_Data_2F_Set_20_CPX_20_Text(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Class_20_Data_2F_Get_20_Methods(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Class_20_Data_2F_Can_20_Delete_3F_(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Class_20_Data_2F_Find_20_Descendants(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *,V_Object *,V_Object *,V_Object *);
enum opTrigger vpx_method_Class_20_Attribute_20_Data_2F_Add_20_To_20_List_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Class_20_Attribute_20_Data_2F_Remove_20_Self(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Class_20_Attribute_20_Data_2F_Substitute_20_With(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Class_20_Attribute_20_Data_2F_Set_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Class_20_Attribute_20_Data_2F_Open(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Class_20_Attribute_20_Data_2F_Close(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Class_20_Attribute_20_Data_2F_Dispose_20_Record(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Class_20_Attribute_20_Data_2F_Update_20_Record(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Class_20_Attribute_20_Data_2F_Parse_20_CPX_20_Buffer(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object *,V_Object *,V_Object *);
enum opTrigger vpx_method_Class_20_Attribute_20_Data_2F_Set_20_CPX_20_Text(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLCallback_20_Handler(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Execution_20_Thread_2F_Stack_20_Execution(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Execution_20_Thread_2F_Stack_20_Termination(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Execution_20_Thread_2F_Install_20_Thread(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Execution_20_Thread_2F_Show_20_Errors(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Execution_20_Thread_2F_Execute(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Execution_20_Thread_2F_Return_20_From_20_Thread(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Debug_20_State_2F_Open_20_Editor(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Debug_20_State_2F_Get_20_Editor(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Debug_20_State_2F_Close_20_Editor(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Debug_20_State_2F_Construct_20_Editor(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Debug_20_State_2F_Get_20_Application(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Debug_20_State_2F_Construct_20_Title(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Debug_20_State_2F_Get_20_Current_20_Item(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Debug_20_State_2F_Get_20_Item(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Debug_20_State_2F_Get_20_Current_20_Index(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Debug_20_State_2F_Set_20_Item_20_Breakpoint(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Debug_20_State_2F_Handle_20_Break(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Debug_20_State_2F_Set_20_Editor(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Debug_20_State_2F_Set_20_Current_20_Operation(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Debug_20_State_2F_Install_20_Frames(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Debug_20_State_2F_In_20_Current_20_Stack(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Debug_20_State_2F_Remove_20_View(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Debug_20_State_2F_Continue(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Debug_20_State_2F_Step_20_Into(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Debug_20_State_2F_Step_20_Out(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Debug_20_State_2F_Step_20_Skip(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Debug_20_State_2F_Step(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Debug_20_State_2F_Clear_20_Breakpoints(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Debug_20_State_2F_Abort(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Debug_20_State_2F_Get_20_All_20_Breakpoints(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Debug_20_State_2F_Have_20_Row_20_Values_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_Debug_20_State_2F_Have_20_Icon_20_Values_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_Thread_20_Task_2F_Perform(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Interpreter_2F_Open(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Interpreter_2F_Close(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Interpreter_2F_Post_20_Load_20_Processing(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Interpreter_2F_Load_20_Bundle(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Interpreter_2F_Create_20_Persistent(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Interpreter_2F_Destroy_20_Persistent(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Interpreter_2F_Set_20_Value(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Interpreter_2F_Get_20_Value(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Interpreter_2F_Get_20_Archive(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Interpreter_2F_Get_20_Value_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Interpreter_2F_Modify_20_Value_20_Use(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Interpreter_2F_Simple_20_Value_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Interpreter_2F_Object_20_To_20_Text(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Interpreter_2F_Create_20_Class(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Interpreter_2F_Destroy_20_Class(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Interpreter_2F_Set_20_Class(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Interpreter_2F_Create_20_Method(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Interpreter_2F_Destroy_20_Method(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Interpreter_2F_Set_20_Method(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Interpreter_2F_Create_20_Case(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Interpreter_2F_Destroy_20_Case(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Interpreter_2F_Create_20_Operation(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Interpreter_2F_Destroy_20_Operation(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Interpreter_2F_Set_20_Operation(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object,V_Object,V_Object,V_Object,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Interpreter_2F_Create_20_Terminal(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Interpreter_2F_Destroy_20_Terminal(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Interpreter_2F_Set_20_Terminal(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Interpreter_2F_Create_20_Root(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Interpreter_2F_Destroy_20_Root(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Interpreter_2F_Set_20_Root(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Interpreter_2F_Order_20_Elements(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Interpreter_2F_Get_20_Operation_20_Arity(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *,V_Object *,V_Object *);
enum opTrigger vpx_method_Interpreter_2F_Create_20_Attribute(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Interpreter_2F_Destroy_20_Attribute(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Interpreter_2F_Rename_20_Element(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Interpreter_2F_Object_20_To_20_Value(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Interpreter_2F_Set_20_Current_20_Operation(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Interpreter_2F_Unarchive_20_Element(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Interpreter_2F_Post_20_Load_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Interpreter_2F_Get_20_Class_20_Instance(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Interpreter_2F_Set_20_Instance_20_Attribute(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Interpreter_2F_Finalize_20_Stack(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Interpreter_2F_Initialize_20_Stack(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_Interpreter_2F_Advance_20_Stack(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *,V_Object *,V_Object *,V_Object *,V_Object *,V_Object *);
enum opTrigger vpx_method_Interpreter_2F_Get_20_Current_20_Operation(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Interpreter_2F_Reset_20_Errors(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Interpreter_2F_Get_20_Errors(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Interpreter_2F_Get_20_Debug_20_Window(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Interpreter_2F_Set_20_Debug_20_Window(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Interpreter_2F_Get_20_IO_20_Value(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Interpreter_2F_Set_20_IO_20_Value(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Interpreter_2F_Previous_20_Case(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *,V_Object *,V_Object *,V_Object *,V_Object *);
enum opTrigger vpx_method_Interpreter_2F_Step_20_Into(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Interpreter_2F_Step_20_Out(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Interpreter_2F_Has_20_Instances_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Interpreter_2F_Get_20_Info(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Interpreter_2F_Update_20_Breakpoints(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Interpreter_2F_Unmark_20_Heap(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Interpreter_2F_Find(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Interpreter_2F_Set_20_Frame_20_Breakpoint(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Interpreter_2F_Bundle_20_Primitives(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Interpreter_2F_Get_20_Watchpoint(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Interpreter_2F_Set_20_Watchpoint(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Interpreter_2F_Clear_20_Watchpoints(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Interpreter_2F_Get_20_Watchpoints(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Interpreter_2F_Mark_20_Instances(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Interpreter_2F_Resources_20_Changed(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Set_20_Instance_20_Task_2F_Perform(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Between_20_Strings(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *,V_Object *,V_Object *);
enum opTrigger vpx_method_C_20_Action_20_To_20_VPL_20_Action(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_C_20_Boolean_20_To_20_VPL_20_Boolean(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_C_20_Control_20_To_20_VPL_20_Control(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_C_20_Mode_20_To_20_VPL_20_Type(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_C_20_String_20_To_20_VPL_20_String(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Frame_20_Text(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Frame_20_To_20_Text(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Mangle_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Parse_20_Frame(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Parse_20_Point(V_Environment, enum boolType *, Nat4,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_Prefix_20_String(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_Sandwich_20_Strings(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *,V_Object *,V_Object *);
enum opTrigger vpx_method_Slice_20_String(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_Trim_20_Whitespace(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Unmangle_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPL_20_Action_20_To_20_C_20_Action(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPL_20_Boolean_20_To_20_C_20_Boolean(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPL_20_Control_20_To_20_C_20_Control(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPL_20_String_20_To_20_C_20_String(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPL_20_Text_20_To_20_C_20_String(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_In_20_Last(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Get_20_Line(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_Unquoted_20_In(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Quote_20_String(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Strip_20_Suffix(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Get_20_Export_20_Mode_20_Extension(V_Environment, enum boolType *, Nat4,V_Object *);
enum opTrigger vpx_method_Get_20_File_20_Type_20_Extension(V_Environment, enum boolType *, Nat4,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_Persistent_20_Data_2F_Full_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Persistent_20_Data_2F_Open(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Persistent_20_Data_2F_Close(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Persistent_20_Data_2F_Set_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Persistent_20_Data_2F_Update_20_Record(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Persistent_20_Data_2F_Handle_20_Item_20_Click(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Persistent_20_Data_2F_Get_20_Direct_20_Value(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Persistent_20_Data_2F_Set_20_Direct_20_Value(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Persistent_20_Data_2F_Update_20_Value(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Persistent_20_Data_2F_Set_20_Value_20_Address(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Persistent_20_Data_2F_Get_20_Value_20_Address(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Persistent_20_Data_2F_Set_20_Value(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Persistent_20_Data_2F_Get_20_Value(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Persistent_20_Data_2F_Set_20_CPX_20_Text(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Persistent_20_Data_2F_Parse_20_CPX_20_Buffer(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object *,V_Object *,V_Object *);
enum opTrigger vpx_method_Primitive_20_Data_2F_Get_20_Project_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Primitive_20_Data_2F_H_20_File_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Primitive_20_Data_2F_Handle_20_Item_20_Click(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Primitive_20_Data_2F_Have_20_Row_20_Values_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_Primitive_20_Data_2F_Can_20_Create_3F_(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Primitive_20_Data_2F_Can_20_Delete_3F_(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Primitive_20_Data_2F_Install_20_Proxy(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Primitive_20_Data_2F_AH_20_Lookup_20_Anchor(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Primitive_20_Data_2F_AH_20_Create_20_Anchor(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Primitives_20_Data_2F_Get_20_Primitives(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Primitives_20_Data_2F_Get_20_Project_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Primitives_20_Data_2F_H_20_File_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Primitives_20_Data_2F_Initialize_20_Item_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Primitives_20_Data_2F_Make_20_Dirty(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Primitives_20_Data_2F_Have_20_Row_20_Values_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_Primitives_20_Data_2F_Install_20_Proxy(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Primitives_20_Data_2F_Get_20_Name_20_Singular(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Primitives_20_Data_2F_Get_20_File(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Primitives_20_Data_2F_Set_20_File(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Primitives_20_Data_2F_Can_20_Create_3F_(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Primitives_20_Data_2F_Create_20_With_20_FSRef(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Primitives_20_Data_2F_Get_20_Load_20_Function_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Primitives_20_Data_2F_Get_20_Library_20_ID(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Primitives_20_Data_2F_Get_20_Link_20_Frameworks(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Primitives_20_Data_2F_Get_20_Link_20_Headers(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Primitives_20_Data_2F_Get_20_Link_20_Is_20_Private_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Primitives_20_Data_2F_Get_20_Compile_20_Requires_20_ObjC_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPL_20_Data_2F_Get_20_Project_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPL_20_Data_2F_Get_20_Section_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPL_20_Data_2F_Get_20_URL(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPL_20_Data_2F_Get_20_Projects(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPL_20_Data_2F_Fast_20_Quit(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Resource_20_File_20_Data_2F_Close(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Resource_20_File_20_Data_2F_Make_20_Dirty(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Resource_20_File_20_Data_2F_Remove_20_Self(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Resource_20_File_20_Data_2F_Copy_20_Original(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Resource_20_File_20_Data_2F_Get_20_Resource_20_FSRef(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Resource_20_File_20_Data_2F_File_20_Delete_20_Resource(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Resource_20_File_20_Data_2F_File_20_Open_20_Resource(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Resource_20_File_20_Data_2F_File_20_Update_20_Resource(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Resource_20_File_20_Data_2F_Handle_20_Item_20_Click(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Resource_20_File_20_Data_2F_Set_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Resource_20_File_20_Data_2F_Have_20_Row_20_Values_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_Resource_20_File_20_Data_2F_Get_20_File(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Resource_20_File_20_Data_2F_Set_20_File(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Resource_20_File_20_Data_2F_Can_20_Create_3F_(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Input_2D_Output_2F_Clone(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Input_2D_Output_2F_Close(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Input_2D_Output_2F_Open(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Input_2D_Output_2F_Get_20_Project_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Input_2D_Output_2F_Get_20_Location(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Input_2D_Output_2F_Delete(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Input_2D_Output_2F_Remove_20_Self(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Input_2D_Output_2F_Can_20_Delete_3F_(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Input_2D_Output_2F_Get_20_Visual_20_Frame(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Root_2F_Compute_20_Shift_20_Offset(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Root_2F_Create_20_Connection(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Root_2F_Find_20_Terminals(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Root_2F_Remove_20_Just_20_Self(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Root_2F_Remove_20_Self(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Root_2F_Open(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Root_2F_Update_20_Record(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Root_2F_Parse_20_CPX_20_Buffer(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object *,V_Object *,V_Object *);
enum opTrigger vpx_method_Root_2F_Buffer_20_Initialization(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Root_2F_Dispose_20_Record(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Root_2F_Can_20_Delete_3F_(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Terminal_2F_C_20_Code_20_Export_20_Connection(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Terminal_2F_Clone(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Terminal_2F_Compute_20_Shift_20_Offset(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Terminal_2F_Create_20_Connection(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Terminal_2F_Remove_20_Just_20_Self(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Terminal_2F_Remove_20_Self(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Terminal_2F_Open(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Terminal_2F_Update_20_Record(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Terminal_2F_Parse_20_CPX_20_Buffer(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object *,V_Object *,V_Object *);
enum opTrigger vpx_method_Terminal_2F_Buffer_20_Initialization(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Terminal_2F_Dispose_20_Record(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Terminal_2F_Can_20_Delete_3F_(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Find_20_Item_20_IconRef(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_List_20_Data_2F_Add_20_Item_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_List_20_Data_2F_Clone(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_List_20_Data_2F_Close(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_List_20_Data_2F_Close_20_Editor(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_List_20_Data_2F_Construct_20_Editor(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_List_20_Data_2F_Get_20_Application(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_List_20_Data_2F_Open(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_List_20_Data_2F_Get_20_Project_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_List_20_Data_2F_Construct_20_Title(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_List_20_Data_2F_Get_20_Editor(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_List_20_Data_2F_Open_20_Editor(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_List_20_Data_2F_Get_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_List_20_Data_2F_Install_20_Element(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_List_20_Data_2F_New_20_Element(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_List_20_Data_2F_Get_20_Editors(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_List_20_Data_2F_Create_20_Editor(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_List_20_Data_2F_Create_20_Editor_20_Event(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_List_20_Data_2F_Get_20_Name_20_Singular(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_List_20_Data_2F_Get_20_Name_20_Plural(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_List_20_Data_2F_Refresh_20_Editors(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_List_20_Data_2F_Stack_20_Open(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_List_20_Data_2F_Get_20_URL(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_List_20_Data_2F_Isolate(V_Environment, enum boolType *, Nat4,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_List_20_Data_2F_Integrate(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_List_20_Data_2F_Add_20_View(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_List_20_Data_2F_Remove_20_View(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_List_20_Data_2F_Refresh_20_Data(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_List_20_Data_2F_Send_20_Refresh(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_List_20_Data_2F_Open_20_Controller(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_List_20_Data_2F_Close_20_Controller(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_List_20_Data_2F_Find_20_Item_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_List_20_Data_2F_Open_20_Editor_20_With_20_Selection(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_List_20_Data_2F_Send_20_Exclusive(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_List_20_Data_2F_Isolate_20_First(V_Environment, enum boolType *, Nat4,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_List_20_Data_2F_Integrate_20_First(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Helper_20_Data_2F_Add_20_To_20_List_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Helper_20_Data_2F_After_20_Import(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Helper_20_Data_2F_Clone(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Helper_20_Data_2F_Close(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Helper_20_Data_2F_Get_20_Container(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Helper_20_Data_2F_Get_20_Grandparent_20_Helper(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Helper_20_Data_2F_Get_20_List_20_Datum(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Helper_20_Data_2F_Get_20_Value(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Helper_20_Data_2F_Initial_20_Where(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Helper_20_Data_2F_Initialize_20_Item_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Helper_20_Data_2F_Integrate(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Helper_20_Data_2F_Isolate(V_Environment, enum boolType *, Nat4,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_Helper_20_Data_2F_Open(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Helper_20_Data_2F_Push_20_Lists_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Helper_20_Data_2F_Remove_20_Self(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Helper_20_Data_2F_Set_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Helper_20_Data_2F_Set_20_Value(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Helper_20_Data_2F_Update_20_List_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Helper_20_Data_2F_Install_20_Names(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Helper_20_Data_2F_Substitute_20_With(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Helper_20_Data_2F_Update_20_Record(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Helper_20_Data_2F_Get_20_Project_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Helper_20_Data_2F_Get_20_Section_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Helper_20_Data_2F_Set_20_Direct_20_Value(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Helper_20_Data_2F_Get_20_Index(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Helper_20_Data_2F_Post_20_Open(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Helper_20_Data_2F_Set_20_Text(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Helper_20_Data_2F_Make_20_Dirty(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Helper_20_Data_2F_Construct_20_Editor(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Helper_20_Data_2F_Construct_20_Title(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Helper_20_Data_2F_Get_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Helper_20_Data_2F_Handle_20_Item_20_Click(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Helper_20_Data_2F_Get_20_File(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Helper_20_Data_2F_Set_20_File(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Helper_20_Data_2F_Update_20_Value(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Helper_20_Data_2F_Save_20_File(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Helper_20_Data_2F_Save_20_File_20_Callback(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Helper_20_Data_2F_Get_20_Method_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Helper_20_Data_2F_Get_20_All_20_Breakpoints(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Helper_20_Data_2F_Send_20_Refresh(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Helper_20_Data_2F_Full_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Helper_20_Data_2F_Select_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Helper_20_Data_2F_Handle_20_Selection_20_Click(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Helper_20_Data_2F_Have_20_Row_20_Values_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_Helper_20_Data_2F_Have_20_Icon_20_Values_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_Helper_20_Data_2F_Install_20_Proxy(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Helper_20_Data_2F_Get_20_Path_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Helper_20_Data_2F_Reveal_20_Path_20_Item(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Helper_20_Data_2F_Open_20_Editor(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Helper_20_Data_2F_Get_20_Find_20_Text(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Helper_20_Data_2F_Set_20_Find_20_Text(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Helper_20_Data_2F_Use_20_Best_20_Frame(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Helper_20_Data_2F_Can_20_Create_3F_(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Helper_20_Data_2F_Can_20_Delete_3F_(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Helper_20_Data_2F_Isolate_20_First(V_Environment, enum boolType *, Nat4,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_Helper_20_Data_2F_Integrate_20_First(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Item_20_Data_2F_Clone(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Item_20_Data_2F_Close(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Item_20_Data_2F_Copy(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Item_20_Data_2F_Delete(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Item_20_Data_2F_Get_20_Application(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Item_20_Data_2F_Get_20_Grandparent_20_Helper(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Item_20_Data_2F_Get_20_List_20_Datum(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Item_20_Data_2F_Install_20_Helper(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Item_20_Data_2F_Integrate(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Item_20_Data_2F_Isolate(V_Environment, enum boolType *, Nat4,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_Item_20_Data_2F_Open(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Item_20_Data_2F_Close_20_Lists(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Item_20_Data_2F_Get_20_Index(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Item_20_Data_2F_Get_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Item_20_Data_2F_Create_20_Item(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Item_20_Data_2F_Stack_20_Open(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Item_20_Data_2F_Stack_20_Opened(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Item_20_Data_2F_Get_20_URL(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Item_20_Data_2F_Add_20_View(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Item_20_Data_2F_Remove_20_View(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Item_20_Data_2F_Refresh_20_Data(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Item_20_Data_2F_Send_20_Remove_20_Self(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Item_20_Data_2F_Send_20_Refresh(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Item_20_Data_2F_Open_20_Controller(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Item_20_Data_2F_Close_20_Controller(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Item_20_Data_2F_Isolate_20_First(V_Environment, enum boolType *, Nat4,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_Item_20_Data_2F_Integrate_20_First(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Item_20_Data_2F_Find_20_Item_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Item_20_Data_2F_Open_20_Editor(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Item_20_Data_2F_Get_20_Path_20_List(V_Environment, enum boolType *, Nat4,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_Item_20_Data_2F_Reveal_20_Path_20_Item(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Item_20_Data_2F_Use_20_Best_20_Frame(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Data_20_Controller_2F_Open(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Data_20_Controller_2F_Close(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Data_20_Controller_2F_Add_20_View(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Data_20_Controller_2F_Remove_20_View(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Data_20_Controller_2F_Find_20_Views_20_In_20_Group(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Data_20_Controller_2F_Send_20_Message(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Data_20_Controller_2F_Send_20_To_20_All(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Data_20_Controller_2F_Send_20_Refresh(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Data_20_Controller_2F_Send_20_Reinstall(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Data_20_Controller_2F_Send_20_Remove_20_Self(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Data_20_Controller_2F_Send_20_Exclusive(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Data_20_Controller_2F_Send_20_States(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Operation_20_Data_2F_Old_20_Initial_20_Where(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Operation_20_Data_2F_Add_20_Root(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Operation_20_Data_2F_Add_20_Terminal(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Operation_20_Data_2F_Add_20_To_20_List_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Operation_20_Data_2F_Buffer_20_Initialization(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Operation_20_Data_2F_C_20_Code_20_Export_20_Action(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Operation_20_Data_2F_C_20_Code_20_Export_20_Breakpoint(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Operation_20_Data_2F_C_20_Code_20_Export_20_Cases(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Operation_20_Data_2F_C_20_Code_20_Export_20_Inject(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Operation_20_Data_2F_C_20_Code_20_Export_20_Input(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Operation_20_Data_2F_C_20_Code_20_Export_20_Insert_20_Roots(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Operation_20_Data_2F_C_20_Code_20_Export_20_Insert_20_Terminals(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Operation_20_Data_2F_C_20_Code_20_Export_20_Output(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Operation_20_Data_2F_C_20_Code_20_Export_20_Repeat(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Operation_20_Data_2F_C_20_Code_20_Export_20_Roots(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Operation_20_Data_2F_C_20_Code_20_Export_20_Super(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Operation_20_Data_2F_C_20_Code_20_Export_20_Terminals(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Operation_20_Data_2F_C_20_Code_20_Export_20_Type(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Operation_20_Data_2F_C_20_Code_20_Export_20_Value(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Operation_20_Data_2F_C_20_Code_20_Footer(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Operation_20_Data_2F_C_20_Code_20_Footer_20_Cases(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Operation_20_Data_2F_C_20_Code_20_Header(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Operation_20_Data_2F_C_20_Code_20_Header_20_Cases(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Operation_20_Data_2F_Clone(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Operation_20_Data_2F_Close(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Operation_20_Data_2F_Construct_20_Editor(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Operation_20_Data_2F_Create_20_Roots(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Operation_20_Data_2F_Create_20_Synchro(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Operation_20_Data_2F_Create_20_Terminals(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Operation_20_Data_2F_Export_20_Text(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Operation_20_Data_2F_Export_20_Local_20_Text(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Operation_20_Data_2F_Get_20_Inarity(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Operation_20_Data_2F_Get_20_Outarity(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Operation_20_Data_2F_Initialize_20_Item_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Operation_20_Data_2F_Insert_20_Root(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Operation_20_Data_2F_Insert_20_Terminal(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Operation_20_Data_2F_Install_20_Root(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Operation_20_Data_2F_Install_20_Terminal(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Operation_20_Data_2F_Open(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Operation_20_Data_2F_Position_20_Root(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Operation_20_Data_2F_Position_20_Terminal(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Operation_20_Data_2F_Remove_20_Root(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Operation_20_Data_2F_Remove_20_Self(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Operation_20_Data_2F_Remove_20_Terminal(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Operation_20_Data_2F_Set_20_Text(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Operation_20_Data_2F_Install_20_Names(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Operation_20_Data_2F_Update_20_Record(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Operation_20_Data_2F_Reorder_20_Inputs(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Operation_20_Data_2F_Reorder_20_Outputs(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Operation_20_Data_2F_Initial_20_What(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Operation_20_Data_2F_Initial_20_Where(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Operation_20_Data_2F_Make_20_Dirty(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Operation_20_Data_2F_Select_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Operation_20_Data_2F_Get_20_Export_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Operation_20_Data_2F_Create_20_Export_20_Name_20_Prefix(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Operation_20_Data_2F_Get_20_Universal(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Operation_20_Data_2F_Get_20_Path_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Operation_20_Data_2F_Get_20_Find_20_Text(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Operation_20_Data_2F_Set_20_Find_20_Text(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Operation_20_Data_2F_Move_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Operation_20_Data_2F_Can_20_Fail_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Operation_20_Data_2F_Use_20_Best_20_Frame(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Operation_20_Data_2F_Use_20_Best_20_IO_20_Frames(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Operation_20_Data_2F_Use_20_Best_20_Controls(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Operation_20_Data_2F_Use_20_Default_20_Controls(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Operation_20_Data_2F_Resize_20_Operation(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Operation_20_Data_2F_Default_20_Operation(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Operation_20_Data_2F_Get_20_Top(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Operation_20_Data_2F_Get_20_Left(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Operation_20_Data_2F_Get_20_Bottom(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Operation_20_Data_2F_Get_20_Right(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Operation_20_Data_2F_Get_20_Baseline(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Operation_20_Data_2F_Move_20_Item(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Operation_20_Data_2F_Set_20_CPX_20_Text(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Operation_20_Data_2F_Parse_20_CPX_20_Buffer(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object *,V_Object *,V_Object *);
enum opTrigger vpx_method_Operation_20_Data_2F_Get_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Operation_20_Data_2F_Can_20_Delete_3F_(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Operation_20_Data_2F_Set_20_Mode(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Operation_20_Data_2F_Get_20_Mode(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Operation_20_Data_2F_Set_20_Breakpoint(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Operation_20_Data_2F_Get_20_Breakpoint(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Operation_20_Data_2F_Change_20_Breakpoint(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Operation_20_Data_2F_Change_20_Mode(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Operation_20_Text_2F_Repeat_20_Limit_20_Export(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Operation_20_Text_2F_Repeat_20_Limit_20_Header(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Operation_20_Text_2F_Repeat_20_Limit_20_Footer(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Operation_20_Text_2F_List_20_Root_20_Export(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Operation_20_Text_2F_List_20_Root_20_Header(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Operation_20_Text_2F_List_20_Root_20_Footer(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Operation_20_Text_2F_Repeat_20_Export(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Operation_20_Text_2F_Repeat_20_Header(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Operation_20_Text_2F_Repeat_20_Footer(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Operation_20_Text_2F_Repeat_20_List_20_Root_20_Footer(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Operation_20_Text_2F_Loop_20_Export(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Operation_20_Text_2F_Loop_20_Header(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Operation_20_Text_2F_Loop_20_Footer(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Operation_20_Text_2F_Control_20_Export(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Operation_20_Text_2F_Operation_20_Export(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Operation_20_Text_2F_Open(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Operation_20_Text_2F_Emit_20_Text(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Operation_20_Text_2F_Make_20_Terminal(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_Operation_20_Text_2F_Create_20_Inject_20_Prefix(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object,V_Object *,V_Object *,V_Object *);
enum opTrigger vpx_method_Operation_20_Text_2F_old_20_Loop_20_Header(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Load_20_Project_20_Templates(V_Environment, enum boolType *, Nat4);
enum opTrigger vpx_method_Find_20_Template_20_ID(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Substitute_20_Template_20_Keys(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_TEST_20_Show_20_Standard_20_Form(V_Environment, enum boolType *, Nat4);
enum opTrigger vpx_method_Project_20_Data_2F_Old_20_Show_20_Errors(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Header(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Primitive_20_Includes(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Section_20_Includes(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Load_20_Project(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Primitives(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Sections(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Footer(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_File_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Project_20_Data_2F_Close(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Text(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Project_20_Data_2F_xExport_20_Text(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Project_20_Data_2F_Get_20_All_20_Universals(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Project_20_Data_2F_Get_20_Classes(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Project_20_Data_2F_Get_20_Persistents(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Project_20_Data_2F_Get_20_Primitives(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Project_20_Data_2F_Get_20_Project_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Project_20_Data_2F_Get_20_Section_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Project_20_Data_2F_Get_20_Universals(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Project_20_Data_2F_Initialize_20_Item_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Project_20_Data_2F_Open(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Project_20_Data_2F_Add_20_Section_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Project_20_Data_2F_Resolve_20_References(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Project_20_Data_2F_Add_20_To_20_List_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Project_20_Data_2F_Set_20_Value(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Project_20_Data_2F_Get_20_Value(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Project_20_Data_2F_Object_20_File_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Project_20_Data_2F_Object_20_File_20_Extension(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Project_20_Data_2F_Object_20_File_20_Type(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Project_20_Data_2F_Import_20_Primitives(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Project_20_Data_2F_Show_20_Errors(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Project_20_Data_2F_Save_20_File(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Project_20_Data_2F_Get_20_Section_20_Items(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Project_20_Data_2F_Add_20_Primitives_20_File(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Project_20_Data_2F_Add_20_Resource_20_File(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Project_20_Data_2F_Get_20_Class_20_Items(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Project_20_Data_2F_Get_20_File(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Project_20_Data_2F_Set_20_File(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Project_20_Data_2F_Find_20_MAIN(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Project_20_Data_2F_Execute_20_MAIN(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Project_20_Data_2F7E_Execute_20_MAIN(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Project_20_Data_2F_Find_20_Methods_20_With_20_Value(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Project_20_Data_2F_Get_20_Method_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Project_20_Data_2F_Get_20_Library_20_Info(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Project_20_Data_2F_Lookup_20_Info(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Project_20_Data_2F_Get_20_All_20_Breakpoints(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Dirty(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Attribute(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Project_20_Data_2F_Get_20_Attributes(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Persistent(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Class(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Project_20_Data_2F_Handle_20_Fault(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Project_20_Data_2F_Get_20_All_20_Attributes(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Project_20_Data_2F_Get_20_Class_20_Attributes(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Project_20_Data_2F_Mark_20_Instances(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Method(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Project_20_Data_2F_Get_20_Application_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Project_20_Data_2F_Set_20_Application_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Project_20_Data_2F_Have_20_Row_20_Values_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_Project_20_Data_2F_Display_20_Message(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Export(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Export_20_Source(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Export_20_Header(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Header_20_Text(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Project_20_Data_2F_H_20_Code_20_Header(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Project_20_Data_2F_H_20_Code_20_Footer(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Project_20_Data_2F_H_20_File_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Project_20_Data_2F_Import_20_CPX(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Project_20_Data_2F_Find_20_Class_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Project_20_Data_2F_Framework_20_Link_20_Headers(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Project_20_Data_2F_Get_20_Key_20_Value(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Project_20_Data_2F_Set_20_Key_20_Value(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Project_20_Data_2F_Load_20_Key_20_Value(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Project_20_Data_2F_Save_20_Key_20_Value(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Project_20_Message_2F_Create(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Project_20_Message_2F_Construct_20_Text(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Project_20_Message_2F_Display(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Project_20_Message_2F_Get_20_Text(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Project_20_Message_2F_Get_20_Answer(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Project_20_Run_20_Task_2F_Perform(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Marten_20_Project_20_Template_2F_Substitute_20_Keys(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Marten_20_Project_20_Template_2F_Read_20_Form_20_For_20_Key(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Marten_20_Project_20_Template_2F_Create_20_From_20_CFURL(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Marten_20_Project_20_Template_2F_Load_20_Info(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Marten_20_Project_20_Template_2F_Get_20_Bundle(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Marten_20_Project_20_Template_2F_Set_20_Bundle(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Marten_20_Project_20_Template_2F_Get_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Marten_20_Project_20_Template_2F_Set_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Marten_20_Project_20_Template_2F_Get_20_Description(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Marten_20_Project_20_Template_2F_Set_20_Description(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Marten_20_Project_20_Template_2F_Get_20_ID(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Marten_20_Project_20_Template_2F_Set_20_ID(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Find_20_Project_20_Storage(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Get_20_Project_20_Setting(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Set_20_Project_20_Setting(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Remove_20_Project_20_Setting(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Add_20_Project(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Add_20_Project_20_Parameter_20_Keys(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Remove_20_Project(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Get_20_Known_20_Projects(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Set_20_Known_20_Projects(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Load_20_Project_20_Setting(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Save_20_Project_20_Setting(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Read_20_Project_20_Parameter_20_Keys(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Parse_20_CPX_20_Object(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object *,V_Object *,V_Object *,V_Object *);
enum opTrigger vpx_method_Parse_20_Object(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *,V_Object *,V_Object *,V_Object *);
enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Export_20_Classes(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Export_20_Universals(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Header(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Load_20_Classes(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Load_20_Persistents(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Load_20_Universals(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Load_20_All(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Export(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Export_20_Source(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Export_20_Header(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Section_20_Data_2F_C_20_File_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Section_20_Data_2F_Export_20_Text(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Section_20_Data_2F_Full_20_Universal_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Section_20_Data_2F_Get_20_Attributes(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Section_20_Data_2F_Get_20_Class_20_Attributes(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Section_20_Data_2F_Get_20_Classes(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Section_20_Data_2F_Get_20_Methods(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Section_20_Data_2F_Get_20_Persistents(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Section_20_Data_2F_Get_20_Universals(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Section_20_Data_2F_Initialize_20_Item_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Section_20_Data_2F_Parse_20_Line(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Section_20_Data_2F_Remove_20_Self(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Section_20_Data_2F_Update_20_Value(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Section_20_Data_2F_Parse_20_CPX_20_Buffer(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object *,V_Object *,V_Object *);
enum opTrigger vpx_method_Section_20_Data_2F_Set_20_Value(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Section_20_Data_2F_Get_20_Value(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Section_20_Data_2F_Get_20_Section_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Section_20_Data_2F_Set_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Section_20_Data_2F_Make_20_Dirty(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Section_20_Data_2F_Make_20_Section_20_Dirty(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Section_20_Data_2F_Object_20_File_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Section_20_Data_2F_Object_20_File_20_Extension(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Section_20_Data_2F_Object_20_File_20_Type(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Section_20_Data_2F_Set_20_File(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Section_20_Data_2F_Get_20_File(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Section_20_Data_2F_Get_20_All_20_Breakpoints(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Section_20_Data_2F_Isolate(V_Environment, enum boolType *, Nat4,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_Section_20_Data_2F_Integrate(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Section_20_Data_2F_Have_20_Row_20_Values_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_Section_20_Data_2F_Can_20_Delete_3F_(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Universal_20_Data_2F_C_20_Code_20_Export_20_Cases(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Universal_20_Data_2F_C_20_Code_20_Footer(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Universal_20_Data_2F_C_20_Code_20_Header(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Universal_20_Data_2F_Create_20_Roots(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Universal_20_Data_2F_Create_20_Terminals(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Universal_20_Data_2F_Export_20_Text(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Universal_20_Data_2F_Full_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Universal_20_Data_2F_Get_20_Inarity(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Universal_20_Data_2F_Get_20_Outarity(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Universal_20_Data_2F_Get_20_Project_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Universal_20_Data_2F_Initialize_20_Item_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Universal_20_Data_2F_Install_20_Names(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Universal_20_Data_2F_Open(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Universal_20_Data_2F_Close(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Universal_20_Data_2F_Push_20_Lists_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Universal_20_Data_2F_Execute(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Universal_20_Data_2F_Buffer_20_Initialization(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Universal_20_Data_2F_Get_20_Value(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Universal_20_Data_2F_C_20_Code_20_Value(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Universal_20_Data_2F_Update_20_Record(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Universal_20_Data_2F_Post_20_Open(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Universal_20_Data_2F_Get_20_Method_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Universal_20_Data_2F_Get_20_All_20_Breakpoints(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Universal_20_Data_2F_Have_20_Row_20_Values_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_Universal_20_Data_2F_Get_20_Export_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Universal_20_Data_2F_Get_20_Universal(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Value(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Arity(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Universal_20_Data_2F_Can_20_Fail_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_CPX_20_Text(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Universal_20_Data_2F_Parse_20_CPX_20_Buffer(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object *,V_Object *,V_Object *);
enum opTrigger vpx_method_Universal_20_Data_2F_Remove_20_Self(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Find_20_Instance(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_Lists_20_To_20_List(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Pascal_20_To_20_String(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_String_20_To_20_Pascal(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Carriage_20_Return(V_Environment, enum boolType *, Nat4,V_Object *);
enum opTrigger vpx_method_Unix_20_Tab(V_Environment, enum boolType *, Nat4,V_Object *);
enum opTrigger vpx_method_List_20_Average(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Unix_20_Carriage_20_Return(V_Environment, enum boolType *, Nat4,V_Object *);
enum opTrigger vpx_method_TEST_20_Read_20_Project(V_Environment, enum boolType *, Nat4);
enum opTrigger vpx_method_Nav_20_Read_20_Project_20_Callback(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Get_20_VPL_20_Data(V_Environment, enum boolType *, Nat4,V_Object *);
enum opTrigger vpx_method_Get_20_Viewer_20_Windows(V_Environment, enum boolType *, Nat4,V_Object *);
enum opTrigger vpx_method_Get_20_Tool_20_Set(V_Environment, enum boolType *, Nat4,V_Object *);
enum opTrigger vpx_method_Get_20_Stack_20_Service(V_Environment, enum boolType *, Nat4,V_Object *);
enum opTrigger vpx_method_Find_20_Instance_20_Values(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Unique_20_Name_20_For_20_String(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Put_20_URLs_20_On_20_Scrap(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Put_20_TEXT_20_On_20_Scrap(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Formalize_20_Data_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_Duplicate_20_Data_20_Name_20_Error(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Do_20_User_20_Notice(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Tool_20_Tracker_2F_Find_20_Tools(V_Environment, enum boolType *, Nat4,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_Tool_20_Tracker_2F_Make_20_Dirty(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Tool_20_Tracker_2F_Update_20_Menu(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Tool_20_Tracker_2F_Close(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Tool_20_Tracker_2F_Open(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Tool_20_Tracker_2F_Can_20_Do_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Tool_20_Tracker_2F_Run_20_Tool_20_Number(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Tool_20_Tracker_2F_Run_20_Tool_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Stack_20_UI_20_Service_2F_Update_20_Menu(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Stack_20_UI_20_Service_2F_Add_20_Stack(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Stack_20_UI_20_Service_2F_Remove_20_Stack(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Stack_20_UI_20_Service_2F_Select_20_Stack_20_Number(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Stack_20_UI_20_Service_2F_Post_20_Menu_20_Update(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Stack_20_Data_2F_Open(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Stack_20_Data_2F_Close(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Stack_20_Data_2F_Open_20_Editor(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Stack_20_Data_2F_Construct_20_Editor(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Stack_20_Data_2F_Get_20_Editor(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Stack_20_Data_2F_Close_20_Editor(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Stack_20_Data_2F_Construct_20_Title(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Stack_20_Data_2F_Send_20_Refresh(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Stack_20_Data_2F_Has_20_Case_20_Stack_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Stack_20_Data_2F_Add_20_View(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Stack_20_Data_2F_Remove_20_View(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Stack_20_Data_2F_Post_20_Close_20_UI(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Stack_20_Data_2F_Close_20_UI(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Stack_20_Data_2F_Continue(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPLProject_20_AppName_20_Sheet_2F_Open(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLProject_20_AppName_20_Sheet_2F_Open_20_Controls(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPLProject_20_AppName_20_Sheet_2F_Find_20_Name_20_Text(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLProject_20_AppName_20_Sheet_2F_Get_20_Project_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLProject_20_AppName_20_Sheet_2F_Get_20_Application_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLProject_20_AppName_20_Sheet_2F_Set_20_Application_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLProject_20_AppName_20_Sheet_2F_CE_20_HICommand_20_Process(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_VPLProject_20_AppName_20_Sheet_2F_HIC_20_OK(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPLProject_20_AppName_20_Sheet_2F_HIC_20_Cancel(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPLProject_20_AppName_20_Sheet_2F_Close(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPLProject_20_AppName_20_Sheet_2F_Get_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLProject_20_AppName_20_Sheet_2F_HIC_20_Save_20_As(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Text_20_To_20_Object(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Object_20_To_20_Instance(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Get_20_Instances(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Instance_20_To_20_Object(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Object_20_To_20_Text(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Instance_20_Value_20_Data_2F_Class_20_To_20_Instance(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Instance_20_Value_20_Data_2F_Register_20_With_20_Class(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Instance_20_Value_20_Data_2F_Unregister_20_With_20_Class(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Instance_20_Value_20_Data_2F_Update_20_Owner(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Instance_20_Value_20_Data_2F_Set_20_Text(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Attribute_20_Value_20_Data_2F_Install_20_Value(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Attribute_20_Value_20_Data_2F_Get_20_Value(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Attribute_20_Value_20_Data_2F_Set_20_Value(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Attribute_20_Value_20_Data_2F_Construct_20_Editor(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Attribute_20_Value_20_Data_2F_Get_20_Project_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Attribute_20_Value_20_Data_2F_Handle_20_Item_20_Click(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Attribute_20_Value_20_Data_2F_Get_20_Path_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Attribute_20_Value_20_Data_2F_Can_20_Create_3F_(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_List_20_Value_20_Data_2F_Update_20_List_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_List_20_Value_20_Data_2F_Update_20_Names(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_List_20_Value_20_Data_2F_Install_20_Value(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Get_20_Port(V_Environment, enum boolType *, Nat4,V_Object *);
enum opTrigger vpx_method_Set_20_Port(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Set_20_Target(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Get_20_Target(V_Environment, enum boolType *, Nat4,V_Object *);
enum opTrigger vpx_method_Clear_20_Target(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Change_20_Target(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLCEWindow_2F_Open(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLCEWindow_2F_Open_20_With_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLCEWindow_2F_Create_20_Window(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPLCEWindow_2F_Get_20_Creation_20_Attributes(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLCEWindow_2F_Open_20_Controls(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPLCEWindow_2F_Draw(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLCEWindow_2F_Idle(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLCEWindow_2F_Initialize(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPLCEWindow_2F_Constrain_20_Window(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPLCEWindow_2F_Get_20_Frame(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLCEWindow_2F_Set_20_Frame(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLCEWindow_2F_Change_20_Frame(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLCEWindow_2F_Get_20_Port_20_Bounds(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLCEWindow_2F_Refresh(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPLCEWindow_2F_Set_20_Target(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_VPLCEWindow_2F_Is_20_Front_20_Window(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLCEWindow_2F_Set_20_Port(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPLCEWindow_2F_Get_20_Port(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLCEWindow_2F_Select_20_Window(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPLCEWindow_2F_Mouse_20_Down(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLCEWindow_2F_Key_20_Down(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLCEWindow_2F_Hilite(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLCEWindow_2F_Get_20_Window_20_Origin(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLCEWindow_2F_Get_20_Window(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLCEWindow_2F_Get_20_Application(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLCEWindow_2F_Close(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPLCEWindow_2F_Set_20_Up_20_Drawing(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPLCEWindow_2F_Setup_20_Drawing_20_CG(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLCEWindow_2F_Sync_20_CGContext_20_Origin(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLCEWindow_2F_Click_20_Content(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_VPLCEWindow_2F_CE_20_Handle_20_Event(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_VPLCEWindow_2F_CE_20_Mouse_20_Event(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_VPLCEWindow_2F_CE_20_Mouse_20_Moved(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_VPLCEWindow_2F_CE_20_Mouse_20_Wheel_20_Moved(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_VPLCEWindow_2F_CE_20_Keyboard_20_Event(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_VPLCEWindow_2F_CE_20_Raw_20_Key_20_Down(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_VPLCEWindow_2F_CE_20_Raw_20_Key_20_Repeat(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_VPLCEWindow_2F_CE_20_Raw_20_Key_20_Modifiers_20_Changed(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_VPLCEWindow_2F_Adjust_20_Frame(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPLCEWindow_2F_Activate(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLCEWindow_2F_Activated(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPLCEWindow_2F_Deactivated(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPLCEWindow_2F_Set_20_Title(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLCEWindow_2F_Begin_20_CGContext(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLCEWindow_2F_End_20_CGContext(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLCEWindow_2F_Get_20_Size(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLCEWindow_2F_CE_20_Window_20_Drag_20_Completed(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_VPLCEWindow_2F_CE_20_Window_20_Resize_20_Completed(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_VPLCEWindow_2F_Resized(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPLCEWindow_2F_Show_20_Drag_20_Hilite(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPLCEWindow_2F_Hide_20_Drag_20_Hilite(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPLCEWindow_2F_Close_20_Pasteboard_20_Handler(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPLCEWindow_2F_Open_20_Pasteboard_20_Handler(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPLCEWindow_2F_Accept_20_Flavors(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_VPLCEWindow_2F_Get_20_Window_20_Pasteboard_20_Handler(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLCEWindow_2F_Set_20_Window_20_Pasteboard_20_Handler(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLCEWindow_2F_Get_20_Window_20_Printing_20_Handler(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLCEWindow_2F_Set_20_Window_20_Printing_20_Handler(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLCEWindow_2F_Close_20_Printing_20_Handler(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPLCEWindow_2F_Open_20_Printing_20_Handler(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPLEvent_2F_Get_20_Active_20_Flag(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLEvent_2F_Get_20_Command_20_Key(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLEvent_2F_Get_20_Control_20_Key(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLEvent_2F_Get_20_Local_20_Where(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLEvent_2F_Get_20_Option_20_Key(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLEvent_2F_Get_20_Shift_20_Key(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLEvent_2F_Get_20_Key(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLEvent_2F_Convert_20_Mouse_20_EventRef(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLEvent_2F_Convert_20_Key_20_EventRef(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLEvent_2F_Get_20_Local_20_WhereQD(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLEvent_2F_Get_20_WhereQD(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLEvent_2F_Get_20_Contextual_20_Menu_20_Event_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLWindow_20_Item_2F_Old_20_Redraw(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLWindow_20_Item_2F_Activate(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLWindow_20_Item_2F_Adjust_20_Origin(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLWindow_20_Item_2F_Clean_20_Up_20_Context(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPLWindow_20_Item_2F_Close(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPLWindow_20_Item_2F_Draw(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLWindow_20_Item_2F_Enter(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPLWindow_20_Item_2F_Exit(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLWindow_20_Item_2F_Get_20_Application(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLWindow_20_Item_2F_Get_20_Size(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLWindow_20_Item_2F_Get_20_Window(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLWindow_20_Item_2F_Hilite(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLWindow_20_Item_2F_Idle(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLWindow_20_Item_2F_Key_20_Down(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLWindow_20_Item_2F_Mouse_20_Down(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLWindow_20_Item_2F_Open(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLWindow_20_Item_2F_Prepare_20_Context(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLWindow_20_Item_2F_Process_20_Click(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLWindow_20_Item_2F_Process_20_Key(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLWindow_20_Item_2F_Set_20_Frame(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLWindow_20_Item_2F_Set_20_Location(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLWindow_20_Item_2F_Set_20_Selected(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLWindow_20_Item_2F_Set_20_Up_20_Drawing(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPLWindow_20_Item_2F_Set_20_Value(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLWindow_20_Item_2F_Target(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLWindow_20_Item_2F_Was_20_Hit(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_VPLWindow_20_Item_2F_Redraw(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLWindow_20_Item_2F_Draw_20_CG(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_VPLWindow_20_Item_2F_Setup_20_Drawing_20_CG(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLWindow_20_Item_2F_Get_20_Location(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLWindow_20_Item_2F_Target_20_Self(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPLWindow_20_Item_2F_Set_20_Size(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLWindow_20_Item_2F_Resize(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLWindow_20_Item_2F_Get_20_Frame(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLWindow_20_Item_2F_Get_20_Frame_20_In_20_Window(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLWindow_20_Item_2F_Reset_20_Cache(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPLWindow_20_Item_2F_Set_20_Selected_20_Colors(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPLWindow_20_Item_2F_Draw_20_Event_20_CG(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_VPLWindow_20_Item_2F_Needs_20_Draw_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLWindow_20_Item_2F_Get_20_Visible_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLWindow_20_Item_2F_Set_20_Visible_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLWindow_20_Item_2F_Find_20_CTM_20_Item(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_VPLWindow_20_Item_2F_Is_20_CTM_20_Item_3F_(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPLWindow_20_Item_2F_Was_20_Content_20_Hit_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_VPLWindow_20_Item_2F_Change_20_Frame(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLWindow_20_Item_2F_Move_20_Item(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLView_2F_Old_20_Draw(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLView_2F_Old_20_Move_20_Origin_20_V(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLView_2F_Old_20_Set_20_Canvas_20_Limits(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLView_2F_Adjust_20_Origin(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLView_2F_After_20_Drawing(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPLView_2F_Before_20_Drawing(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPLView_2F_Close(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPLView_2F_Find_20_Item(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_VPLView_2F_Get_20_Content(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLView_2F_Get_20_Location(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLView_2F_Get_20_Window_20_Origin(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLView_2F_Hilite(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLView_2F_Mouse_20_Down(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLView_2F_Open(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLView_2F_Resize(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLView_2F_Scroll_20_V(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLView_2F_Select_20_Item(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLView_2F_Set_20_Content(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLView_2F_Set_20_Frame(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLView_2F_Set_20_Location(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLView_2F_Set_20_Select_20_List(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLView_2F_Set_20_Selected(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLView_2F_Set_20_Up_20_Drawing(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPLView_2F_Set_20_Viewport_20_Origin(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLView_2F_Set_20_Window_20_Origin(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLView_2F_Update_20_Canvas_20_Limits(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLView_2F_View_20_Size(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLView_2F_Draw(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLView_2F_Move_20_Origin_20_V(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLView_2F_View_20_Rect(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLView_2F_Erase_20_View(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPLView_2F_Set_20_Canvas_20_Limits(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLView_2F_Find_20_Item_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_VPLView_2F_Erase_20_View_20_CG(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLView_2F_Before_20_Drawing_20_CG(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLView_2F_Setup_20_Drawing_20_CG(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLView_2F_After_20_Drawing_20_CG(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLView_2F_Draw_20_CG(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_VPLView_2F_Get_20_Select_20_List(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLView_2F_Update_20_Select_20_List(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_VPLView_2F_Update_20_Select_20_Item(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_VPLView_2F_Redraw_20_Items_20_CG(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_VPLView_2F_Target_20_Self(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPLView_2F_Get_20_Frame_20_In_20_Windowxx(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLView_2F_Reset_20_Cache(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPLView_2F_Draw_20_Content_20_CG(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_VPLView_2F_Find_20_CTM_20_Item(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_VPLView_2F_Move_20_Origin_20_In_20_Limits(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPLControl_2F_Close(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPLControl_2F_Draw(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLControl_2F_Get_20_Value(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLControl_2F_Hilite_20_Control(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLControl_2F_Move_20_Control(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLControl_2F_Open(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLControl_2F_Process_20_Click(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLControl_2F_Set_20_Frame(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLControl_2F_Set_20_Maximum(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLControl_2F_Set_20_Minimum(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLControl_2F_Set_20_Title(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLControl_2F_Set_20_Value(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLControl_2F_Size_20_Control(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLControl_2F_Track_20_Control(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_VPLControl_2F_Get_20_ControlRef(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLControl_2F_Click_20_Control_20_Part(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLControl_2F_Do_20_Click_20_Method(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPLScroll_20_Bar_2F_Install_20_Action_20_Proc(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPLScroll_20_Bar_2F_Remove_20_Action_20_Proc(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPLScroll_20_Bar_2F_Open(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLScroll_20_Bar_2F_Close(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPLScroll_20_Bar_2F_Do_20_Live_20_Action(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLScroll_20_Bar_2F_Track_20_Control(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_VPLEdit_20_Text_2F_Activate(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLEdit_20_Text_2F_Close(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPLEdit_20_Text_2F_Draw(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLEdit_20_Text_2F_Enter(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPLEdit_20_Text_2F_OLD_20_Enter(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPLEdit_20_Text_2F_Exit(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLEdit_20_Text_2F_Get_20_Text(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLEdit_20_Text_2F_Hilite(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLEdit_20_Text_2F_Idle(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLEdit_20_Text_2F_Open(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLEdit_20_Text_2F_Process_20_Click(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLEdit_20_Text_2F_Process_20_Key(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLEdit_20_Text_2F_Set_20_Text(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLEdit_20_Text_2F_Set_20_Value(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLEdit_20_Text_2F_Select_20_All(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPLEdit_20_Text_2F_Draw_20_CG(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_VPLEdit_20_Text_2F_Key_20_Down(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLEdit_20_Text_2F_Set_20_Up_20_Drawing(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPLEdit_20_Text_2F_Was_20_Content_20_Hit_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_VPLEdit_20_Text_2F_Measure_20_Text(V_Environment, enum boolType *, Nat4,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_VPLEdit_20_Text_2F_Set_20_Frame(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLEdit_20_Text_2F_Create_20_HIThemeTextInfo(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLEntry_20_Text_2F_Process_20_Key(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLText_20_Editor_2F_Old_20_Open(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLText_20_Editor_2F_Activate(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLText_20_Editor_2F_Close(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPLText_20_Editor_2F_Draw(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLText_20_Editor_2F_Get_20_Application(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLText_20_Editor_2F_Get_20_Text(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLText_20_Editor_2F_Idle(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLText_20_Editor_2F_Key_20_Down(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLText_20_Editor_2F_Process_20_Click(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLText_20_Editor_2F_Set_20_Text(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLText_20_Editor_2F_Open(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLText_20_Editor_2F_Set_20_Selection(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_VPLHIText_20_Editor_2F_Activate(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLHIText_20_Editor_2F_Close(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPLHIText_20_Editor_2F_Draw(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLHIText_20_Editor_2F_Get_20_Application(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLHIText_20_Editor_2F_Get_20_Text(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLHIText_20_Editor_2F_Set_20_Text(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLHIText_20_Editor_2F_Idle(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLHIText_20_Editor_2F_Key_20_Down(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLHIText_20_Editor_2F_Process_20_Click(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLHIText_20_Editor_2F_Set_20_Selection(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_VPLHIText_20_Editor_2F_Get_20_TXNObject(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLHIText_20_Editor_2F_Open(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLHIText_20_Editor_2F_Draw_20_CG(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLHIText_20_Editor_2F_Set_20_Frame(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLHIText_20_Item_20_Editor_2F_CE_20_Handle_20_Event(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_VPLHIText_20_Item_20_Editor_2F_CE_20_Text_20_Input_20_Event(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_VPLHIText_20_Item_20_Editor_2F_CE_20_Unicode_20_For_20_Key(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_VPLHIText_20_Item_20_Editor_2F_Open(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLHIText_20_Item_20_Editor_2F_Close(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPLHIText_20_Item_20_Editor_2F_Initialize_20_Control_20_Events(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPLHIText_20_Item_20_Editor_2F_Destruct_20_Control_20_Events(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPLHIText_20_Item_20_Editor_2F_Get_20_Carbon_20_EventTargetRef(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLHICombo_20_Box_20_Editor_2F_Open_20_Control(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLHICombo_20_Box_20_Editor_2F_Open(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLHICombo_20_Box_20_Editor_2F_Get_20_List_20_ArrayRef(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLHICombo_20_Box_20_Editor_2F_Get_20_List_20_Array(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLHICombo_20_Box_20_Editor_2F_Set_20_List_20_Array(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLHICombo_20_Box_20_Editor_2F_Get_20_TXNObject(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Add_20_Point(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Debug(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Ints_20_To_20_Rect(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Point_20_In_20_Rect(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Rect_20_To_20_Ints(V_Environment, enum boolType *, Nat4,V_Object,V_Object *,V_Object *,V_Object *,V_Object *);
enum opTrigger vpx_method_Subtract_20_Point(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Rectangle_20_Center(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Offset_20_Rectangle(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Get_20_Item_20_RGBA(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Inset_20_Rectangle(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Rectangle_20_Size(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Get_20_Theme_20_Brush_20_RGBA(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Grow_20_Rectangle(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Rectangle_20_Global_20_To_20_Local(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Rectangle_20_Local_20_To_20_Global(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLFramedRegion_2F_Close(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPLFramedRegion_2F_Draw(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLFramedRegion_2F_Frame_20_To_20_Corners(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_VPLFramedRegion_2F_Open(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLFramedRegion_2F_Add_20_Frame_20_To_20_Path(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLFramedRegion_2F_Draw_20_CG(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLFramedRegion_2F_Frame_20_To_20_Repeat_20_Corners(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_VPLGraphic_2F_Close(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPLGraphic_2F_Draw(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLGraphic_2F_Draw_20_CG(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLGraphic_2F_Get_20_Application(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLGraphic_2F_Open(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLGraphic_2F_Set_20_Value(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLGraphic_2F_Get_20_Erase_20_Color(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLGraphic_2F_Get_20_Parent_20_Frame(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLLine_2F_Draw(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLLine_2F_Draw_20_CG(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLOval_2F_Draw(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLOval_2F_Draw_20_CG(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLRectangle_2F_Draw(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLRectangle_2F_Draw_20_CG(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLRoundRectangle_2F_Draw(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLRoundRectangle_2F_Draw_20_CG(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLRoundRectangle_2F_Draw_20_Oper_20_Frame_20_CG(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_VPLRoundRectangle_2F_Draw_20_Oper_20_Inset_20_CG(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_VPLRoundRectangle_2F_Draw_20_Oper_20_Fill_20_CG(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_VPLRoundRectangle_2F_Draw_20_Oper_20_Erase_20_CG(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_VPLRoundRectangle_2F_Draw_20_Success_20_CG(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLRoundRectangle_2F_Draw_20_Failure_20_CG(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLRoundRectangle_2F_Draw_20_Control_20_CG(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_VPLRoundRectangle_2F_Draw_20_Control_20_Fail_20_CG(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_VPLRoundRectangle_2F_Draw_20_Control_20_Term_20_CG(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLRoundRectangle_2F_Draw_20_Control_20_Fin_20_CG(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLRoundRectangle_2F_Draw_20_Control_20_Cnt_20_CG(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLText_2F_Draw(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLText_2F_Set_20_Value(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLGraphic_20_Item_2F_Close(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPLGraphic_20_Item_2F_Draw(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLGraphic_20_Item_2F_Open(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLGraphic_20_Item_2F_Process_20_Click(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLGraphic_20_Item_2F_Set_20_Value(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLGraphic_20_Item_2F_Draw_20_CG(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_VPLGraphic_20_Item_2F_Set_20_Location(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLGraphic_20_Item_2F_Reset_20_Cache(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPLGraphic_20_Item_2F_Get_20_QDFrame(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLGraphic_20_Item_2F_Set_20_Selected_20_Colors(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPLGraphic_20_Item_2F_Get_20_Color_20_Names(V_Environment, enum boolType *, Nat4,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_VPLGraphic_20_Item_2F_Get_20_Erase_20_Color(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Item_20_Edit_20_Text_2F_Exit(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Item_20_Edit_20_Text_2F_Process_20_Key(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Item_20_Edit_20_Text_2F_Process_20_Click(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Item_20_Edit_20_Text_2F_Draw_20_CG(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Item_20_Edit_20_Text_2F_Enter(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Item_20_Edit_20_Text_2F_Set_20_Value(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Item_20_Edit_20_Text_2F_Measure_20_Text(V_Environment, enum boolType *, Nat4,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_List_20_Item_2F_Old_20_Process_20_Click(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_List_20_Item_2F_Extract_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_List_20_Item_2F_Initialize(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_List_20_Item_2F_Install_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_List_20_Item_2F_Move_20_Item(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_List_20_Item_2F_Set_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_List_20_Item_2F_Set_20_Value(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_List_20_Item_2F_Install_20_Value(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_List_20_Item_2F_Close_20_Value(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_List_20_Item_2F_Process_20_Click(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_List_20_Item_2F_Dispatch_20_Click(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_List_20_Item_2F_Close(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_List_20_Item_2F_In_20_Message_20_Group_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_List_20_Item_2F_Data_20_Message(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_List_20_Item_2F_Send_20_Refresh(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_List_20_Item_2F_Reinstall_20_Data(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_List_20_Item_2F_Drag_20_Item(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_List_20_Item_2F_Resize(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_List_20_Item_2F_Erase_20_View_20_CG(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_List_20_Item_2F_Show_20_CTM(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_List_20_Item_2F_Get_20_Value(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_List_20_Item_2F_Hilite(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_List_20_Item_2F_Key_20_Down(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_List_20_Item_2F_Target_20_Text(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_List_20_Item_2F_Target_20_Value(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_List_20_Item_2F_Target_20_Deferred(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_List_20_Item_2F_Is_20_CTM_20_Item_3F_(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_List_20_Item_2F_Was_20_Content_20_Hit_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_List_20_View_2F_Before_20_Drawing(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_List_20_View_2F_Command_20_Key(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_List_20_View_2F_Dispatch_20_Click(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_List_20_View_2F_Process_20_Click(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_List_20_View_2F_Process_20_Key(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_List_20_View_2F_Cut(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_List_20_View_2F_Copy(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_List_20_View_2F_Paste(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_List_20_View_2F_Delete(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_List_20_View_2F_Duplicate(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_List_20_View_2F_Select_20_All(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_List_20_View_2F_Open(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_List_20_View_2F_Set_20_Select_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_List_20_View_2F_Get_20_Select_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_List_20_View_2F_Toggle_20_Select_20_List(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_List_20_View_2F_Find_20_Content_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_List_20_View_2F_Marquee_20_Select(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_List_20_View_2F_Target_20_Self(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_List_20_View_2F_Align_20_Content(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_List_20_View_2F_Show_20_CTM(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_List_20_View_2F_Select_20_CTM(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_List_20_View_2F_Get_20_Current_20_Values(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_List_20_View_2F_Get_20_CTM_20_Values(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_List_20_View_2F_Erase_20_View_20_CG(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_List_20_View_2F_Advance_20_Focus(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_List_20_View_2F_Erase_20_Row_20_CG(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_List_20_View_2F_Redraw_20_Items_20_CG(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_List_20_View_2F_New_20_Element(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_List_20_View_2F_Target_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_List_20_View_2F_Populate_20_CTM(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_List_20_View_2F_Delete_20_Items(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_List_20_View_2F_Drag_20_Items(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_List_20_Window_2F_Close(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_List_20_Window_2F_Extract_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_List_20_Window_2F_Refresh_20_Data(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_List_20_Window_2F_Reinstall_20_Data(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_List_20_Window_2F_Update_20_Data(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_List_20_Window_2F_Install_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_List_20_Window_2F_Change_20_Frame(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_List_20_Window_2F_Get_20_Select_20_Values(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_List_20_Window_2F_Update_20_Frame(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_List_20_Window_2F_Get_20_Project_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_List_20_Window_2F_Get_20_Section_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_List_20_Window_2F_Get_20_Method_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_List_20_Window_2F_Get_20_Save_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_List_20_Window_2F_CE_20_HICommand_20_Update_20_Status(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_List_20_Window_2F_CE_20_HICommand_20_Process(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_List_20_Window_2F_CE_20_Mouse_20_Wheel_20_Moved(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_List_20_Window_2F_CE_20_Raw_20_Key_20_Modifiers_20_Changed(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_List_20_Window_2F_HIC_20_Edit_20_Clear(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_List_20_Window_2F_HIC_20_Edit_20_Cut(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_List_20_Window_2F_HIC_20_Edit_20_Copy(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_List_20_Window_2F_HIC_20_Edit_20_Paste(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_List_20_Window_2F_HIC_20_Edit_20_Duplicate(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_List_20_Window_2F_HIC_20_Edit_20_Select_20_All(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_List_20_Window_2F_HIC_20_Edit_20_Paste_20_Value(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_List_20_Window_2F_HIC_20_Edit_20_Copy_20_Value(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_List_20_Window_2F_HIC_20_Edit_20_Move_20_To(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_List_20_Window_2F_HIC_20_Edit_20_Propagate_20_Attribute(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_List_20_Window_2F_HIC_20_File_20_Export(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_List_20_Window_2F_HIC_20_File_20_Save(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_List_20_Window_2F_HIC_20_File_20_Save_20_As(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_List_20_Window_2F_HIC_20_File_20_Revert(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_List_20_Window_2F_HIC_20_Show_20_Breakpoints(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_List_20_Window_2F_HIC_20_Clear_20_Breakpoints(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_List_20_Window_2F_Refresh_20_Selection(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_List_20_Window_2F_Set_20_Select_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_List_20_Window_2F_In_20_Message_20_Group_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_List_20_Window_2F_Data_20_Message(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_List_20_Window_2F_Send_20_Refresh(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_List_20_Window_2F_Show(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_List_20_Window_2F_Select_20_Item(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_List_20_Window_2F_Install_20_Proxy(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_List_20_Window_2F_Uninstall_20_Data(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_List_20_Window_2F_Close_20_All(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_List_20_Window_2F_HIC_20_Status_20_File_20_New_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_List_20_Window_2F_HIC_20_File_20_New(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_List_20_Window_2F_HIC_20_Edit_20_Reveal_20_Parent(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_List_20_Window_2F_HIC_20_Edit_20_Reveal_20_Container(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_List_20_Window_2F_Accept_20_Flavors(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_List_20_Window_2F_Show_20_Drag_20_Hilite(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_List_20_Window_2F_CE_20_Window_20_Event(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_List_20_Window_2F_CE_20_Path_20_Select(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_List_20_Window_2F_Get_20_Path_20_List(V_Environment, enum boolType *, Nat4,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_List_20_Window_2F_HIC_20_Edit_20_Reveal_20_Path(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_List_20_Window_2F_CE_20_Window_20_Bounds_20_Changing(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_List_20_Window_2F_Resizing(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_List_20_Window_2F_Moving(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Name_20_Edit_20_Text_2F_Exit(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Name_20_Edit_20_Text_2F_Process_20_Key(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Value_20_Edit_20_Text_2F_Exit(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Value_20_Edit_20_Text_2F_Process_20_Key(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Default_20_List_20_Graphic_2F_Add_20_Frame_20_To_20_Path(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Default_20_List_20_Graphic_2F_Get_20_Frame(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Default_20_List_20_Graphic_2F_Frame_20_To_20_Corners(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Default_20_List_20_Graphic_2F_Get_20_Triangle_20_North_20_Corners(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Default_20_List_20_Graphic_2F_Get_20_Triangle_20_South_20_Corners(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Default_20_List_20_Graphic_2F_Get_20_Diamond_20_Corners(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Default_20_List_20_Graphic_2F_Draw_20_CG(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Default_20_List_20_Graphic_2F_Construct_20_Path(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Default_20_List_20_Graphic_2F_Open(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Default_20_List_20_Graphic_2F_Set_20_Value(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Default_20_List_20_Graphic_2F_Set_20_Shape(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_List_20_Window_20_Drag_20_Handler_2F_Drag_20_Track_20_In_20_Window(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_List_20_Window_20_Drag_20_Handler_2F_Drag_20_Enter_20_Window(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_List_20_Window_20_Drag_20_Handler_2F_Drag_20_Leave_20_Window(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_List_20_Window_20_Drag_20_Handler_2F_Accept_20_Drop(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_List_20_Window_20_Drag_20_Handler_2F_Do_20_Scroll_20_Timer_20_Callback(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_List_20_Window_20_Drag_20_Handler_2F_xInstall_20_Handlers(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_List_20_Window_20_Drag_20_Handler_2F_xCheck_20_Drop_20_Flavors(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_List_20_Window_20_Drag_20_Handler_2F_xDrag_20_In_20_Window(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Set_20_Selected_20_Colors(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Set_20_Standard_20_Colors(V_Environment, enum boolType *, Nat4);
enum opTrigger vpx_method_Set_20_Selected_20_BackColor(V_Environment, enum boolType *, Nat4);
enum opTrigger vpx_method_Set_20_Selected_20_ForeColor(V_Environment, enum boolType *, Nat4);
enum opTrigger vpx_method_Basic_20_IO_20_Graphic_2F_Draw(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Basic_20_IO_20_Graphic_2F_Draw_20_CG(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Continue_20_Failure_20_Graphic_2F_Draw(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Continue_20_Failure_20_Graphic_2F_Draw_20_CG(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Default_20_Graphic_2F_Draw(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Default_20_Graphic_2F_Draw_20_CG(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Default_20_Oval_20_Graphic_2F_Draw(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Default_20_Oval_20_Graphic_2F_Draw_20_CG(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_External_20_Get_20_Graphic_2F_Frame_20_To_20_Corners(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_External_20_Get_20_Graphic_2F_Frame_20_To_20_Repeat_20_Corners(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_External_20_Set_20_Graphic_2F_Frame_20_To_20_Corners(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_External_20_Set_20_Graphic_2F_Frame_20_To_20_Repeat_20_Corners(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Fail_20_Failure_20_Graphic_2F_Draw(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Fail_20_Failure_20_Graphic_2F_Draw_20_CG(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Fail_20_Success_20_Graphic_2F_Draw(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Fail_20_Success_20_Graphic_2F_Draw_20_CG(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Finish_20_Failure_20_Graphic_2F_Draw(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Finish_20_Failure_20_Graphic_2F_Draw_20_CG(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Finish_20_Success_20_Graphic_2F_Draw(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Finish_20_Success_20_Graphic_2F_Draw_20_CG(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Get_20_Graphic_2F_Frame_20_To_20_Corners(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Get_20_Graphic_2F_Frame_20_To_20_Repeat_20_Corners(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_InputBar_20_Graphic_2F_Frame_20_To_20_Corners(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Instance_20_Graphic_2F_Frame_20_To_20_Corners(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Instance_20_Graphic_2F_Frame_20_To_20_Repeat_20_Corners(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_List_20_IO_20_Graphic_2F_Draw(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_List_20_IO_20_Graphic_2F_Draw_20_CG(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Local_20_Graphic_2F_Draw(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Local_20_Graphic_2F_Draw_20_CG(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Loop_20_IO_20_Root_20_Graphic_2F_Draw(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Loop_20_IO_20_Root_20_Graphic_2F_Draw_20_CG(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Loop_20_IO_20_Terminal_20_Graphic_2F_Draw(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Loop_20_IO_20_Terminal_20_Graphic_2F_Draw_20_CG(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Next_20_Case_20_Failure_20_Graphic_2F_Draw(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Next_20_Case_20_Failure_20_Graphic_2F_Draw_20_CG(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Next_20_Case_20_Success_20_Graphic_2F_Draw(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Next_20_Case_20_Success_20_Graphic_2F_Draw_20_CG(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_OutputBar_20_Graphic_2F_Frame_20_To_20_Corners(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Persistent_20_Graphic_2F_Draw(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Persistent_20_Graphic_2F_Draw_20_CG(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Primitive_20_Graphic_2F_Draw(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Primitive_20_Graphic_2F_Draw_20_CG(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Procedure_20_Graphic_2F_Draw(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Procedure_20_Graphic_2F_Draw_20_CG(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw_20_CG(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Frame_20_CG(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Erase_20_CG(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Set_20_Graphic_2F_Frame_20_To_20_Corners(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Set_20_Graphic_2F_Frame_20_To_20_Repeat_20_Corners(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Terminate_20_Failure_20_Graphic_2F_Draw(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Terminate_20_Failure_20_Graphic_2F_Draw_20_CG(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Terminate_20_Success_20_Graphic_2F_Draw(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Terminate_20_Success_20_Graphic_2F_Draw_20_CG(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Universal_20_Graphic_2F_Draw(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Universal_20_Graphic_2F_Draw_20_CG(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Constant_20_Match_20_Graphic_2F_Draw(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Constant_20_Match_20_Graphic_2F_Draw_20_CG(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_External_20_CM_20_Graphic_2F_Draw(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_External_20_CM_20_Graphic_2F_Draw_20_CG(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Super_20_Graphic_2F_Draw_20_CG(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Super_20_Graphic_2F_Frame_20_To_20_Corners(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Breakpoint_20_Graphic_2F_Draw_20_CG(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Inject_20_Graphic_2F_Draw_20_CG(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Evaluate_20_Graphic_2F_Draw(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Evaluate_20_Graphic_2F_Draw_20_CG(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Default_20_Triangle_20_Graphic_2F_Frame_20_To_20_Corners(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Default_20_Triangle_20_Graphic_2F_Draw_20_CG(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Synchro_20_Line(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Create_20_Tidy_20_Band(V_Environment, enum boolType *, Nat4,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_Sort_20_Vertically(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Sort_20_Horizontally(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Create_20_Left_20_Coordinate(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_Synchro_20_Line_20_CG(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Measure_20_Text(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Set_20_Operation_20_Font(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_Is_20_KeyCode_20_Pressed_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Get_20_Case_20_Dock_20_Orientation(V_Environment, enum boolType *, Nat4,V_Object *);
enum opTrigger vpx_method_Case_20_View_2F_Old_20_Draw(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Case_20_View_2F_Old_20_Command_20_Key(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Case_20_View_2F_Command_20_Key(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Case_20_View_2F_Process_20_Click(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Case_20_View_2F_Process_20_Key(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Case_20_View_2F_Dispatch_20_Click(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Case_20_View_2F_Space_20_Bar(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Case_20_View_2F_Tab(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Case_20_View_2F_Arrow_20_Key(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Case_20_View_2F_Cut(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Case_20_View_2F_Get_20_Selected_20_Operations(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Case_20_View_2F_Copy(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Case_20_View_2F_Paste(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Case_20_View_2F_Delete(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Case_20_View_2F_Duplicate(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Case_20_View_2F_Select_20_All(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Case_20_View_2F_Local_20_To_20_Method(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Case_20_View_2F_Operations_20_To_20_Local(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Case_20_View_2F_Draw(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Case_20_View_2F_Tidy(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Case_20_View_2F_Target_20_Operation_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Case_20_View_2F_Tab_20_Direction(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Case_20_View_2F_Redraw_20_Items_20_CG(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Case_20_View_2F_Get_20_All_20_Operations(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Case_20_View_2F_Get_20_All_20_Comments(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Case_20_View_2F_Get_20_Selected_20_IO(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Case_20_View_2F_Get_20_Selected_20_Local(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Case_20_View_2F_Get_20_Selected_20_Comments(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Case_20_View_2F_Return(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Case_20_View_2F_Convert_20_Selection_20_To_20_Type(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Case_20_View_2F_Marquee_20_Select(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Case_20_View_2F_Line_20_Tool(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Case_20_View_2F_Link_20_Tool(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Case_20_View_2F_Sync_20_Tool(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Case_20_View_2F_Draw_20_CG(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Case_20_View_2F_Marquee_20_Select_23_(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Case_20_View_2F_Link_20_Tool_23_(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Case_20_View_2F_Sync_20_Tool_23_(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Case_20_View_2F_Find_20_Operation_20_Parts(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Case_20_View_2F_Update_20_Select_20_Item(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Case_20_View_2F_Resize_20_Operations(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Case_20_View_2F_Reset_20_Operations(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Case_20_View_2F_Double_20_Click(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Case_20_View_2F_Find_20_Case_20_Selector(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Case_20_View_2F_Send_20_Refresh(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Case_20_View_2F_Erase_20_View_20_CG(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Case_20_View_2F_Erase_20_Row_20_CG(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Case_20_View_2F_Resize(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Case_20_View_2F_Find_20_IO_20_Item_20_Near(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Case_20_View_2F_Set_20_Select_20_List(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Case_20_View_2F_Drag_20_Items(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Case_20_View_2F_Delete_20_Items(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Case_20_View_2F_Update_20_Canvas_20_Limits(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Case_20_View_2F_Find_20_Item(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Case_20_View_2F_Update_20_Select_20_List(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Case_20_Window_2F_Extract_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Case_20_Window_2F_Refresh_20_Data(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Case_20_Window_2F_Reinstall_20_Data(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Case_20_Window_2F_Reinstall_20_Case_20_Data(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Case_20_Window_2F_Install_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Case_20_Window_2F_Get_20_Debug_20_Windows(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Case_20_Window_2F_CE_20_HICommand_20_Update_20_Status(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Case_20_Window_2F_CE_20_HICommand_20_Process(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Case_20_Window_2F_HIC_20_Control_20_Change(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Case_20_Window_2F_HIC_20_Ops_20_Tidy(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Case_20_Window_2F_HIC_20_Ops_20_Ops_20_To_20_Local(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Case_20_Window_2F_HIC_20_Ops_20_Local_20_To_20_Method(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Case_20_Window_2F_HIC_20_Edit_20_Basics(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Case_20_Window_2F_Get_20_Selected_20_IO(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Case_20_Window_2F_Get_20_Selected_20_Operations(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Case_20_Window_2F_Get_20_Selected_20_Local(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Case_20_Window_2F_Get_20_Selected_20_Comments(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Case_20_Window_2F_HIC_20_IO_20_Change(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Case_20_Window_2F_HIC_20_Ops_20_Change(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Case_20_Window_2F_Get_20_Case_20_Drawer(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Case_20_Window_2F_CE_20_Mouse_20_Moved(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Case_20_Window_2F_CE_20_Raw_20_Key_20_Modifiers_20_Changed(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Case_20_Window_2F_Line_20_Tool(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Case_20_Window_2F_HIC_20_Clear_20_Breakpoints(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Case_20_Window_2F_HIC_20_Ops_20_Resize(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Case_20_Window_2F_HIC_20_Ops_20_Reset(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Case_20_Window_2F_Close(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Case_20_Window_2F_Open_20_Case(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Case_20_Window_2F_Get_20_Selected_20_Cases(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Case_20_Window_2F_CE_20_Mouse_20_Wheel_20_Moved(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Case_20_Window_2F_Create_20_Comment_20_Items(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Case_20_Window_2F_Data_20_Message(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Case_20_Window_2F_Uninstall_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Case_20_Window_2F_HIC_20_Status_20_File_20_New_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_Case_20_Window_2F_HIC_20_File_20_New(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Case_20_Window_2F_HIC_20_Edit_20_Reveal_20_Container(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Case_20_Window_2F_Accept_20_Flavors(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Case_20_Window_2F_Get_20_Ideal_20_Size(V_Environment, enum boolType *, Nat4,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_Case_20_Window_2F_Get_20_Path_20_List(V_Environment, enum boolType *, Nat4,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_Case_20_Window_2F_Resizing(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Case_20_Window_2F_CE_20_Window_20_Resize_20_Completed(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Control_20_Item_2F_Extract_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Control_20_Item_2F_Initialize(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Control_20_Item_2F_Set_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Control_20_Item_2F_Close(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Control_20_Item_2F_Process_20_Click(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Control_20_Item_2F_Get_20_Color_20_Names(V_Environment, enum boolType *, Nat4,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_Control_20_Item_2F_Was_20_Hit(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_IO_20_Item_2F_Connect_20_To_20_Root(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_IO_20_Item_2F_Create_20_Connection(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_IO_20_Item_2F_Draw_20_Connection(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_IO_20_Item_2F_Extract_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_IO_20_Item_2F_Initialize(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_IO_20_Item_2F_Install_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_IO_20_Item_2F_Item_20_Center(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_IO_20_Item_2F_Move_20_Item(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_IO_20_Item_2F_Process_20_Click(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_IO_20_Item_2F_Set_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_IO_20_Item_2F_Align_20_Operation(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_IO_20_Item_2F_Remove_20_Data(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_IO_20_Item_2F_Connect_20_To_20_Root_20_CG(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_IO_20_Item_2F_Draw_20_Connection_20_CG(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_IO_20_Item_2F_Drag_20_Item(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_IO_20_Item_2F_Move_20_By(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_IO_20_Item_2F_Double_20_Click_20_Item(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_IO_20_Item_2F_Get_20_Visual_20_Frame(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Operation_20_Item_2F_Old_20_Process_20_Click(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Operation_20_Item_2F_Older_20_Extract_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Operation_20_Item_2F_Old_20_Extract_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Operation_20_Item_2F_Click_20_Item(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Operation_20_Item_2F_Create_20_Synchro(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Operation_20_Item_2F_Draw_20_Synchro(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Operation_20_Item_2F_Initialize(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Operation_20_Item_2F_Install_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Operation_20_Item_2F_Move_20_Item(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Operation_20_Item_2F_Set_20_Frame(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Operation_20_Item_2F_Set_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Operation_20_Item_2F_Synchro_20_To_20_Operation(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Operation_20_Item_2F_Double_20_Click_20_Item(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Operation_20_Item_2F_Draw(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Operation_20_Item_2F_Process_20_Click(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Operation_20_Item_2F_Dispatch_20_Click(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Operation_20_Item_2F_Get_20_Top(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Operation_20_Item_2F_Get_20_Left(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Operation_20_Item_2F_Get_20_Right(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Operation_20_Item_2F_Convert_20_To_20_Type(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Operation_20_Item_2F_Target_20_Text(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Operation_20_Item_2F_Auto_20_Type(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Operation_20_Item_2F_Extract_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Operation_20_Item_2F_Use_20_Best_20_Frame(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Operation_20_Item_2F_Use_20_Default_20_Controls(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Operation_20_Item_2F_Synchro_20_To_20_Operation_20_CG(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Operation_20_Item_2F_Draw_20_Synchro_20_CG(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Operation_20_Item_2F_Draw_20_CG(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Operation_20_Item_2F_Transform_20_Arity(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Operation_20_Item_2F_Drag_20_Item(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Operation_20_Item_2F_Move_20_By(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Operation_20_Item_2F_Resize(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Operation_20_Item_2F_Set_20_Selected_20_Colors(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Operation_20_Item_2F_Adjust_20_Control_20_Frames(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Operation_20_Item_2F_Reinstall_20_Data(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Operation_20_Item_2F_Target_20_Deferred(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Operation_20_Item_2F_Change_20_Frame(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Operation_20_Item_2F_Known_20_Type(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Operation_20_Item_2F_xFind_20_Item(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Tidy_20_Band_2F_Populate_20_Items(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Tidy_20_Band_2F_Move_20_Items(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Tidy_20_Band_2F_Move_20_Item(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Comment_20_Item_2F_Click_20_Item(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Comment_20_Item_2F_Initialize(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Comment_20_Item_2F_Install_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Comment_20_Item_2F_Set_20_Frame(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Comment_20_Item_2F_Set_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Comment_20_Item_2F_Double_20_Click_20_Item(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Comment_20_Item_2F_Draw(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Comment_20_Item_2F_Extract_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Comment_20_Item_2F_OLD_20_Process_20_Click(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Comment_20_Item_2F_Dispatch_20_Click(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Comment_20_Item_2F_Get_20_Top(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Comment_20_Item_2F_Get_20_Left(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Comment_20_Item_2F_Get_20_Right(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Comment_20_Item_2F_Set_20_Selected_20_Colors(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Comment_20_Item_2F_Move_20_Item(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Comment_20_Item_2F_Move_20_By(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Comment_20_Item_2F_Drag_20_Item(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Comment_20_Item_2F_Grow_20_Item(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Comment_20_Item_2F_Grow_20_By(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Comment_20_Item_2F_Resize_20_Item(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Comment_20_Item_2F_Resize(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Comment_20_Item_2F_Target_20_Text(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Comment_20_Item_2F_Erase_20_View_20_CG(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Comment_20_Item_2F_Use_20_Best_20_Frame(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Comment_20_Item_2F_Use_20_Default_20_Controls(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Comment_20_Edit_20_Text_2F_Exit(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Comment_20_Edit_20_Text_2F_xDraw_20_CG(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Comment_20_Edit_20_Text_2F_Process_20_Key(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Comment_20_Edit_20_Text_2F_Measure_20_Text(V_Environment, enum boolType *, Nat4,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_Comment_20_Edit_20_Text_2F_Was_20_Content_20_Hit_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Comment_20_Edit_20_Text_2F_Create_20_HIThemeTextInfo(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Comment_20_Graphic_2F_Draw_20_CG(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Case_20_Drawer_20_Window_2F_Open(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Case_20_Drawer_20_Window_2F_Open_20_Controls(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Case_20_Drawer_20_Window_2F_Reinstall_20_Data(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Case_20_Drawer_20_Window_2F_Find_20_List_20_View(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Case_20_Drawer_20_Window_2F_Get_20_Cases_20_List(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Case_20_Drawer_20_Window_2F_Open_20_Case_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Case_20_Drawer_20_Window_2F_New_20_Case(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Case_20_Drawer_20_Window_2F_Open_20_Case(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Case_20_Drawer_20_Window_2F_CE_20_HICommand_20_Process(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Case_20_Drawer_20_Window_2F_Delete_20_Case(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Case_20_Drawer_20_Window_2F_Open_20_Case_20_One(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Case_20_Drawer_20_Window_2F_Refresh_20_Selection(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Case_20_Drawer_20_Window_2F_Move_20_Case(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Case_20_Drawer_20_Window_2F_Open_20_Case_20_Editor_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Case_20_Drawer_20_Window_2F_Do_20_Change_20_Selection(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Case_20_Drawer_20_Window_2F_Open_20_Next_20_Case(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Case_20_Drawer_20_Databrowser_20_Control_2F_DB_20_Item_20_Notification(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Case_20_Drawer_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create(V_Environment, enum boolType *, Nat4,V_Object,V_Object *,V_Object *,V_Object *,V_Object *);
enum opTrigger vpx_method_Case_20_Drawer_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Case_20_Drawer_20_Databrowser_20_Control_2F_Do_20_Change_20_Selection(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Case_20_Drawer_20_Databrowser_20_Control_2F_OLD_20_DB_20_Item_20_Notification(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Case_20_Select_20_View_2F_Refresh_20_Case_20_List(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Case_20_Select_20_View_2F_Get_20_Cases_20_List(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Case_20_Select_20_View_2F_Erase_20_View_20_CG(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Case_20_Select_20_View_2F_Open(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Case_20_Select_20_View_2F_Resize(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Case_20_Select_20_View_2F_Refresh_20_Selection(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Case_20_Select_20_View_2F_Process_20_Click(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Case_20_Select_20_View_2F_Open_20_Case(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Case_20_Select_20_View_2F_Open_20_Case_20_Number(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Case_20_Select_20_View_2F_New_20_Case(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Case_20_Select_20_View_2F_Delete_20_Case(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Case_20_Select_20_View_2F_Process_20_Key(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Case_20_Select_20_View_2F_Align_20_Content(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Case_20_Select_20_View_2F_Get_20_Current_20_Opers(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Case_20_Select_20_View_2F_Marquee_20_Select(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Case_20_Select_20_View_2F_Target_20_Self(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Case_20_Select_20_View_2F_Set_20_Current_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Case_20_Select_20_View_2F_Exit(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Case_20_Select_20_View_2F_Enter(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Case_20_Select_20_View_2F_Cut(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Case_20_Select_20_View_2F_Copy(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Case_20_Select_20_View_2F_Paste(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Case_20_Select_20_View_2F_Delete(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Case_20_Select_20_View_2F_Duplicate(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Case_20_Select_20_View_2F_Select_20_All(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Case_20_Select_20_View_2F_Show_20_CTM(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Case_20_Select_20_View_2F_Update_20_Data(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Case_20_Select_20_View_2F_Open_20_Next_20_Case(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Case_20_Select_20_View_2F_Move_20_Current_20_Case(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Case_20_Select_20_View_2F_Delete_20_Items(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Case_20_Select_20_Item_2F_Initialize(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Case_20_Select_20_Item_2F_Process_20_Click(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Case_20_Select_20_Item_2F_Erase_20_View_20_CG(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Case_20_Select_20_Item_2F_Set_20_Selected(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Case_20_Select_20_Item_2F_Set_20_Current_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Case_20_Select_20_Item_2F_Drag_20_Item(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Case_20_Select_20_Item_2F_Move_20_Item(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Case_20_Select_20_Item_2F_Get_20_This_20_Case(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Case_20_Select_20_Item_2F_Was_20_Content_20_Hit_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Case_20_Select_20_Item_2F_Change_20_Frame(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Case_20_Select_20_Graphic_2F_Draw(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Case_20_Select_20_Graphic_2F_Draw_20_CG(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Case_20_Window_20_Pasteboard_20_Handler_2F_HICommand_20_Owner_20_State(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_Case_20_Window_20_Pasteboard_20_Handler_2F_HICommand_20_Selection_20_State(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Case_20_Window_20_Pasteboard_20_Handler_2F_Get_20_Exclude_20_Flavors_20_For_20_Type(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Case_20_Window_20_Pasteboard_20_Handler_2F_Get_20_Put_20_Values(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Case_20_Window_20_Pasteboard_20_Handler_2F_Create_20_Put_20_Values(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Case_20_Window_20_Pasteboard_20_Handler_2F_Get_20_Put_20_Values_2023_1(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Case_20_Window_20_Drag_20_Handler_2F_Drag_20_Track_20_In_20_Window(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Case_20_Window_20_Drag_20_Handler_2F_Drag_20_Enter_20_Window(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Case_20_Window_20_Drag_20_Handler_2F_Drag_20_Leave_20_Window(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Case_20_Window_20_Drag_20_Handler_2F_Accept_20_Drop(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Case_20_Window_20_Drag_20_Handler_2F_Create_20_Drag_20_Image(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Case_20_Window_20_Drag_20_Handler_2F_Create_20_Offscreen_20_Image(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_Case_20_Window_20_Drag_20_View_2F_Erase_20_View_20_CG(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Old_20_Case_20_Window_2F_Get_20_Window_20_Drag_20_Handler(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Old_20_Case_20_Window_2F_Set_20_Window_20_Drag_20_Handler(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Old_20_Case_20_Window_2F_Open_20_Controls(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Old_20_Case_20_Window_2F_Close(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Old_20_Case_20_Window_2F_Close_20_Drag_20_Handler(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Old_20_Case_20_Window_2F_Open_20_Drag_20_Handler(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Old_20_Case_20_Window_2F_Accept_20_Flavors(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_VPLSelect_20_Window_2F_CE_20_Mouse_20_Wheel_20_Moved(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_VPLSelect_20_Window_2F_Open_20_Helper_20_List(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_VPLSelect_20_Window_2F_Install_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLSelect_20_Window_2F_Close(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPLSelect_20_Window_2F_Show(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPLSelect_20_Window_2F_Focus_20_Search_20_Text(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPLSelect_20_Window_2F_Install_20_Proxy(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPLSelect_20_Window_2F_Create_20_Banner_20_Item(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_VPLSelect_20_Window_2F_Get_20_Find_20_State(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Select_20_Item_2F_Install_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Select_20_Item_2F_Process_20_Click(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Select_20_Item_2F_Dispatch_20_Click(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Select_20_Item_2F_Close(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Select_20_Item_2F_Data_20_Message(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Select_20_Item_2F_Delete(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Select_20_Item_2F_Initialize(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Select_20_Item_2F_Get_20_Select_20_View(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Select_20_Item_2F_Reinstall_20_Data(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Select_20_Item_2F_Setup_20_Drawing_20_CG(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Select_20_View_2F_Process_20_Key(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Select_20_View_2F_Dispatch_20_Click(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Select_20_View_2F_Process_20_Click(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Select_20_View_2F_Populate_20_CTM(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Select_20_Banner_20_View_2F_Initialize(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Select_20_Banner_20_View_2F_Erase_20_View_20_CG(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Select_20_Banner_20_View_2F_Resize(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Select_20_Banner_20_View_2F_Get_20_Banner_20_Text(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Select_20_Result_20_Item_2F_Install_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Select_20_Result_20_Item_2F_Process_20_Click(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Select_20_Result_20_Item_2F_Dispatch_20_Click(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Select_20_Result_20_Item_2F_Close(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Select_20_Result_20_Item_2F_Data_20_Message(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Select_20_Result_20_Item_2F_Delete(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Select_20_Result_20_Item_2F_Initialize(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Select_20_Result_20_Item_2F_Resize(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Select_20_Result_20_Item_2F_Get_20_Result_20_List(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Select_20_Result_20_Item_2F_Set_20_Select_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Select_20_Result_20_Item_2F_Reinstall_20_Data(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Select_20_Result_20_Item_2F_Is_20_CTM_20_Item_3F_(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Select_20_Result_20_Item_2F_Setup_20_Drawing_20_CG(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Select_20_Result_20_Row_2F_Initialize(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Select_20_Result_20_Row_2F_Install_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Select_20_Result_20_Row_2F_Get_20_Select_20_View(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Select_20_Result_20_Row_2F_Setup_20_Drawing_20_CG(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_List_20_Value_20_Window_2F_Close(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_List_20_Value_20_Window_2F_Install_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_List_20_Value_20_Window_2F_Refresh_20_Data(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_List_20_Value_20_Window_2F_Is_20_Dirty(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_List_20_Value_20_Window_2F_Set_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_List_20_Value_20_Window_2F_Cancel(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_List_20_Value_20_Window_2F_CE_20_HICommand_20_Update_20_Status(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_List_20_Value_20_Window_2F_CE_20_HICommand_20_Process(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_List_20_Value_20_Window_2F_Get_20_Select_20_Values(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_List_20_Value_20_Window_2F_HIC_20_Edit_20_Clear(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_List_20_Value_20_Window_2F_HIC_20_Edit_20_Cut(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_List_20_Value_20_Window_2F_HIC_20_Edit_20_Copy(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_List_20_Value_20_Window_2F_HIC_20_Edit_20_Paste(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_List_20_Value_20_Window_2F_HIC_20_Edit_20_Duplicate(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_List_20_Value_20_Window_2F_HIC_20_Edit_20_Select_20_All(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_List_20_Value_20_Window_2F_HIC_20_Edit_20_Paste_20_Value(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_List_20_Value_20_Window_2F_HIC_20_Edit_20_Copy_20_Value(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_List_20_Value_20_Window_2F_Refresh_20_Selection(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_List_20_Value_20_Window_2F_Get_20_Project_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_List_20_Value_20_Window_2F_Update_20_Data(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_List_20_Value_20_Window_2F_Show(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_List_20_Value_20_Window_2F_Make_20_Dirty(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_List_20_Value_20_Window_2F_HIC_20_OK(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_List_20_Value_20_Window_2F_HIC_20_Cancel(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_List_20_Value_20_Window_2F_Uninstall_20_Data(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_List_20_Value_20_Window_2F_CE_20_Mouse_20_Wheel_20_Moved(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_List_20_Value_20_Window_2F_HIC_20_Type_20_Change(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_List_20_Value_20_Window_2F_HIC_20_View_20_Change(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_List_20_Value_20_Window_2F_Find_20_Type_20_Popup(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_List_20_Value_20_Window_2F_Find_20_View_20_Popup(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_List_20_Value_20_Window_2F_Update_20_Data_20_Controls(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_List_20_Value_20_Window_2F_Open_20_Controls(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_List_20_Value_20_Window_2F_Get_20_Views_20_For_20_Type(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_List_20_Value_20_Window_2F_Update_20_Data_20_Type(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_List_20_Value_20_Window_2F_Make_20_Clean(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_List_20_Value_20_Window_2F_Update_20_Value(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_List_20_Value_20_Window_2F_Change_20_Type(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_List_20_Value_20_Window_2F_Get_20_Toolbar(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_List_20_Value_20_Window_2F_Set_20_Toolbar(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_List_20_Value_20_Window_2F_HIC_20_Run_20_Breakpoint(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_List_20_Value_20_Window_2F_Close_20_All(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_List_20_Value_20_Window_2F_Get_20_Original_20_Owner(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_List_20_Value_20_Window_2F_Open_20_With_20_Item(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_List_20_Value_20_Window_2F_Get_20_Select_20_Items(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_List_20_Value_20_Window_2F_HIC_20_Status_20_File_20_New_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_List_20_Value_20_Window_2F_HIC_20_File_20_New(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_List_20_Value_20_Window_2F_HIC_20_Edit_20_Reveal_20_Container(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_List_20_Value_20_Window_2F_HIC_20_Control_20_Reverse(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_List_20_Value_20_Window_2F_Get_20_Creation_20_Attributes(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_List_20_Value_20_Window_2F_Show_20_Drag_20_Hilite(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_List_20_Value_20_Window_2F_Accept_20_Flavors(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_List_20_Value_20_Window_2F_New_20_Element_20_At(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Value_20_View_2F_Before_20_Drawing(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Value_20_View_2F_Reset_20_Content(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Value_20_View_2F_Delete(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Value_20_View_2F_Dispatch_20_Click(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Value_20_View_2F_Process_20_Click(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Value_20_View_2F_Process_20_Key(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Value_20_View_2F_Command_20_Key(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Value_20_View_2F_Toggle_20_Select_20_List(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Value_20_View_2F_Marquee_20_Select(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Value_20_View_2F_Target_20_Self(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Value_20_View_2F_Cut(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Value_20_View_2F_Copy(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Value_20_View_2F_Paste(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Value_20_View_2F_Select_20_All(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Value_20_View_2F_Duplicate(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Value_20_View_2F_Align_20_Content(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Value_20_View_2F_Get_20_Select_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Value_20_View_2F_Set_20_Select_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Value_20_View_2F_Set_20_Select_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Value_20_View_2F_Erase_20_View_20_CG(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Value_20_View_2F_Erase_20_Row_20_CG(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Value_20_View_2F_Redraw_20_Items_20_CG(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Value_20_View_2F_Advance_20_Focus(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Value_20_View_2F_Show_20_CTM(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Value_20_View_2F_Select_20_CTM(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Value_20_View_2F_Get_20_Current_20_Values(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Value_20_View_2F_Get_20_CTM_20_Values(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Value_20_View_2F_Populate_20_CTM(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Value_20_View_2F_Set_20_Content(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Value_20_View_2F_Find_20_Content_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Value_20_View_2F_Drag_20_Items(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Value_20_View_2F_Delete_20_Items(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Value_20_Item_2F_Initialize(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Value_20_Item_2F_Install_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Value_20_Item_2F_Set_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Value_20_Item_2F_Get_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Value_20_Item_2F_Process_20_Click(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Value_20_Item_2F_Dispatch_20_Click(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Value_20_Item_2F_Move_20_Item(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Value_20_Item_2F_Handle_20_Item_20_Click(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Value_20_Item_2F_Set_20_Value(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Value_20_Item_2F_Close(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Value_20_Item_2F_Set_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Value_20_Item_2F_Drag_20_Item(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Value_20_Item_2F_Resize(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Value_20_Item_2F_Erase_20_View_20_CG(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Value_20_Item_2F_Get_20_Value_20_Type(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Value_20_Item_2F_Get_20_Item_20_Type(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Value_20_Item_2F_Target_20_Text(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Value_20_Item_2F_Target_20_Deferred(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Value_20_Item_2F_Set_20_Watched_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Value_20_Item_2F_Is_20_CTM_20_Item_3F_(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Value_20_Item_2F_Get_20_Value(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Value_20_Item_2F_Hilite(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Value_20_Item_2F_Was_20_Content_20_Hit_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Value_20_Text_2F_Exit(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Value_20_Text_2F_Process_20_Key(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Value_20_Text_2F_Process_20_Click(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Value_20_Text_2F_Enter(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Name_20_Text_2F_Process_20_Key(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Value_20_Text_20_Edit_20_Text_2F_xDraw_20_CG(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Value_20_Text_20_Edit_20_Text_2F_Measure_20_Text(V_Environment, enum boolType *, Nat4,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_Value_20_Text_20_Edit_20_Text_2F_Was_20_Content_20_Hit_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Value_20_Text_20_Edit_20_Text_2F_Create_20_HIThemeTextInfo(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Value_20_Text_20_Edit_20_Text_2F_Process_20_Key(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Value_20_Text_20_Item_2F_Initialize(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Value_20_Text_20_Item_2F_Resize(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Value_20_Text_20_Item_2F_Dispatch_20_Click(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Value_20_Text_20_Item_2F_Set_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Value_20_HIToolbar_2F_Update_20_Controls(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Value_20_HIToolbar_2F_Toolbar_20_Layout_20_Changed(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Value_20_HIToolbar_2F_Toolbar_20_Item_20_Added(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Value_20_HIToolbar_2F_Toolbar_20_Item_20_Removed(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HIPushbutton_20_Toolbar_20_Item_2F7E_Create_20_Control_20_Record(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_HIPopupButton_20_Toolbar_20_Item_2F7E_Create_20_Control_20_Record(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_HIPopupButton_20_Toolbar_20_Item_2F_CE_20_HICommand_20_Update_20_Status(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HIPopupButton_20_Toolbar_20_Item_2F_CE_20_HICommand_20_Process(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HIPopupButton_20_Toolbar_20_Item_2F_Update_20_Menu(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_HIPopupButton_20_Toolbar_20_Item_2F_CE_20_Hit(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HIPopupButton_20_Toolbar_20_Item_2F_Set_20_Control_20_Value(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_HIPopupButton_20_Toolbar_20_Item_2F_Find_20_Sub_20_Control_20_Bounds(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_HIPopupButton_20_Toolbar_20_Item_2F_CE_20_Owning_20_Window_20_Changed(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HIPopupButton_20_Toolbar_20_Item_2F_Set_20_Item_20_Menu(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_HISearchField_20_Toolbar_20_Item_2F7E_Create_20_Control_20_Record(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_HISearchField_20_Toolbar_20_Item_2F_Get_20_Initial_20_Attributes(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_HISearchField_20_Toolbar_20_Item_2F_Get_20_Initial_20_Menu(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_HISearchField_20_Toolbar_20_Item_2F_Get_20_Initial_20_Descriptive_20_Text(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_HISearchField_20_Toolbar_20_Item_2F_CE_20_Handle_20_Event(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HISearchField_20_Toolbar_20_Item_2F_CE_20_Text_20_Field_20_Event(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HISearchField_20_Toolbar_20_Item_2F_CE_20_Text_20_Accepted(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_HISearchField_20_Toolbar_20_Item_2F_CE_20_Search_20_Field_20_Event(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HISearchField_20_Toolbar_20_Item_2F_CE_20_Search_20_Field_20_Cancel_20_Clicked(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_HISearchField_20_Toolbar_20_Item_2F_Get_20_Text(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_HISearchField_20_Toolbar_20_Item_2F_Set_20_Text(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_HISearchField_20_Toolbar_20_Item_2F_Set_20_Value_20_CFType(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_HISearchField_20_Toolbar_20_Item_2F_Find_20_Sub_20_Control_20_Bounds(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Value_20_Type_20_Toolbar_20_Item_2F_Update_20_Menu(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Value_20_Type_20_Toolbar_20_Item_2F_CE_20_Hit(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Value_20_Type_20_Toolbar_20_Item_2F_Set_20_Popup_20_Selection(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_HISegmentedView_20_Toolbar_20_Item_2F_Install_20_Segments(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_HISegmentedView_20_Toolbar_20_Item_2F_Get_20_Segments(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_HISegmentedView_20_Toolbar_20_Item_2F_Set_20_Segments(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_HISegmentedView_20_Toolbar_20_Item_2F7E_Create_20_Control_20_Record(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_HISegmentedView_20_Toolbar_20_Item_2F_TIV_20_Config_20_For_20_Size(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_HISegmentedView_20_Segment_2F_Set_20_Segment(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_HISegmentedView_20_Segment_2F_Set_20_Segment_20_Behavior(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_HISegmentedView_20_Segment_2F_Set_20_Segment_20_Attributes(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_HISegmentedView_20_Segment_2F_Set_20_Segment_20_Value(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_HISegmentedView_20_Segment_2F_Set_20_Segment_20_Enabled_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_HISegmentedView_20_Segment_2F_Set_20_Segment_20_Command(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_HISegmentedView_20_Segment_2F_Set_20_Segment_20_Label(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_HISegmentedView_20_Segment_2F_Set_20_Segment_20_Width(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_HISegmentedView_20_Segment_2F_Set_20_Segment_20_Image(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_HISegmentedView_20_Segment_2F_Set_20_Index(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_HISegmentedView_20_Segment_2F_Get_20_Index(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Value_20_Window_20_Pasteboard_20_Handler_2F_HICommand_20_Owner_20_State(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_Value_20_Window_20_Pasteboard_20_Handler_2F_Get_20_Exclude_20_Flavors_20_For_20_Type(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Value_20_Window_20_Pasteboard_20_Handler_2F_Get_20_Put_20_Values(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Value_20_Window_20_Drag_20_Handler_2F_Drag_20_Track_20_In_20_Window(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Value_20_Window_20_Drag_20_Handler_2F_Drag_20_Enter_20_Window(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Value_20_Window_20_Drag_20_Handler_2F_Drag_20_Leave_20_Window(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Value_20_Window_20_Drag_20_Handler_2F_Accept_20_Drop(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Value_20_Window_20_Drag_20_Handler_2F_Do_20_Scroll_20_Timer_20_Callback(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Debug_20_Window_2F_Close(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Debug_20_Window_2F_Close_20_Self(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Debug_20_Window_2F_Rollback(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Debug_20_Window_2F_Install_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Debug_20_Window_2F_Extract_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Debug_20_Window_2F_CE_20_HICommand_20_Update_20_Status(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Debug_20_Window_2F_CE_20_HICommand_20_Process(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Debug_20_Window_2F_HIC_20_Exec_20_Resume(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Debug_20_Window_2F_HIC_20_Exec_20_Abort(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Debug_20_Window_2F_HIC_20_Exec_20_Step(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Debug_20_Window_2F_HIC_20_Exec_20_Step_20_Over(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Debug_20_Window_2F_HIC_20_Exec_20_Step_20_In(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Debug_20_Window_2F_HIC_20_Exec_20_Step_20_Out(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Debug_20_Window_2F_HIC_20_Clear_20_Breakpoints(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Debug_20_Window_2F_HIC_20_Toggle_20_Breakpoint(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Debug_20_Window_2F_CE_20_Mouse_20_Wheel_20_Moved(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Debug_20_Window_2F_Add_20_Editor(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Debug_20_Window_2F_Find_20_Editor(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Debug_20_Window_2F_Remove_20_Editor(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Debug_20_Window_2F_Cancel_20_Editors(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Debug_20_Window_2F_Close_20_Data(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Debug_20_Window_2F_Create_20_Comment_20_Items(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Debug_20_Window_2F_Get_20_Project_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Debug_20_Window_2F_Close_20_All(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Debug_20_Window_2F_Show(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Debug_20_Window_2F_Install_20_Proxy(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Debug_20_Window_2F_CE_20_Window_20_Event(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Debug_20_Window_2F_CE_20_Path_20_Select(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Debug_20_Window_2F_Get_20_Path_20_List(V_Environment, enum boolType *, Nat4,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_Debug_20_Window_2F_HIC_20_Edit_20_Reveal_20_Path(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Debug_20_View_2F_Dispatch_20_Click(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Debug_20_View_2F_Process_20_Click(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Debug_20_View_2F_Process_20_Key(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Debug_20_View_2F_Return(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Debug_20_View_2F_Command_20_Key(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Debug_20_View_2F_Show_20_Current_20_Operation(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Debug_20_View_2F_Continue(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Debug_20_View_2F_Step_20_Into(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Debug_20_View_2F_Step_20_Out(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Debug_20_View_2F_Tab(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Debug_20_View_2F_Previous_20_Case(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Debug_20_View_2F_Draw(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Debug_20_View_2F_Draw_20_CG(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Debug_20_View_2F_Erase_20_View_20_CG(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Debug_20_View_2F_Old_20_Draw(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Debug_20_View_2F_Resize(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Debug_20_View_2F_Find_20_IO_20_Item_20_Near(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Debug_20_Item_2F_Click_20_Item(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Debug_20_Item_2F_Draw_20_Synchro(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Debug_20_Item_2F_Extract_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Debug_20_Item_2F_Initialize(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Debug_20_Item_2F_Install_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Debug_20_Item_2F_Move_20_Item(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Debug_20_Item_2F_Set_20_Frame(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Debug_20_Item_2F_Set_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Debug_20_Item_2F_Synchro_20_To_20_Operation(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Debug_20_Item_2F_Double_20_Click_20_Item(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Debug_20_Item_2F_Draw(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Debug_20_Item_2F_Synchro_20_To_20_Operation_20_CG(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Debug_20_Item_2F_Draw_20_Synchro_20_CG(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Debug_20_Item_2F_Draw_20_CG(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Debug_20_Item_2F_Dispatch_20_Click(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Debug_20_Item_2F_Process_20_Click(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Debug_20_Item_2F_Set_20_Selected_20_Colors(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Connect_20_To_20_Root(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Draw_20_Connection(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Extract_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Initialize(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Install_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Item_20_Center(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Move_20_Item(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Process_20_Click(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Set_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Set_20_Value(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Close_20_Value(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Connect_20_To_20_Root_20_CG(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Draw_20_Connection_20_CG(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Show_20_CTM(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Select_20_CTM(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Open_20_Editor_20_Window(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Close(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Find_20_Editor_20_Window(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Set_20_Editor_20_Window(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Remove_20_Editor_20_Window(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Debug_20_Control_20_Item_2F_Extract_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Debug_20_Control_20_Item_2F_Initialize(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Debug_20_Control_20_Item_2F_Set_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Debug_20_Control_20_Item_2F_Process_20_Click(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Debug_20_Control_20_Item_2F_Close(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Debug_20_Control_20_Item_2F_Get_20_Color_20_Names(V_Environment, enum boolType *, Nat4,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_Debug_20_Control_20_Item_2F_Old_20_Initialize(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Debug_20_Comment_20_Item_2F_Initialize(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Debug_20_Comment_20_Item_2F_Install_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Debug_20_Comment_20_Item_2F_Erase_20_View_20_CG(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Debug_20_Comment_20_Item_2F_Resize(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Debug_20_Comment_20_Item_2F_Set_20_Frame(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Debug_20_Comment_20_Item_2F_Dispatch_20_Click(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Stack_20_Window_2F_Close(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Stack_20_Window_2F_Install_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Stack_20_Window_2F_Install_20_Proxy(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Stack_20_Window_2F_CE_20_HICommand_20_Update_20_Status(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Stack_20_Window_2F_CE_20_HICommand_20_Process(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Stack_20_Window_2F_HIC_20_Exec_20_Resume(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Stack_20_Window_2F_HIC_20_Exec_20_Abort(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Stack_20_Window_2F_HIC_20_Exec_20_Step(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Stack_20_Window_2F_HIC_20_Exec_20_Step_20_Over(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Stack_20_Window_2F_HIC_20_Exec_20_Step_20_In(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Stack_20_Window_2F_HIC_20_Exec_20_Step_20_Out(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Stack_20_Window_2F_HIC_20_Clear_20_Breakpoints(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Stack_20_Window_2F_Get_20_Current_20_State(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Stack_20_Window_2F_Get_20_Project_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Stack_20_Window_2F_Close_20_All(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Stack_20_Item_2F_Install_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Stack_20_Item_2F_Process_20_Click(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Stack_20_Item_2F_Dispatch_20_Click(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Stack_20_Item_2F_Close(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Stack_20_Item_2F_Resize(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Stack_20_Item_2F_Erase_20_View_20_CG(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Stack_20_View_2F_Process_20_Key(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Stack_20_View_2F_Process_20_Click(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Stack_20_View_2F_Dispatch_20_Click(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Stack_20_View_2F_Draw(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Stack_20_View_2F_Erase_20_View_20_CG(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Find_20_State_20_Element_20_Message(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Find_20_State_20_Element_20_Message_20_Send(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Find_20_State_20_Element_20_Add(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Get_20_Current_20_Find(V_Environment, enum boolType *, Nat4,V_Object *);
enum opTrigger vpx_method_Find_20_Next(V_Environment, enum boolType *, Nat4);
enum opTrigger vpx_method_Find_20_Previous(V_Environment, enum boolType *, Nat4);
enum opTrigger vpx_method_Find_20_Replace(V_Environment, enum boolType *, Nat4);
enum opTrigger vpx_method_Find_20_Replace_20_All(V_Environment, enum boolType *, Nat4);
enum opTrigger vpx_method_Find_20_Matches_20_In_20_Sources(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Find_20_All(V_Environment, enum boolType *, Nat4);
enum opTrigger vpx_method_Find_20_State_20_Enable(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Find_20_State_20_Disable(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPLFind_20_Window_2F_Open(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPLFind_20_Window_2F_Open_20_Controls(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPLFind_20_Window_2F_Set_20_Prompt_20_Text(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLFind_20_Window_2F_Find_20_Find_20_Text(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLFind_20_Window_2F_Find_20_Type_20_Popup(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLFind_20_Window_2F_Find_20_Option_20_Popup(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLFind_20_Window_2F_Find_20_Ignore_20_Case_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLFind_20_Window_2F_Find_20_Prompt_20_Text(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLFind_20_Window_2F_Find_20_Replace_20_Text(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLFind_20_Window_2F_CE_20_HICommand_20_Process(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_VPLFind_20_Window_2F_HIC_20_Find_20_Find(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPLFind_20_Window_2F_Find_20_Direction(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLFind_20_Window_2F_HIC_20_Replace_20_And_20_Find(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPLFind_20_Window_2F_Find_20_Busy_20_Arrows(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLFind_20_Window_2F_Start_20_Busy(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPLFind_20_Window_2F_Finish_20_Busy(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPLFind_20_Window_2F_Find_20_Exact_20_Match_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLFind_20_Window_2F_Get_20_Project_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLFind_20_Window_2F_Update_20_Operation_20_Types(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPLFind_20_Window_2F_Close(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Find_20_State_2F_Find_20_All(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Find_20_State_2F_Check_20_State(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Find_20_State_2F_Find_20_Direction(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Find_20_State_2F_Type_20_Number_20_To_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Find_20_State_2F_Type_20_Name_20_To_20_Number(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Find_20_State_2F_Get_20_Type_20_Number(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Find_20_State_2F_Option_20_Number_20_To_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Find_20_State_2F_Option_20_Name_20_To_20_Number(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Find_20_State_2F_Option_20_Name_20_To_20_Power(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Find_20_State_2F_Get_20_Operation_20_Flag(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Find_20_State_2F_Find_20_All_20_By_20_Type(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *,V_Object *,V_Object *);
enum opTrigger vpx_method_Find_20_State_2F_Find_20_Type_20_Result(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Find_20_State_2F_Find_20_All_20_Results(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Find_20_State_2F_Display_20_Results(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Find_20_State_2F_State_20_Changed(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Find_20_State_2F_Set_20_Find_20_Text(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Find_20_State_2F_Set_20_Replace_20_Text(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Find_20_State_2F_Set_20_Type(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Find_20_State_2F_Set_20_Option(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Find_20_State_2F_Set_20_Case_20_Sensitive_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Find_20_State_2F_Set_20_Wrap_20_Around_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Find_20_State_2F_Set_20_Exact_20_Match_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Find_20_State_2F_Set_20_Source_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Find_20_State_2F_Find_20_Find_20_Window(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Find_20_State_2F_Display_20_All(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Find_20_State_2F_Get_20_Relative_20_Item(V_Environment, enum boolType *, Nat4,V_Object,V_Object *,V_Object *,V_Object *);
enum opTrigger vpx_method_Find_20_State_2F_Get_20_Current_20_Item(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Find_20_State_2F_Replace(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Find_20_State_2F_Replace_20_All(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Find_20_State_2F_Replace_20_Item(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Find_20_State_2F_Commit_20_To_20_History(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Find_20_State_2F_Start_20_Find(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Find_20_State_2F_Finish_20_Find(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Find_20_State_2F_Get_20_Find_20_Window(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Find_20_State_2F_Set_20_Find_20_Window(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Find_20_State_2F_Element_20_Match_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Find_20_State_2F_Element_20_Add(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Find_20_State_2F_Element_20_Message(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Find_20_State_2F_Element_20_Remove_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Find_20_State_2F_Get_20_List_20_Window(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Find_20_State_2F_Set_20_List_20_Window(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Find_20_State_2F_Find_20_List_20_Window(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Find_20_Result_20_Data_2F_Get_20_Value(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Find_20_Result_20_Data_2F_Handle_20_Selection_20_Click(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Find_20_Result_20_Data_2F_Setup_20_Results_20_List(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Find_20_Result_20_Data_2F_Handle_20_Item_20_Click(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Find_20_Result_20_Data_2F_Get_20_Path_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Find_20_Result_20_Data_2F_Can_20_Create_3F_(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Documentation_20_Data_2F_Handle_20_Selection_20_Click(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Documentation_20_Data_2F_Get_20_Name_20_Plural(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Documentation_20_Data_2F_Close(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Documentation_20_Data_2F_Close_20_URL(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Documentation_20_Data_2F_Launch_20_URL(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Documentation_20_Data_2F_Get_20_Path_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Documentation_20_Data_2F_Can_20_Create_3F_(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Search_20_Result_20_Data_2F_Get_20_Path_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Search_20_Result_20_Data_2F_Can_20_Create_3F_(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Watchpoint_20_Data_2F_Have_20_Icon_20_Values_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_Watchpoint_20_Data_2F_Install_20_Item(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Watchpoint_20_Data_2F_Full_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Watchpoint_20_Data_2F_Get_20_Value(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Watchpoint_20_Data_2F_Handle_20_Selection_20_Click(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object);
enum opTrigger vpx_method_Watchpoint_20_Data_2F_Get_20_Path_20_Name(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Watchpoint_20_Data_2F_Can_20_Create_3F_(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPLSmart_20_Find_20_Window_2F_Get_20_Find_20_State(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLSmart_20_Find_20_Window_2F_Set_20_Find_20_State(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLSmart_20_Find_20_Window_2F_Open(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLSmart_20_Find_20_Window_2F_HIC_20_Status_20_File_20_New_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object *,V_Object *);
enum opTrigger vpx_method_VPLSmart_20_Find_20_Window_2F_HIC_20_File_20_New(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPLSmart_20_Find_20_Window_2F_Open_20_Find_20_Sheet(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPLSmart_20_Find_20_Window_2F_Find_20_All(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPLSmart_20_Find_20_Window_2F_Get_20_Find_20_Sheet(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLSmart_20_Find_20_Window_2F_Set_20_Find_20_Sheet(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLSmart_20_Find_20_Window_2F_Element_20_Add(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLSmart_20_Find_20_Window_2F_Element_20_Message(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLSmart_20_Find_20_Window_2F_Close(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPLSmart_20_Find_20_Window_2F_Update_20_Title(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPLSmart_20_Find_20_Window_2F_Reinstall_20_Data(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPLSmart_20_Find_20_Options_20_Sheet_2F_Open(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLSmart_20_Find_20_Options_20_Sheet_2F_Open_20_Controls(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPLSmart_20_Find_20_Options_20_Sheet_2F_Set_20_Prompt_20_Text(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLSmart_20_Find_20_Options_20_Sheet_2F_Find_20_Find_20_Text(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLSmart_20_Find_20_Options_20_Sheet_2F_Find_20_Type_20_Popup(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLSmart_20_Find_20_Options_20_Sheet_2F_Find_20_Option_20_Popup(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLSmart_20_Find_20_Options_20_Sheet_2F_Find_20_Ignore_20_Case_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLSmart_20_Find_20_Options_20_Sheet_2F_Find_20_Prompt_20_Text(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLSmart_20_Find_20_Options_20_Sheet_2F_Find_20_Replace_20_Text(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLSmart_20_Find_20_Options_20_Sheet_2F_Find_20_Busy_20_Arrows(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLSmart_20_Find_20_Options_20_Sheet_2F_CE_20_HICommand_20_Process(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_VPLSmart_20_Find_20_Options_20_Sheet_2F_Find_20_Direction(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_VPLSmart_20_Find_20_Options_20_Sheet_2F_HIC_20_Find_20_Find(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPLSmart_20_Find_20_Options_20_Sheet_2F_HIC_20_Replace_20_And_20_Find(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPLSmart_20_Find_20_Options_20_Sheet_2F_Start_20_Busy(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPLSmart_20_Find_20_Options_20_Sheet_2F_Finish_20_Busy(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPLSmart_20_Find_20_Options_20_Sheet_2F_Find_20_Exact_20_Match_3F_(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLSmart_20_Find_20_Options_20_Sheet_2F_Get_20_Project_20_Data(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLSmart_20_Find_20_Options_20_Sheet_2F_Update_20_Operation_20_Types(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPLSmart_20_Find_20_Options_20_Sheet_2F_Close(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPLSmart_20_Find_20_Options_20_Sheet_2F_Get_20_Current_20_Find(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_VPLSmart_20_Find_20_Options_20_Sheet_2F_HIC_20_OK(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPLSmart_20_Find_20_Options_20_Sheet_2F_HIC_20_Cancel(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_VPLSmart_20_Find_20_Options_20_Sheet_2F_Element_20_Add(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Create_20_Class_20_Window_2F_Open(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Create_20_Class_20_Window_2F_Open_20_Controls(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Create_20_Class_20_Window_2F_Find_20_Name_20_Text(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Create_20_Class_20_Window_2F_Find_20_Sections_20_Popup(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Create_20_Class_20_Window_2F_Find_20_Parent_20_ComboBox(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Create_20_Class_20_Window_2F_CE_20_HICommand_20_Process(V_Environment, enum boolType *, Nat4,V_Object,V_Object,V_Object,V_Object,V_Object *);
enum opTrigger vpx_method_Create_20_Class_20_Window_2F_HIC_20_Cancel(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Create_20_Class_20_Window_2F_HIC_20_OK(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Create_20_Class_20_Window_2F_Close(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Create_20_Class_20_Window_2F_Finish_20_Modal(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_Create_20_Class_20_Window_2F_Run_20_Modal(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Create_20_Class_20_Window_2F_Get_20_Project(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_Create_20_Class_20_Window_2F_Set_20_Project(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_Create_20_Class_20_Window_2F_Create_20_Class(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_HIPopupButton_20_Control_2F_Get_20_MenuRef(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_HIPopupButton_20_Control_2F_Set_20_MenuRef(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_HIPopupButton_20_Control_2F_Get_20_Menu_20_ID(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_HIPopupButton_20_Control_2F_Set_20_Menu_20_ID(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_HIPopupButton_20_Control_2F_Get_20_Menu_20_Items(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_HIPopupButton_20_Control_2F_Set_20_Menu_20_Items(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_HIPopupButton_20_Control_2F_Get_20_Selected(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_HIPopupButton_20_Control_2F_Set_20_Selected(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_HIPopupButton_20_Control_2F_Update_20_Menu(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_HIPopupButton_20_Control_2F_Update_20_Menu_20_Items(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_HIPopupButton_20_Control_2F_Get_20_Value_20_Item(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_HIComboBox_20_Control_2F_Get_20_Item_20_List(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum opTrigger vpx_method_HIComboBox_20_Control_2F_Set_20_Item_20_List(V_Environment, enum boolType *, Nat4,V_Object,V_Object);
enum opTrigger vpx_method_HIComboBox_20_Control_2F_Update_20_List(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_HIComboBox_20_Control_2F_Update_20_Item_20_List(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_HIComboBox_20_Control_2F_Populate_20_Item_20_List(V_Environment, enum boolType *, Nat4,V_Object);
enum opTrigger vpx_method_HIComboBox_20_Control_2F_Get_20_Current_20_Text(V_Environment, enum boolType *, Nat4,V_Object,V_Object *);
enum classConstantType {
kVPXClass_Application,
kVPXClass_Key_20_Sort_20_Helper,
kVPXClass_Point,
kVPXClass_Rectangle,
kVPXClass_Service_20_Manager,
kVPXClass_Service_20_Abstract,
kVPXClass_Desktop_20_Service,
kVPXClass_Marten_20_Selection_20_PlugIn_20_Service,
kVPXClass_Marten_20_Selection_20_PlugIn,
kVPXClass_Marten_20_Selection_20_Open_20_URL,
kVPXClass_Marten_20_Selection_20_Search_20_Info,
kVPXClass_Marten_20_Selection_20_Run_20_Script,
kVPXClass_Method_20_Call,
kVPXClass_Specifier,
kVPXClass_Input_20_Specifier,
kVPXClass_Universal_20_Method_20_Input_20_Specifier,
kVPXClass_Output_20_Specifier,
kVPXClass_Attribute_20_Input_20_Specifier,
kVPXClass_Attribute_20_Output_20_Specifier,
kVPXClass_Attachment_20_Specifier,
kVPXClass_Attribute_20_Specifier,
kVPXClass_Method_20_Callback,
kVPXClass_Old_20_Apple_20_Event_20_Callback,
kVPXClass_Event_20_Service,
kVPXClass_VPLIDE_20_Event_20_Service,
kVPXClass_Apple_20_Event,
kVPXClass_AE_20_Descriptor,
kVPXClass_Apple_20_Event_20_Callback,
kVPXClass_AEParam_20_Specifier,
kVPXClass_AE_20_Send,
kVPXClass_AE_20_Target,
kVPXClass_OSA_20_Compile,
kVPXClass_EventRef,
kVPXClass_Carbon_20_Event_20_Callback,
kVPXClass_Carbon_20_Timer_20_Callback,
kVPXClass_Carbon_20_Idle_20_Timer_20_Callback,
kVPXClass_Carbon_20_Event_20_Target_20_Proxy,
kVPXClass_Pasteboard_20_Service,
kVPXClass_Pasteboard,
kVPXClass_Pasteboard_20_Notifier,
kVPXClass_Pasteboard_20_Item,
kVPXClass_Pasteboard_20_Flavor,
kVPXClass_Pasteboard_20_Flavor_20_Text,
kVPXClass_Pasteboard_20_Flavor_20_Text_20_MacRoman,
kVPXClass_Pasteboard_20_Flavor_20_Instance,
kVPXClass_Pasteboard_20_Flavor_20_Instance_20_Case,
kVPXClass_Pasteboard_20_Flavor_20_Instance_20_List,
kVPXClass_Pasteboard_20_Flavor_20_Instance_20_Value,
kVPXClass_Pasteboard_20_Flavor_20_Archive,
kVPXClass_Pasteboard_20_Flavor_20_Archive_20_List_20_Helper_20_Name,
kVPXClass_Pasteboard_20_Flavor_20_Archive_20_URL,
kVPXClass_Pasteboard_20_Flavor_20_Archive_20_Text,
kVPXClass_Pasteboard_20_Flavor_20_Object_20_Value,
kVPXClass_Pasteboard_20_Flavor_20_Object_20_Operations,
kVPXClass_Pasteboard_20_Flavor_20_File_20_URL,
kVPXClass_Pasteboard_20_Flavor_20_Trash_20_Label,
kVPXClass_Abstract_20_Pasteboard_20_Handler,
kVPXClass_Window_20_Pasteboard_20_Handler,
kVPXClass_List_20_Window_20_Pasteboard_20_Handler,
kVPXClass_Object_20_Archive_20_Abstract,
kVPXClass_List_20_Item_20_Archive,
kVPXClass_Value_20_Item_20_Archive,
kVPXClass_Operation_20_Item_20_Archive,
kVPXClass_Pasteboard_20_Flavor_20_Archive_20_List,
kVPXClass_Pasteboard_20_Flavor_20_Archive_20_Value,
kVPXClass_Pasteboard_20_Flavor_20_Archive_20_Operations,
kVPXClass_Abstract_20_Drag_202620_Drop_20_Reference,
kVPXClass_Drop_20_Reference,
kVPXClass_Drag_20_Reference,
kVPXClass_Abstract_20_Drag_20_Handler,
kVPXClass_Window_20_Drag_20_Handler,
kVPXClass_Print_20_Job_20_Abstract,
kVPXClass_PM_20_Session,
kVPXClass_PM_20_Format,
kVPXClass_PM_20_Settings,
kVPXClass_MacOS_20_File_20_Reference,
kVPXClass_MacOS_20_Folder_20_Reference,
kVPXClass_MacOS_20_Volume_20_Reference,
kVPXClass_MacOS_20_File_20_Iterator,
kVPXClass_Folder_20_Search,
kVPXClass_File_20_Process,
kVPXClass_MacOS_20_Bundle_20_Reference,
kVPXClass_Navigation_20_Reply,
kVPXClass_Nav_20_Choose_20_Volume_20_Dialog,
kVPXClass_Nav_20_Ask_20_Save_20_Changes_20_Dialog,
kVPXClass_Navigation_20_Services_20_Window,
kVPXClass_Nav_20_New_20_Folder_20_Dialog,
kVPXClass_Nav_20_Object_20_Filter_20_Dialog,
kVPXClass_Nav_20_Choose_20_Folder_20_Dialog,
kVPXClass_Nav_20_Preview_20_Filter_20_Dialog,
kVPXClass_Nav_20_Get_20_File_20_Dialog,
kVPXClass_Nav_20_Put_20_File_20_Dialog,
kVPXClass_Nav_20_Choose_20_Object_20_Dialog,
kVPXClass_Nav_20_Choose_20_File_20_Dialog,
kVPXClass_Nav_20_Ask_20_Discard_20_Changes_20_Dialog,
kVPXClass_Nav_20_Ask_20_Review_20_Documents_20_Dialog,
kVPXClass_Nav_20_Dialog,
kVPXClass_MacOS_20_HIObject_20_Service,
kVPXClass_HIObject_20_Class,
kVPXClass_HIObject_20_Class_20_Callback,
kVPXClass_HIObject,
kVPXClass_HIToolbar,
kVPXClass_HIToolbar_20_Item_20_Object,
kVPXClass_HIToolbar_20_Standard_20_Item,
kVPXClass_HIToolbar_20_BuiltIn_20_Item,
kVPXClass_HIToolbar_20_Item,
kVPXClass_HIToolbar_20_Custom_20_Item,
kVPXClass_HIToolbar_20_Control_20_Item,
kVPXClass_HIToolbar_20_HIView_20_Item,
kVPXClass_HIView,
kVPXClass_HIView_20_Scrollable_20_View,
kVPXClass_MacOS_20_Icon_20_Service,
kVPXClass_MacOS_20_Icon_20_Reference,
kVPXClass_MacOS_20_Icon_20_Registrar,
kVPXClass_MacOS_20_Icon_20_icns_20_File_20_Registrar,
kVPXClass_CF_20_Base,
kVPXClass_CF_20_Array,
kVPXClass_CF_20_Bag,
kVPXClass_CF_20_Boolean,
kVPXClass_CF_20_Bundle,
kVPXClass_CF_20_Data,
kVPXClass_CF_20_Date,
kVPXClass_CF_20_Dictionary,
kVPXClass_CF_20_Number,
kVPXClass_CF_20_PlugIn,
kVPXClass_CF_20_Set,
kVPXClass_CF_20_String,
kVPXClass_CF_20_TimeZone,
kVPXClass_CF_20_Tree,
kVPXClass_CF_20_URL,
kVPXClass_CF_20_UUID,
kVPXClass_CF_20_XMLNode,
kVPXClass_CF_20_XMLParser,
kVPXClass_CF_20_Absolute_20_Time,
kVPXClass_CG_20_Context,
kVPXClass_CG_20_Path,
kVPXClass_CG_20_Bitmap_20_Context,
kVPXClass_Window,
kVPXClass_Sheet_20_Window,
kVPXClass_Drawer_20_Window,
kVPXClass_Document_20_Window,
kVPXClass_Window_20_Control,
kVPXClass_Static_20_Text_20_Control,
kVPXClass_Live_20_Action_20_Control,
kVPXClass_HIView_20_Control,
kVPXClass_Progress_20_Bar_20_Control,
kVPXClass_Edit_20_Unicode_20_Text_20_Control,
kVPXClass_HISearch_20_Field_20_Control,
kVPXClass_HITextView_20_Control,
kVPXClass_Databrowser_20_Control,
kVPXClass_Databrowser_20_Callbacks,
kVPXClass_Databrowser_20_Item_20_Callbacks,
kVPXClass_Databrowser_20_Item_20_Callback,
kVPXClass_Databrowser_20_Item_20_Data,
kVPXClass_Databrowser_20_Item_20_Root,
kVPXClass_Databrowser_20_List_20_Column,
kVPXClass_Databrowser_20_Viewer,
kVPXClass_Databrowser_20_List_20_View,
kVPXClass_Databrowser_20_Column_20_View,
kVPXClass_MP_20_Task_20_Service,
kVPXClass_MP_20_Task,
kVPXClass_MP_20_Shell_20_Command_20_Task,
kVPXClass_MP_20_Activity_20_Stage_20_Task,
kVPXClass_MPT_20_PFAB_20_Compile_20_Sources,
kVPXClass_Activity_20_Service,
kVPXClass_Activity_20_Abstract,
kVPXClass_Activity_20_Progress,
kVPXClass_Activity_20_Progress_20_Window,
kVPXClass_Activity_20_Staged,
kVPXClass_Activity_20_Stage,
kVPXClass_Activity_20_Test_20_Data,
kVPXClass_Activity_20_Staged_20_Test,
kVPXClass_Activity_20_Counting_20_Stage,
kVPXClass_Marten_20_Application,
kVPXClass_VPLAbout_20_Window,
kVPXClass_VPLAbout_20_Version_20_Text,
kVPXClass_VPLInfo_20_Window,
kVPXClass_OLD_20_Info_20_Window,
kVPXClass_Info_20_HIToolbar,
kVPXClass_VPLInfo_20_View,
kVPXClass_VPLInfo_20_Text,
kVPXClass_VPLInfo_20_Page_20_Description,
kVPXClass_VPLInfo_20_Page_20_Contents,
kVPXClass_VPLProject_20_Info_20_Service,
kVPXClass_VPLProject_20_Info,
kVPXClass_VPLProject_20_Info_20_List,
kVPXClass_VPLProject_20_Info_20_Tools,
kVPXClass_VPLProject_20_Info_20_Messages,
kVPXClass_Recents_20_Menu_20_Service,
kVPXClass_VPLInfo_20_Page_20_Code_20_Checks,
kVPXClass_Preferences_20_Window,
kVPXClass_Project_20_Viewer_20_Window,
kVPXClass_Project_20_Window_20_HIToolbar,
kVPXClass_Project_20_Databrowser_20_Control,
kVPXClass_Project_20_DB_20_Item_20_Data,
kVPXClass_Project_20_DB_20_Item_20_Root,
kVPXClass_Value_20_Clipboard,
kVPXClass_Project_20_DB_20_Method_20_Data,
kVPXClass_Project_20_DB_20_Case_20_Data,
kVPXClass_Project_20_Open_20_Activity,
kVPXClass_Project_20_File_20_Activity_20_Stage,
kVPXClass_POAS_20_Load_20_File,
kVPXClass_POAS_20_Find_20_Files,
kVPXClass_POAS_20_Read_20_Primitives,
kVPXClass_POAS_20_Read_20_Sections,
kVPXClass_POAS_20_Open_20_Project,
kVPXClass_POAS_20_Open_20_Sections,
kVPXClass_POAS_20_Resolve_20_References,
kVPXClass_POAS_20_Post_20_Load,
kVPXClass_POAS_20_Update_20_Classes,
kVPXClass_POAS_20_Update_20_Persistents,
kVPXClass_POAS_20_Install_20_Tools,
kVPXClass_POAS_20_Copy_20_Resources,
kVPXClass_POAS_20_Open_20_Editor,
kVPXClass_POAS_20_Name_20_Application,
kVPXClass_PFAS_20_Locate_20_Files_20_Manually,
kVPXClass_PFAS_20_Nav_20_Locate_20_Files_20_Dialog,
kVPXClass_Project_20_Save_20_Activity,
kVPXClass_PFAS_20_Find_20_Type_20_Files,
kVPXClass_PFAS_20_Find_20_Files_20_Manually,
kVPXClass_PFAS_20_Write_20_Files,
kVPXClass_PFAS_20_Update_20_Window_20_Stage,
kVPXClass_Project_20_Update_20_Activity,
kVPXClass_PUAS_20_Update_20_Values,
kVPXClass_PUAS_20_Update_20_VPZ_20_File,
kVPXClass_PUAS_20_Update_20_Bundles,
kVPXClass_PUAS_20_Update_20_Resources,
kVPXClass_Pipe_20_Command,
kVPXClass_Pipe_20_Command_20_Option,
kVPXClass_GCC_20_Command,
kVPXClass_LIPO_20_Command,
kVPXClass_Project_20_Build_20_Activity,
kVPXClass_PFAB_20_Build_20_Settings,
kVPXClass_PFAB_20_Find_20_Type_20_Files,
kVPXClass_PFAB_20_Find_20_Files_20_Manually,
kVPXClass_PFAB_20_Compile_20_Sources_20_As,
kVPXClass_PFAB_20_Packager_20_Preflight,
kVPXClass_PFAB_20_Update_20_Resources,
kVPXClass_PFAB_20_Update_20_Frameworks,
kVPXClass_PFAB_20_Packager_20_Create_20_Info,
kVPXClass_PFAB_20_Link_20_Sources_20_As,
kVPXClass_PFAB_20_Lipo_20_Binaries,
kVPXClass_PFAB_20_Packager_20_Postflight,
kVPXClass_PFAB_20_Build_20_Summary,
kVPXClass_VPLProject_20_AppBuildSummary_20_Sheet,
kVPXClass_VPLProject_20_AppBuild_20_Sheet,
kVPXClass_VPLProject_20_Product_20_Name_20_Control,
kVPXClass_Bundle_20_Packager_20_State,
kVPXClass_Bundle_20_Packager_20_Form,
kVPXClass_MacOS_20_Bundle_20_Form,
kVPXClass_Standard_20_Platform_20_Binary,
kVPXClass_MacOS_20_Platform_20_Application,
kVPXClass_Bundle_20_Packager_20_SDK_20_Service,
kVPXClass_Bundle_20_Packager_20_SDK,
kVPXClass_VPLProject_20_AppBuild_20_Icon_20_Well,
kVPXClass_Case_20_Data,
kVPXClass_Case_20_Comment_20_Data,
kVPXClass_Attribute_20_Data,
kVPXClass_Class_20_Data,
kVPXClass_Class_20_Attribute_20_Data,
kVPXClass_Execution_20_Thread,
kVPXClass_Debug_20_State,
kVPXClass_Thread_20_Task,
kVPXClass_Interpreter,
kVPXClass_Set_20_Instance_20_Task,
kVPXClass_Persistent_20_Data,
kVPXClass_Primitive_20_Data,
kVPXClass_Primitives_20_Data,
kVPXClass_VPL_20_Data,
kVPXClass_Resource_20_File_20_Data,
kVPXClass_Input_2D_Output,
kVPXClass_Root,
kVPXClass_Terminal,
kVPXClass_List_20_Data,
kVPXClass_Helper_20_Data,
kVPXClass_Item_20_Data,
kVPXClass_Data_20_Controller,
kVPXClass_Operation_20_Data,
kVPXClass_Operation_20_Text,
kVPXClass_Project_20_Data,
kVPXClass_Project_20_Message,
kVPXClass_Project_20_Run_20_Task,
kVPXClass_Marten_20_Project_20_Template,
kVPXClass_Project_20_Settings_20_Locator,
kVPXClass_Section_20_Data,
kVPXClass_VPXCPXParseTag,
kVPXClass_Universal_20_Data,
kVPXClass_Tool_20_Tracker,
kVPXClass_Stack_20_UI_20_Service,
kVPXClass_Stack_20_Data,
kVPXClass_VPLProject_20_AppName_20_Sheet,
kVPXClass_Instance_20_Value_20_Data,
kVPXClass_Attribute_20_Value_20_Data,
kVPXClass_List_20_Value_20_Data,
kVPXClass_VPLCEWindow,
kVPXClass_VPLWindow,
kVPXClass_VPLEvent,
kVPXClass_VPLWindow_20_Item,
kVPXClass_VPLView,
kVPXClass_VPLControl,
kVPXClass_VPLScroll_20_Bar,
kVPXClass_VPLEdit_20_Text,
kVPXClass_VPLEntry_20_Text,
kVPXClass_VPLText_20_Editor,
kVPXClass_VPLHIText_20_Editor,
kVPXClass_VPLHIText_20_Item_20_Editor,
kVPXClass_VPLHICombo_20_Box_20_Editor,
kVPXClass_VPLFramedRegion,
kVPXClass_VPLGraphic,
kVPXClass_VPLLine,
kVPXClass_VPLOval,
kVPXClass_VPLRectangle,
kVPXClass_VPLRoundRectangle,
kVPXClass_VPLText,
kVPXClass_VPLGraphic_20_Item,
kVPXClass_Item_20_Edit_20_Text,
kVPXClass_List_20_Item,
kVPXClass_List_20_View,
kVPXClass_List_20_Window,
kVPXClass_Name_20_Edit_20_Text,
kVPXClass_Value_20_Edit_20_Text,
kVPXClass_Default_20_List_20_Graphic,
kVPXClass_List_20_Window_20_Drag_20_Handler,
kVPXClass_Basic_20_IO_20_Graphic,
kVPXClass_Continue_20_Failure_20_Graphic,
kVPXClass_Default_20_Graphic,
kVPXClass_Default_20_Oval_20_Graphic,
kVPXClass_External_20_Get_20_Graphic,
kVPXClass_External_20_Set_20_Graphic,
kVPXClass_Fail_20_Failure_20_Graphic,
kVPXClass_Fail_20_Success_20_Graphic,
kVPXClass_Finish_20_Failure_20_Graphic,
kVPXClass_Finish_20_Success_20_Graphic,
kVPXClass_Get_20_Graphic,
kVPXClass_InputBar_20_Graphic,
kVPXClass_Instance_20_Graphic,
kVPXClass_List_20_IO_20_Graphic,
kVPXClass_Local_20_Graphic,
kVPXClass_Loop_20_IO_20_Root_20_Graphic,
kVPXClass_Loop_20_IO_20_Terminal_20_Graphic,
kVPXClass_Next_20_Case_20_Failure_20_Graphic,
kVPXClass_Next_20_Case_20_Success_20_Graphic,
kVPXClass_OutputBar_20_Graphic,
kVPXClass_Persistent_20_Graphic,
kVPXClass_Primitive_20_Graphic,
kVPXClass_Procedure_20_Graphic,
kVPXClass_Repeat_20_Graphic,
kVPXClass_Set_20_Graphic,
kVPXClass_Terminate_20_Failure_20_Graphic,
kVPXClass_Terminate_20_Success_20_Graphic,
kVPXClass_Universal_20_Graphic,
kVPXClass_Constant_20_Match_20_Graphic,
kVPXClass_External_20_CM_20_Graphic,
kVPXClass_Super_20_Graphic,
kVPXClass_Breakpoint_20_Graphic,
kVPXClass_Inject_20_Graphic,
kVPXClass_Evaluate_20_Graphic,
kVPXClass_Default_20_Triangle_20_Graphic,
kVPXClass_Case_20_View,
kVPXClass_Case_20_Window,
kVPXClass_Control_20_Item,
kVPXClass_IO_20_Item,
kVPXClass_Operation_20_Item,
kVPXClass_Tidy_20_Band,
kVPXClass_Comment_20_Item,
kVPXClass_Comment_20_Edit_20_Text,
kVPXClass_Comment_20_Graphic,
kVPXClass_Case_20_Drawer_20_Window,
kVPXClass_Case_20_Drawer_20_Databrowser_20_Control,
kVPXClass_Case_20_Select_20_View,
kVPXClass_Case_20_Select_20_Item,
kVPXClass_Case_20_Select_20_Graphic,
kVPXClass_Case_20_Window_20_Pasteboard_20_Handler,
kVPXClass_Case_20_Window_20_Drag_20_Handler,
kVPXClass_Case_20_Window_20_Drag_20_View,
kVPXClass_Old_20_Case_20_Window,
kVPXClass_VPLSelect_20_Window,
kVPXClass_Select_20_Item,
kVPXClass_Select_20_View,
kVPXClass_Select_20_Banner_20_View,
kVPXClass_Select_20_Result_20_Item,
kVPXClass_Select_20_Result_20_Row,
kVPXClass_List_20_Value_20_Window,
kVPXClass_Value_20_View,
kVPXClass_Value_20_Item,
kVPXClass_Value_20_Text,
kVPXClass_Name_20_Text,
kVPXClass_Value_20_Text_20_Edit_20_Text,
kVPXClass_Value_20_Text_20_Item,
kVPXClass_Value_20_HIToolbar,
kVPXClass_HIPushbutton_20_Toolbar_20_Item,
kVPXClass_HIPopupButton_20_Toolbar_20_Item,
kVPXClass_HISearchField_20_Toolbar_20_Item,
kVPXClass_Value_20_Type_20_Toolbar_20_Item,
kVPXClass_HISegmentedView_20_Toolbar_20_Item,
kVPXClass_HISegmentedView_20_Segment,
kVPXClass_Value_20_Window_20_Pasteboard_20_Handler,
kVPXClass_Value_20_Window_20_Drag_20_Handler,
kVPXClass_Debug_20_Window,
kVPXClass_Debug_20_View,
kVPXClass_Debug_20_Item,
kVPXClass_Debug_20_IO_20_Item,
kVPXClass_Debug_20_Control_20_Item,
kVPXClass_Debug_20_Comment_20_Item,
kVPXClass_Stack_20_Window,
kVPXClass_Stack_20_Item,
kVPXClass_Stack_20_View,
kVPXClass_VPLFind_20_Window,
kVPXClass_Find_20_State,
kVPXClass_Find_20_Result_20_Data,
kVPXClass_Documentation_20_Data,
kVPXClass_Search_20_Result_20_Data,
kVPXClass_Watchpoint_20_Data,
kVPXClass_VPLSmart_20_Find_20_Window,
kVPXClass_VPLSmart_20_Find_20_Options_20_Sheet,
kVPXClass_Create_20_Class_20_Window,
kVPXClass_HIPopupButton_20_Control,
kVPXClass_HIComboBox_20_Control
};
enum methodConstantType {
kVPXMethod__22_Check_22_,
kVPXMethod__22_LTrim_22_,
kVPXMethod__22_Parse_22_,
kVPXMethod__22_Prefix_22_,
kVPXMethod__22_RTrim_22_,
kVPXMethod__22_Replace_22_,
kVPXMethod__22_Split_20_At_22_,
kVPXMethod__22_Suffix_22_,
kVPXMethod__22_Trim_22_,
kVPXMethod__2822_ALL_20_IN_2229_,
kVPXMethod__2822_All_20_In_2229_,
kVPXMethod__28_Average_29_,
kVPXMethod__28_Check_20_Bounds_29_,
kVPXMethod__28_Check_29_,
kVPXMethod__28_Detach_20_Item_29_,
kVPXMethod__28_Ends_29_,
kVPXMethod__28_Flatten_29_,
kVPXMethod__28_From_20_String_29_,
kVPXMethod__28_Get_20_Setting_29_,
kVPXMethod__28_One_29_,
kVPXMethod__28_Remove_20_Setting_29_,
kVPXMethod__28_Safe_20_Get_29_,
kVPXMethod__28_Safe_20_Set_2129_,
kVPXMethod__28_Safe_20_Split_29_,
kVPXMethod__28_Set_20_Setting_29_,
kVPXMethod__28_Sum_29_,
kVPXMethod__28_To_20_Block_29_,
kVPXMethod__28_To_20_String_29_,
kVPXMethod__28_Unique_29_,
kVPXMethod__28_Without_29_,
kVPXMethod__28_bit_2D_or_29_,
kVPXMethod_AE_20_Go_20_To_20_URL,
kVPXMethod_AE_20_Open_20_Application,
kVPXMethod_AE_20_Open_20_Documents,
kVPXMethod_AE_20_Quit_20_Application,
kVPXMethod_AE_20_Reopen_20_Application,
kVPXMethod_AEDesc_20_Copy_20_Data,
kVPXMethod_AH_20_Create_20_Anchor,
kVPXMethod_AH_20_Find_20_Help_20_Book_20_Name,
kVPXMethod_AH_20_Goto_20_Page,
kVPXMethod_AH_20_Lookup_20_Anchor,
kVPXMethod_AH_20_Search,
kVPXMethod_Abort,
kVPXMethod_Accept_20_Drop,
kVPXMethod_Accept_20_Flavors,
kVPXMethod_Activate,
kVPXMethod_Activated,
kVPXMethod_Add,
kVPXMethod_Add_20_Arc,
kVPXMethod_Add_20_Arc_20_Rect,
kVPXMethod_Add_20_Arc_20_To_20_Point,
kVPXMethod_Add_20_Architecture,
kVPXMethod_Add_20_Attachment_20_To_20_Callback,
kVPXMethod_Add_20_Burst,
kVPXMethod_Add_20_Column_20_Number,
kVPXMethod_Add_20_Content_20_Items,
kVPXMethod_Add_20_Corners,
kVPXMethod_Add_20_Current_20_Task,
kVPXMethod_Add_20_DBColumns_20_Proper,
kVPXMethod_Add_20_Diamond,
kVPXMethod_Add_20_Editor,
kVPXMethod_Add_20_Files_20_To_20_Project,
kVPXMethod_Add_20_Flavors,
kVPXMethod_Add_20_Frame_20_To_20_Path,
kVPXMethod_Add_20_Framework_20_Locations,
kVPXMethod_Add_20_Initial_20_Task,
kVPXMethod_Add_20_Item,
kVPXMethod_Add_20_Item_20_Data,
kVPXMethod_Add_20_Items,
kVPXMethod_Add_20_Key_20_Value,
kVPXMethod_Add_20_Line,
kVPXMethod_Add_20_Line_20_To_20_Point,
kVPXMethod_Add_20_Methods,
kVPXMethod_Add_20_Minimum_20_MacOSX,
kVPXMethod_Add_20_Options,
kVPXMethod_Add_20_Oval,
kVPXMethod_Add_20_Pasteboards,
kVPXMethod_Add_20_Path,
kVPXMethod_Add_20_Point,
kVPXMethod_Add_20_Primitives_20_File,
kVPXMethod_Add_20_Project,
kVPXMethod_Add_20_Project_20_Parameter_20_Keys,
kVPXMethod_Add_20_Quit_20_Now,
kVPXMethod_Add_20_Rect,
kVPXMethod_Add_20_Resource_20_File,
kVPXMethod_Add_20_Root,
kVPXMethod_Add_20_Rounded_20_Rect,
kVPXMethod_Add_20_SDK_20_Root,
kVPXMethod_Add_20_Section_20_Data,
kVPXMethod_Add_20_Stack,
kVPXMethod_Add_20_Star,
kVPXMethod_Add_20_Sub_20_Class,
kVPXMethod_Add_20_Subview,
kVPXMethod_Add_20_Terminal,
kVPXMethod_Add_20_To_20_List_20_Data,
kVPXMethod_Add_20_Triangle,
kVPXMethod_Add_20_View,
kVPXMethod_Add_20_Window,
kVPXMethod_Adjust_20_Control_20_Frames,
kVPXMethod_Adjust_20_Frame,
kVPXMethod_Adjust_20_Origin,
kVPXMethod_Advance_20_Focus,
kVPXMethod_Advance_20_Stack,
kVPXMethod_After_20_Drawing,
kVPXMethod_After_20_Drawing_20_CG,
kVPXMethod_After_20_Import,
kVPXMethod_Align_20_Content,
kVPXMethod_Align_20_Operation,
kVPXMethod_Allocate_20_Base_20_Class_20_ID,
kVPXMethod_Allocate_20_Class_20_ID,
kVPXMethod_Any_20_Drop_20_Flavors_3F_,
kVPXMethod_Append,
kVPXMethod_Append_20_Bytes,
kVPXMethod_Append_20_Identifier,
kVPXMethod_Append_20_String,
kVPXMethod_Append_20_Value,
kVPXMethod_Archive_20_Postflight,
kVPXMethod_Archive_20_Preflight,
kVPXMethod_Arrow_20_Key,
kVPXMethod_Async_20_Delay,
kVPXMethod_Async_20_Repeat,
kVPXMethod_Async_20_Schedule_20_Callback,
kVPXMethod_Attach_20_Window,
kVPXMethod_Auto_20_Type,
kVPXMethod_Beep,
kVPXMethod_Before_20_Drawing,
kVPXMethod_Before_20_Drawing_20_CG,
kVPXMethod_Begin,
kVPXMethod_Begin_20_CGContext,
kVPXMethod_Begin_20_Document,
kVPXMethod_Begin_20_For_20_CGrafPort,
kVPXMethod_Begin_20_Page,
kVPXMethod_Begin_20_Path,
kVPXMethod_Begin_20_Service,
kVPXMethod_Begin_20_Window,
kVPXMethod_Between,
kVPXMethod_Between_20_Bounds,
kVPXMethod_Between_20_Strings,
kVPXMethod_Between_20_Wrap,
kVPXMethod_Block_20_Allocate,
kVPXMethod_Block_20_Array_20_New,
kVPXMethod_Block_20_Array_20_To_20_List,
kVPXMethod_Block_20_Copy,
kVPXMethod_Block_20_Free,
kVPXMethod_Block_20_Size,
kVPXMethod_Boolean_20_To_20_Integer,
kVPXMethod_Bounds_20_Changed,
kVPXMethod_Buffer_20_Initialization,
kVPXMethod_Build_20_Project,
kVPXMethod_Bulk_20_Pass,
kVPXMethod_Bundle_20_Primitives,
kVPXMethod_C_20_Action_20_To_20_VPL_20_Action,
kVPXMethod_C_20_Boolean_20_To_20_VPL_20_Boolean,
kVPXMethod_C_20_Code_20_Export,
kVPXMethod_C_20_Code_20_Export_20_Action,
kVPXMethod_C_20_Code_20_Export_20_Attributes,
kVPXMethod_C_20_Code_20_Export_20_Breakpoint,
kVPXMethod_C_20_Code_20_Export_20_Cases,
kVPXMethod_C_20_Code_20_Export_20_Classes,
kVPXMethod_C_20_Code_20_Export_20_Connection,
kVPXMethod_C_20_Code_20_Export_20_Connections,
kVPXMethod_C_20_Code_20_Export_20_Header,
kVPXMethod_C_20_Code_20_Export_20_Inject,
kVPXMethod_C_20_Code_20_Export_20_Input,
kVPXMethod_C_20_Code_20_Export_20_Insert_20_Roots,
kVPXMethod_C_20_Code_20_Export_20_Insert_20_Terminals,
kVPXMethod_C_20_Code_20_Export_20_Operations,
kVPXMethod_C_20_Code_20_Export_20_Output,
kVPXMethod_C_20_Code_20_Export_20_Repeat,
kVPXMethod_C_20_Code_20_Export_20_Roots,
kVPXMethod_C_20_Code_20_Export_20_Source,
kVPXMethod_C_20_Code_20_Export_20_Super,
kVPXMethod_C_20_Code_20_Export_20_Synchros,
kVPXMethod_C_20_Code_20_Export_20_Terminals,
kVPXMethod_C_20_Code_20_Export_20_Type,
kVPXMethod_C_20_Code_20_Export_20_Universals,
kVPXMethod_C_20_Code_20_Export_20_Value,
kVPXMethod_C_20_Code_20_Footer,
kVPXMethod_C_20_Code_20_Footer_20_Cases,
kVPXMethod_C_20_Code_20_Header,
kVPXMethod_C_20_Code_20_Header_20_Cases,
kVPXMethod_C_20_Code_20_Load_20_All,
kVPXMethod_C_20_Code_20_Load_20_Classes,
kVPXMethod_C_20_Code_20_Load_20_Persistents,
kVPXMethod_C_20_Code_20_Load_20_Project,
kVPXMethod_C_20_Code_20_Load_20_Universals,
kVPXMethod_C_20_Code_20_Primitive_20_Includes,
kVPXMethod_C_20_Code_20_Primitives,
kVPXMethod_C_20_Code_20_Section_20_Includes,
kVPXMethod_C_20_Code_20_Sections,
kVPXMethod_C_20_Code_20_Super,
kVPXMethod_C_20_Code_20_Value,
kVPXMethod_C_20_Control_20_To_20_VPL_20_Control,
kVPXMethod_C_20_File_20_Name,
kVPXMethod_C_20_Mode_20_To_20_VPL_20_Type,
kVPXMethod_C_20_Save,
kVPXMethod_C_20_String_20_To_20_VPL_20_String,
kVPXMethod_CE_20_Bounds_20_Changed,
kVPXMethod_CE_20_Control_20_Activate,
kVPXMethod_CE_20_Control_20_Bounds_20_Changed,
kVPXMethod_CE_20_Control_20_Class_20_Event,
kVPXMethod_CE_20_Control_20_Click,
kVPXMethod_CE_20_Control_20_Deactivate,
kVPXMethod_CE_20_Control_20_Dispose,
kVPXMethod_CE_20_Control_20_Draw,
kVPXMethod_CE_20_Control_20_Enabled_20_State_20_Changed,
kVPXMethod_CE_20_Control_20_Event,
kVPXMethod_CE_20_Control_20_Get_20_Data,
kVPXMethod_CE_20_Control_20_Get_20_Focus_20_Part,
kVPXMethod_CE_20_Control_20_Get_20_Part_20_Region,
kVPXMethod_CE_20_Control_20_Hilite_20_Changed,
kVPXMethod_CE_20_Control_20_Hit,
kVPXMethod_CE_20_Control_20_Hit_20_Test,
kVPXMethod_CE_20_Control_20_Initialize,
kVPXMethod_CE_20_Control_20_Set_20_Cursor,
kVPXMethod_CE_20_Control_20_Set_20_Data,
kVPXMethod_CE_20_Control_20_Set_20_Focus_20_Part,
kVPXMethod_CE_20_Control_20_Simulate_20_Hit,
kVPXMethod_CE_20_Control_20_Text_20_Input,
kVPXMethod_CE_20_Control_20_Title_20_Changed,
kVPXMethod_CE_20_Control_20_Value_20_Field_20_Changed,
kVPXMethod_CE_20_Get_20_Size_20_Constraints,
kVPXMethod_CE_20_HICommand_20_Dispatch,
kVPXMethod_CE_20_HICommand_20_Process,
kVPXMethod_CE_20_HICommand_20_Update_20_Status,
kVPXMethod_CE_20_HIObject_20_Class_20_Event,
kVPXMethod_CE_20_HIObject_20_Construct,
kVPXMethod_CE_20_HIObject_20_Destruct,
kVPXMethod_CE_20_HIObject_20_Event,
kVPXMethod_CE_20_HIObject_20_Initialize,
kVPXMethod_CE_20_HIObject_20_Is_20_Equal,
kVPXMethod_CE_20_HIObject_20_Print_20_Debug_20_Info,
kVPXMethod_CE_20_HIView_20_Event,
kVPXMethod_CE_20_Handle_20_Event,
kVPXMethod_CE_20_Hit,
kVPXMethod_CE_20_Keyboard_20_Event,
kVPXMethod_CE_20_Mouse_20_Event,
kVPXMethod_CE_20_Mouse_20_Moved,
kVPXMethod_CE_20_Mouse_20_Wheel_20_Moved,
kVPXMethod_CE_20_Owning_20_Window_20_Changed,
kVPXMethod_CE_20_Path_20_Select,
kVPXMethod_CE_20_Raw_20_Key_20_Down,
kVPXMethod_CE_20_Raw_20_Key_20_Modifiers_20_Changed,
kVPXMethod_CE_20_Raw_20_Key_20_Repeat,
kVPXMethod_CE_20_Scrollable_20_Class_20_Event,
kVPXMethod_CE_20_Search_20_Field_20_Cancel_20_Clicked,
kVPXMethod_CE_20_Search_20_Field_20_Event,
kVPXMethod_CE_20_Service_20_Event,
kVPXMethod_CE_20_Text_20_Accepted,
kVPXMethod_CE_20_Text_20_Field_20_Event,
kVPXMethod_CE_20_Text_20_Input_20_Event,
kVPXMethod_CE_20_Toolbar_20_Create_20_Item_20_From_20_Drag,
kVPXMethod_CE_20_Toolbar_20_Create_20_Item_20_With_20_Identifier,
kVPXMethod_CE_20_Toolbar_20_Event,
kVPXMethod_CE_20_Toolbar_20_Get_20_Allowed_20_Identifiers,
kVPXMethod_CE_20_Toolbar_20_Get_20_Default_20_Identifiers,
kVPXMethod_CE_20_Toolbar_20_Item_20_Added,
kVPXMethod_CE_20_Toolbar_20_Item_20_Command_20_ID_20_Changed,
kVPXMethod_CE_20_Toolbar_20_Item_20_Create_20_Custom_20_View,
kVPXMethod_CE_20_Toolbar_20_Item_20_Enabled_20_State_20_Changed,
kVPXMethod_CE_20_Toolbar_20_Item_20_Event,
kVPXMethod_CE_20_Toolbar_20_Item_20_Get_20_Persistent_20_Data,
kVPXMethod_CE_20_Toolbar_20_Item_20_Help_20_Text_20_Changed,
kVPXMethod_CE_20_Toolbar_20_Item_20_Image_20_Changed,
kVPXMethod_CE_20_Toolbar_20_Item_20_Label_20_Changed,
kVPXMethod_CE_20_Toolbar_20_Item_20_Perform_20_Action,
kVPXMethod_CE_20_Toolbar_20_Item_20_Removed,
kVPXMethod_CE_20_Toolbar_20_Item_20_View_20_Event,
kVPXMethod_CE_20_Toolbar_20_Layout_20_Changed,
kVPXMethod_CE_20_Unicode_20_For_20_Key,
kVPXMethod_CE_20_Window_20_Activated,
kVPXMethod_CE_20_Window_20_Bounds_20_Changed,
kVPXMethod_CE_20_Window_20_Bounds_20_Changing,
kVPXMethod_CE_20_Window_20_Click_20_Content,
kVPXMethod_CE_20_Window_20_Close,
kVPXMethod_CE_20_Window_20_Close_20_All,
kVPXMethod_CE_20_Window_20_Deactivated,
kVPXMethod_CE_20_Window_20_Drag_20_Completed,
kVPXMethod_CE_20_Window_20_Draw_20_Content,
kVPXMethod_CE_20_Window_20_Event,
kVPXMethod_CE_20_Window_20_Get_20_Ideal_20_Size,
kVPXMethod_CE_20_Window_20_Resize_20_Completed,
kVPXMethod_CF_20_Last_20_Release,
kVPXMethod_CF_20_Release,
kVPXMethod_CFPreferences_20_Synchronize,
kVPXMethod_CFPrefs_20_Get_20_App_20_Value,
kVPXMethod_CFPrefs_20_Set_20_App_20_Value,
kVPXMethod_CFSTR,
kVPXMethod_CGPoint_20_In_3F_,
kVPXMethod_CTM_20_Create,
kVPXMethod_CTM_20_Select,
kVPXMethod_Call,
kVPXMethod_Call_20_Failed,
kVPXMethod_Call_20_Next_20_Event_20_Handler,
kVPXMethod_Can_20_Be_20_Decomposed_3F_,
kVPXMethod_Can_20_Create_3F_,
kVPXMethod_Can_20_Delete_3F_,
kVPXMethod_Can_20_Do_3F_,
kVPXMethod_Can_20_Fail_3F_,
kVPXMethod_Cancel,
kVPXMethod_Cancel_20_Editors,
kVPXMethod_Capitalize,
kVPXMethod_Capture_20_App_20_Folder,
kVPXMethod_Capture_20_Folder_20_Type,
kVPXMethod_Capture_20_Main_20_Bundle,
kVPXMethod_Capture_20_Path,
kVPXMethod_Capture_20_Private_20_Frameworks,
kVPXMethod_Capture_20_Private_20_Frameworks_20_Name,
kVPXMethod_Capture_20_Resources_20_Directory,
kVPXMethod_Capture_20_Resources_20_Name,
kVPXMethod_Capture_20_Value,
kVPXMethod_Carriage_20_Return,
kVPXMethod_Change_20_Attributes,
kVPXMethod_Change_20_Auto_20_Invalidate_20_Flags,
kVPXMethod_Change_20_Breakpoint,
kVPXMethod_Change_20_Frame,
kVPXMethod_Change_20_Item_20_Data_20_Property,
kVPXMethod_Change_20_Mode,
kVPXMethod_Change_20_Name,
kVPXMethod_Change_20_Projects_20_Max,
kVPXMethod_Change_20_Property_20_Attributes,
kVPXMethod_Change_20_Target,
kVPXMethod_Change_20_Type,
kVPXMethod_Check_20_Drop_20_Flavors,
kVPXMethod_Check_20_Error,
kVPXMethod_Check_20_State,
kVPXMethod_Check_20_Tasks,
kVPXMethod_Check_20_Tasty_20_Flavors,
kVPXMethod_Check_20_UTI,
kVPXMethod_Choose_20_Clear_20_Menu,
kVPXMethod_Choose_20_Form,
kVPXMethod_Choose_20_Recent_20_Project,
kVPXMethod_Choose_20_Settings,
kVPXMethod_Class_20_To_20_Instance,
kVPXMethod_Clean_20_Product,
kVPXMethod_Clean_20_Up,
kVPXMethod_Clean_20_Up_20_Context,
kVPXMethod_Clean_20_Up_20_Parameters,
kVPXMethod_Clear,
kVPXMethod_Clear_20_Breakpoints,
kVPXMethod_Clear_20_HICommand_20_Cache,
kVPXMethod_Clear_20_Help_20_Menu,
kVPXMethod_Clear_20_Projects,
kVPXMethod_Clear_20_Rect,
kVPXMethod_Clear_20_Target,
kVPXMethod_Clear_20_Watchpoints,
kVPXMethod_Click,
kVPXMethod_Click_20_Content,
kVPXMethod_Click_20_Control_20_Part,
kVPXMethod_Click_20_Item,
kVPXMethod_Clone,
kVPXMethod_Clone_20_Reference,
kVPXMethod_Close,
kVPXMethod_Close_20_Alias,
kVPXMethod_Close_20_All,
kVPXMethod_Close_20_All_20_Windows,
kVPXMethod_Close_20_Archive,
kVPXMethod_Close_20_Callback,
kVPXMethod_Close_20_Callbacks,
kVPXMethod_Close_20_Container,
kVPXMethod_Close_20_Controller,
kVPXMethod_Close_20_Data,
kVPXMethod_Close_20_Drag_20_Handler,
kVPXMethod_Close_20_Drag_20_Input_20_Callback,
kVPXMethod_Close_20_Editor,
kVPXMethod_Close_20_Environment,
kVPXMethod_Close_20_Event_20_Callback,
kVPXMethod_Close_20_Event_20_Handlers,
kVPXMethod_Close_20_Filter_20_Callback,
kVPXMethod_Close_20_Fork,
kVPXMethod_Close_20_Globals,
kVPXMethod_Close_20_Lists,
kVPXMethod_Close_20_Local,
kVPXMethod_Close_20_Menu_20_Bar,
kVPXMethod_Close_20_Pasteboard_20_Handler,
kVPXMethod_Close_20_Path,
kVPXMethod_Close_20_Preview_20_Callback,
kVPXMethod_Close_20_Printing_20_Handler,
kVPXMethod_Close_20_Project,
kVPXMethod_Close_20_Projects,
kVPXMethod_Close_20_Self,
kVPXMethod_Close_20_Services,
kVPXMethod_Close_20_Subpath,
kVPXMethod_Close_20_UI,
kVPXMethod_Close_20_UPP,
kVPXMethod_Close_20_URL,
kVPXMethod_Close_20_Value,
kVPXMethod_Coerce_20_AEDesc,
kVPXMethod_Coerce_20_Boolean,
kVPXMethod_Coerce_20_FSRef,
kVPXMethod_Coerce_20_FSSpec,
kVPXMethod_Coerce_20_Integer,
kVPXMethod_Coerce_20_Number,
kVPXMethod_Coerce_20_Pointer,
kVPXMethod_Coerce_20_Real,
kVPXMethod_Collect_20_Found,
kVPXMethod_Command_20_Key,
kVPXMethod_Commit_20_Promise,
kVPXMethod_Commit_20_To_20_History,
kVPXMethod_Compare,
kVPXMethod_Compare_20_Range,
kVPXMethod_Compile,
kVPXMethod_Compile_20_Sources_20_As,
kVPXMethod_Compile_20_Text,
kVPXMethod_Compute_20_Shift_20_Offset,
kVPXMethod_Connect_20_To_20_Root,
kVPXMethod_Connect_20_To_20_Root_20_CG,
kVPXMethod_Constant_20_Info,
kVPXMethod_Constrain_20_Window,
kVPXMethod_Construct_20_Editor,
kVPXMethod_Construct_20_Path,
kVPXMethod_Construct_20_Text,
kVPXMethod_Construct_20_Title,
kVPXMethod_Container_20_Closed,
kVPXMethod_Container_20_Closing,
kVPXMethod_Container_20_Opened,
kVPXMethod_Container_20_User_20_Toggled,
kVPXMethod_Continue,
kVPXMethod_Control_20_Active_20_State_20_Changed,
kVPXMethod_Control_20_Bounds_20_Changed,
kVPXMethod_Control_20_Click,
kVPXMethod_Control_20_Construct,
kVPXMethod_Control_20_Destruct,
kVPXMethod_Control_20_Dispose,
kVPXMethod_Control_20_Draw,
kVPXMethod_Control_20_Draw_20_CG,
kVPXMethod_Control_20_Draw_20_QD,
kVPXMethod_Control_20_Enabled_20_State_20_Changed,
kVPXMethod_Control_20_Export,
kVPXMethod_Control_20_Get_20_Data,
kVPXMethod_Control_20_Get_20_Kind,
kVPXMethod_Control_20_Get_20_Part_20_Region,
kVPXMethod_Control_20_Hilite_20_Changed,
kVPXMethod_Control_20_Hit,
kVPXMethod_Control_20_Hit_20_Test,
kVPXMethod_Control_20_Initialize,
kVPXMethod_Control_20_Set_20_Cursor,
kVPXMethod_Control_20_Set_20_Data,
kVPXMethod_Control_20_Set_20_Focus_20_Part,
kVPXMethod_Control_20_Simulate_20_Hit,
kVPXMethod_Control_20_Text_20_Input,
kVPXMethod_Control_20_Title_20_Changed,
kVPXMethod_Control_20_Value_20_Field_20_Changed,
kVPXMethod_ControlRef_20_To_20_Object,
kVPXMethod_Convert_20_Data_20_To_20_Value,
kVPXMethod_Convert_20_HIPoint,
kVPXMethod_Convert_20_HIRect,
kVPXMethod_Convert_20_Key_20_EventRef,
kVPXMethod_Convert_20_Mouse_20_EventRef,
kVPXMethod_Convert_20_Region,
kVPXMethod_Convert_20_Selection_20_To_20_Type,
kVPXMethod_Convert_20_To_20_Type,
kVPXMethod_Convert_20_Value_20_To_20_Data,
kVPXMethod_Copy,
kVPXMethod_Copy_20_Absolute_20_URL,
kVPXMethod_Copy_20_Alternate_20_Title,
kVPXMethod_Copy_20_Bundle_20_URL,
kVPXMethod_Copy_20_File_20_System_20_Path,
kVPXMethod_Copy_20_Host_20_Name,
kVPXMethod_Copy_20_Item_20_Flavor_20_Data,
kVPXMethod_Copy_20_Last_20_Path_20_Component,
kVPXMethod_Copy_20_Localized_20_String,
kVPXMethod_Copy_20_Net_20_Location,
kVPXMethod_Copy_20_Original,
kVPXMethod_Copy_20_Path,
kVPXMethod_Copy_20_Path_20_Extension,
kVPXMethod_Copy_20_Resource_20_URL,
kVPXMethod_Copy_20_Resources,
kVPXMethod_Copy_20_Title,
kVPXMethod_Copy_20_Value,
kVPXMethod_Count_20_Drag_20_Items,
kVPXMethod_Create,
kVPXMethod_Create_20_32_2D_RGBA,
kVPXMethod_Create_20_AEDesc,
kVPXMethod_Create_20_Accessor_20_Method,
kVPXMethod_Create_20_Alias,
kVPXMethod_Create_20_Archive,
kVPXMethod_Create_20_Archive_20_MetaData,
kVPXMethod_Create_20_Attribute,
kVPXMethod_Create_20_Banner_20_Item,
kVPXMethod_Create_20_Block_20_Type,
kVPXMethod_Create_20_Bundle,
kVPXMethod_Create_20_Byte_20_Integer,
kVPXMethod_Create_20_CFStringRef,
kVPXMethod_Create_20_CGImage,
kVPXMethod_Create_20_Callbacks,
kVPXMethod_Create_20_Case,
kVPXMethod_Create_20_Class,
kVPXMethod_Create_20_Class_20_Heirarchy_20_List,
kVPXMethod_Create_20_Comment_20_Items,
kVPXMethod_Create_20_Connection,
kVPXMethod_Create_20_Control,
kVPXMethod_Create_20_Copy_20_Appending_20_Path_20_Component,
kVPXMethod_Create_20_Copy_20_Deleting_20_Last_20_Path_20_Component,
kVPXMethod_Create_20_Corners,
kVPXMethod_Create_20_Custom_20_View,
kVPXMethod_Create_20_Data,
kVPXMethod_Create_20_Data_20_And_20_Properties_20_From_20_Resource,
kVPXMethod_Create_20_Default_20_Case,
kVPXMethod_Create_20_Directory,
kVPXMethod_Create_20_Drag_20_Image,
kVPXMethod_Create_20_Editor,
kVPXMethod_Create_20_Editor_20_Event,
kVPXMethod_Create_20_Event,
kVPXMethod_Create_20_Export_20_Name_20_Prefix,
kVPXMethod_Create_20_Fat_20_Binary,
kVPXMethod_Create_20_File,
kVPXMethod_Create_20_Float,
kVPXMethod_Create_20_From_20_CFURL,
kVPXMethod_Create_20_From_20_FSRef,
kVPXMethod_Create_20_From_20_File_20_System_20_Path,
kVPXMethod_Create_20_From_20_ID,
kVPXMethod_Create_20_From_20_List,
kVPXMethod_Create_20_From_20_Path,
kVPXMethod_Create_20_From_20_String,
kVPXMethod_Create_20_From_20_UUID_20_Bytes,
kVPXMethod_Create_20_HIObject_20_Initialization_20_Event,
kVPXMethod_Create_20_HIThemeTextInfo,
kVPXMethod_Create_20_HIToolbar,
kVPXMethod_Create_20_Image,
kVPXMethod_Create_20_Info_2E_plist,
kVPXMethod_Create_20_Inject_20_Prefix,
kVPXMethod_Create_20_Instance,
kVPXMethod_Create_20_Item,
kVPXMethod_Create_20_Item_20_From_20_Number,
kVPXMethod_Create_20_Item_20_From_20_Value,
kVPXMethod_Create_20_Items_20_From_20_Count,
kVPXMethod_Create_20_Items_20_From_20_Values,
kVPXMethod_Create_20_Left_20_Coordinate,
kVPXMethod_Create_20_Long_20_Integer,
kVPXMethod_Create_20_Menu_20_Bar,
kVPXMethod_Create_20_Menu_20_Item,
kVPXMethod_Create_20_Method,
kVPXMethod_Create_20_Mutable,
kVPXMethod_Create_20_Mutable_20_Copy,
kVPXMethod_Create_20_Mutable_20_For_20_CFTypes,
kVPXMethod_Create_20_Nib_20_Window,
kVPXMethod_Create_20_Offscreen_20_Image,
kVPXMethod_Create_20_Operation,
kVPXMethod_Create_20_Operations_20_Archive,
kVPXMethod_Create_20_Persistent,
kVPXMethod_Create_20_PkgInfo,
kVPXMethod_Create_20_Property_20_List_20_From_20_XML_20_File,
kVPXMethod_Create_20_Put_20_Values,
kVPXMethod_Create_20_Queue,
kVPXMethod_Create_20_Reference,
kVPXMethod_Create_20_Root,
kVPXMethod_Create_20_Roots,
kVPXMethod_Create_20_Send_20_Event,
kVPXMethod_Create_20_Short_20_Integer,
kVPXMethod_Create_20_Static_20_Form,
kVPXMethod_Create_20_Sub_20_Pane,
kVPXMethod_Create_20_Super_20_Class,
kVPXMethod_Create_20_Synchro,
kVPXMethod_Create_20_Task,
kVPXMethod_Create_20_Terminal,
kVPXMethod_Create_20_Terminals,
kVPXMethod_Create_20_Tidy_20_Band,
kVPXMethod_Create_20_Toolbar_20_Item,
kVPXMethod_Create_20_Window,
kVPXMethod_Create_20_Window_20_Class,
kVPXMethod_Create_20_With_20_CFString,
kVPXMethod_Create_20_With_20_CString,
kVPXMethod_Create_20_With_20_ControlRef,
kVPXMethod_Create_20_With_20_FSRef,
kVPXMethod_Create_20_With_20_HIView,
kVPXMethod_Create_20_With_20_Now,
kVPXMethod_Create_20_With_20_Object,
kVPXMethod_Create_20_With_20_String,
kVPXMethod_Create_20_With_20_Substring,
kVPXMethod_Create_20_With_20_UniChar,
kVPXMethod_Create_20_With_20_WindowRef,
kVPXMethod_Cut,
kVPXMethod_DB_20_CTM_20_Create,
kVPXMethod_DB_20_CTM_20_Select,
kVPXMethod_DB_20_Drag_20_Accept_3F_,
kVPXMethod_DB_20_Drag_20_Add_20_Item,
kVPXMethod_DB_20_Drag_20_Receive,
kVPXMethod_DB_20_Item_20_Data,
kVPXMethod_DB_20_Item_20_Notification,
kVPXMethod_Data_20_Message,
kVPXMethod_Deactivated,
kVPXMethod_Dead_20_Case_20_Check,
kVPXMethod_Debug,
kVPXMethod_Debug_20_Console,
kVPXMethod_Debug_20_Detect_20_Verbosity,
kVPXMethod_Debug_20_Finish,
kVPXMethod_Debug_20_Init,
kVPXMethod_Debug_20_OSError,
kVPXMethod_Debug_20_Result,
kVPXMethod_Debug_20_Unimp,
kVPXMethod_Debug_20_Value,
kVPXMethod_Debug_20_Verbosity_20_Level_3F_,
kVPXMethod_Default_20_Bytes_20_Length,
kVPXMethod_Default_20_ControlID,
kVPXMethod_Default_20_Edge,
kVPXMethod_Default_20_Encoding,
kVPXMethod_Default_20_FALSE,
kVPXMethod_Default_20_Keys,
kVPXMethod_Default_20_List,
kVPXMethod_Default_20_Locale,
kVPXMethod_Default_20_NULL,
kVPXMethod_Default_20_Operation,
kVPXMethod_Default_20_Page_20_Format,
kVPXMethod_Default_20_Page_20_Setup_20_Done_20_Callback,
kVPXMethod_Default_20_Path_20_Style,
kVPXMethod_Default_20_Print_20_Dialog_20_Done_20_Callback,
kVPXMethod_Default_20_Print_20_Settings,
kVPXMethod_Default_20_Range,
kVPXMethod_Default_20_TRUE,
kVPXMethod_Default_20_The_20_Drag,
kVPXMethod_Default_20_Zero,
kVPXMethod_Deg_20_To_20_Rad,
kVPXMethod_Delete,
kVPXMethod_Delete_20_Bytes,
kVPXMethod_Delete_20_Case,
kVPXMethod_Delete_20_Data,
kVPXMethod_Delete_20_Items,
kVPXMethod_Delete_20_Nth_20_Attribute,
kVPXMethod_Delete_20_Nth_20_Class_20_Attribute,
kVPXMethod_Delete_20_Queue,
kVPXMethod_Delete_20_Quit_20_Now,
kVPXMethod_Destroy,
kVPXMethod_Destroy_20_Attribute,
kVPXMethod_Destroy_20_Case,
kVPXMethod_Destroy_20_Class,
kVPXMethod_Destroy_20_Method,
kVPXMethod_Destroy_20_Operation,
kVPXMethod_Destroy_20_Persistent,
kVPXMethod_Destroy_20_Resource,
kVPXMethod_Destroy_20_Root,
kVPXMethod_Destroy_20_Terminal,
kVPXMethod_Destruct,
kVPXMethod_Destruct_20_Control_20_Events,
kVPXMethod_Detach_20_Window,
kVPXMethod_Disable_20_Control,
kVPXMethod_Dispatch_20_Click,
kVPXMethod_Dispatch_20_Event,
kVPXMethod_Dispatch_20_Thread,
kVPXMethod_Display,
kVPXMethod_Display_20_All,
kVPXMethod_Display_20_Demo_20_Message,
kVPXMethod_Display_20_List,
kVPXMethod_Display_20_Message,
kVPXMethod_Display_20_Operation_20_Info,
kVPXMethod_Display_20_Page,
kVPXMethod_Display_20_Results,
kVPXMethod_Display_20_Text,
kVPXMethod_Display_20_Welcome,
kVPXMethod_Dispose,
kVPXMethod_Dispose_20_Callbacks,
kVPXMethod_Dispose_20_Content,
kVPXMethod_Dispose_20_Drawers,
kVPXMethod_Dispose_20_Drop,
kVPXMethod_Dispose_20_Instance,
kVPXMethod_Dispose_20_Record,
kVPXMethod_Dispose_20_Toolbar,
kVPXMethod_Divide,
kVPXMethod_Do,
kVPXMethod_Do_20_AE_20_Callback,
kVPXMethod_Do_20_Async,
kVPXMethod_Do_20_Async_20_Callback,
kVPXMethod_Do_20_CE_20_Callback,
kVPXMethod_Do_20_CIT_20_Callback,
kVPXMethod_Do_20_CT_20_Callback,
kVPXMethod_Do_20_CT_20_Exec_20_Callback,
kVPXMethod_Do_20_Callback,
kVPXMethod_Do_20_Callback_20_No_20_Result,
kVPXMethod_Do_20_Change_20_Selection,
kVPXMethod_Do_20_Changed_20_Callback,
kVPXMethod_Do_20_Click_20_Method,
kVPXMethod_Do_20_Command_20_ID,
kVPXMethod_Do_20_Completion,
kVPXMethod_Do_20_Completion_20_Behavior,
kVPXMethod_Do_20_DBCTM_20_Create,
kVPXMethod_Do_20_DBCTM_20_Select,
kVPXMethod_Do_20_DBDrag_20_Accept_3F_,
kVPXMethod_Do_20_DBDrag_20_Add_20_Item,
kVPXMethod_Do_20_DBDrag_20_Receive,
kVPXMethod_Do_20_DBItemData,
kVPXMethod_Do_20_DBItemNotification,
kVPXMethod_Do_20_DBItemNotification_20_With_20_Item,
kVPXMethod_Do_20_HI_20_Callback,
kVPXMethod_Do_20_Live_20_Action,
kVPXMethod_Do_20_Name,
kVPXMethod_Do_20_Receive_20_Handler,
kVPXMethod_Do_20_Scroll_20_Timer_20_Callback,
kVPXMethod_Do_20_Selector,
kVPXMethod_Do_20_Sort_20_Operations,
kVPXMethod_Do_20_Standard_20_Changed_20_Callback,
kVPXMethod_Do_20_Standard_20_Promise_20_Keeper_20_Callback,
kVPXMethod_Do_20_Sync,
kVPXMethod_Do_20_Task,
kVPXMethod_Do_20_Tracking_20_Handler,
kVPXMethod_Do_20_User_20_Notice,
kVPXMethod_Don_27_t_20_Release,
kVPXMethod_Double_20_Click,
kVPXMethod_Double_20_Click_20_Item,
kVPXMethod_Double_20_Clicked,
kVPXMethod_Drag_20_Accept_3F_,
kVPXMethod_Drag_20_Add_20_Item,
kVPXMethod_Drag_20_Enter_20_Handler,
kVPXMethod_Drag_20_Enter_20_Window,
kVPXMethod_Drag_20_In_20_Window,
kVPXMethod_Drag_20_Item,
kVPXMethod_Drag_20_Items,
kVPXMethod_Drag_20_Leave_20_Handler,
kVPXMethod_Drag_20_Leave_20_Window,
kVPXMethod_Drag_20_Receive,
kVPXMethod_Drag_20_Track_20_In_20_Window,
kVPXMethod_Draw,
kVPXMethod_Draw_20_CG,
kVPXMethod_Draw_20_Connection,
kVPXMethod_Draw_20_Connection_20_CG,
kVPXMethod_Draw_20_Content_20_CG,
kVPXMethod_Draw_20_Control_20_CG,
kVPXMethod_Draw_20_Control_20_Cnt_20_CG,
kVPXMethod_Draw_20_Control_20_Fail_20_CG,
kVPXMethod_Draw_20_Control_20_Fin_20_CG,
kVPXMethod_Draw_20_Control_20_Term_20_CG,
kVPXMethod_Draw_20_Event_20_CG,
kVPXMethod_Draw_20_Failure_20_CG,
kVPXMethod_Draw_20_Oper_20_Erase_20_CG,
kVPXMethod_Draw_20_Oper_20_Fill_20_CG,
kVPXMethod_Draw_20_Oper_20_Frame_20_CG,
kVPXMethod_Draw_20_Oper_20_Inset_20_CG,
kVPXMethod_Draw_20_Repeat_20_Erase_20_CG,
kVPXMethod_Draw_20_Repeat_20_Frame_20_CG,
kVPXMethod_Draw_20_Success_20_CG,
kVPXMethod_Draw_20_Synchro,
kVPXMethod_Draw_20_Synchro_20_CG,
kVPXMethod_Drawer_20_Close,
kVPXMethod_Drawer_20_Get_20_Current_20_Edge,
kVPXMethod_Drawer_20_Get_20_Offsets,
kVPXMethod_Drawer_20_Get_20_Parent,
kVPXMethod_Drawer_20_Get_20_Preferred_20_Edge,
kVPXMethod_Drawer_20_Get_20_State,
kVPXMethod_Drawer_20_Open,
kVPXMethod_Drawer_20_Set_20_Offsets,
kVPXMethod_Drawer_20_Set_20_Parent,
kVPXMethod_Drawer_20_Set_20_Preferred_20_Edge,
kVPXMethod_Drawer_20_Toggle,
kVPXMethod_Duplicate,
kVPXMethod_Duplicate_20_Data_20_Name_20_Error,
kVPXMethod_Edit_20_Item,
kVPXMethod_Element_20_Add,
kVPXMethod_Element_20_Match_3F_,
kVPXMethod_Element_20_Message,
kVPXMethod_Element_20_Remove_3F_,
kVPXMethod_Emit_20_Text,
kVPXMethod_Enable_20_Control,
kVPXMethod_End_20_CGContext,
kVPXMethod_End_20_Document,
kVPXMethod_End_20_For_20_CGrafPort,
kVPXMethod_End_20_Page,
kVPXMethod_Enter,
kVPXMethod_Equal,
kVPXMethod_Equal_3F_,
kVPXMethod_Erase_20_Row_20_CG,
kVPXMethod_Erase_20_View,
kVPXMethod_Erase_20_View_20_CG,
kVPXMethod_Error,
kVPXMethod_Error_20_Accept,
kVPXMethod_Error_20_Debug,
kVPXMethod_Error_3F_,
kVPXMethod_Escape_20_Text,
kVPXMethod_Exchange_20_Objects,
kVPXMethod_Execute,
kVPXMethod_Execute_20_Callback,
kVPXMethod_Execute_20_Callback_20_Deferred,
kVPXMethod_Execute_20_Callback_20_With_20_Attachments,
kVPXMethod_Execute_20_Idle_20_Callback_20_Deferred,
kVPXMethod_Execute_20_MAIN,
kVPXMethod_Exit,
kVPXMethod_Exit_20_This_20_Task,
kVPXMethod_Export_20_Header_20_Text,
kVPXMethod_Export_20_Local_20_Text,
kVPXMethod_Export_20_Text,
kVPXMethod_Expose_20_URL,
kVPXMethod_Extract_20_Archive,
kVPXMethod_Extract_20_Data,
kVPXMethod_Extract_20_Drop_20_Flavors,
kVPXMethod_Extract_20_Error_3F_,
kVPXMethod_Extract_20_Form,
kVPXMethod_Extract_20_Persistent_20_Data,
kVPXMethod_Extract_20_Reply,
kVPXMethod_Extract_20_Result,
kVPXMethod_Fast_20_Quit,
kVPXMethod_File_20_Delete_20_Resource,
kVPXMethod_File_20_Import_20_CPX_20_Callback,
kVPXMethod_File_20_Open_20_Any_20_Callback,
kVPXMethod_File_20_Open_20_Any_20_Type,
kVPXMethod_File_20_Open_20_Application_20_Callback,
kVPXMethod_File_20_Open_20_Library_20_Callback,
kVPXMethod_File_20_Open_20_Project_20_Callback,
kVPXMethod_File_20_Open_20_Recource_20_Callback,
kVPXMethod_File_20_Open_20_Resource,
kVPXMethod_File_20_Open_20_Section_20_Callback,
kVPXMethod_File_20_Update_20_Resource,
kVPXMethod_Fill_20_And_20_Stroke_20_Path,
kVPXMethod_Fill_20_Help_20_Menu,
kVPXMethod_Fill_20_Menu,
kVPXMethod_Fill_20_Oval,
kVPXMethod_Fill_20_Path,
kVPXMethod_Fill_20_Rect,
kVPXMethod_Fill_20_Rounded_20_Rect,
kVPXMethod_Finalize_20_Stack,
kVPXMethod_Find,
kVPXMethod_Find_20_Activity_20_Text,
kVPXMethod_Find_20_All,
kVPXMethod_Find_20_All_20_By_20_Type,
kVPXMethod_Find_20_All_20_Results,
kVPXMethod_Find_20_Arch_20_Type,
kVPXMethod_Find_20_Build_20_Folder,
kVPXMethod_Find_20_Bundle_20_Group,
kVPXMethod_Find_20_Bundle_20_Icon_20_File,
kVPXMethod_Find_20_Bundle_20_Identifier,
kVPXMethod_Find_20_Bundle_20_Version,
kVPXMethod_Find_20_Busy_20_Arrows,
kVPXMethod_Find_20_CTM_20_Item,
kVPXMethod_Find_20_Case_20_Drawer,
kVPXMethod_Find_20_Case_20_Selector,
kVPXMethod_Find_20_Class_20_Name,
kVPXMethod_Find_20_Clean_20_Build_3F_,
kVPXMethod_Find_20_Command_20_ID,
kVPXMethod_Find_20_Content_20_Data,
kVPXMethod_Find_20_Contents_20_Name,
kVPXMethod_Find_20_Control,
kVPXMethod_Find_20_ControlRef,
kVPXMethod_Find_20_Creator_20_Code,
kVPXMethod_Find_20_Custom_20_Item,
kVPXMethod_Find_20_Custom_20_Plist_20_Keys,
kVPXMethod_Find_20_Custom_20_View,
kVPXMethod_Find_20_Deep_20_Case,
kVPXMethod_Find_20_Descendants,
kVPXMethod_Find_20_Development_20_Region,
kVPXMethod_Find_20_Direction,
kVPXMethod_Find_20_Dock_20_Position,
kVPXMethod_Find_20_Drawer_20_Name,
kVPXMethod_Find_20_Edit_20_Text,
kVPXMethod_Find_20_Editor,
kVPXMethod_Find_20_Editor_20_Window,
kVPXMethod_Find_20_Exact_20_Match_3F_,
kVPXMethod_Find_20_Export_20_Mode,
kVPXMethod_Find_20_FSRef_20_To_20_Contents,
kVPXMethod_Find_20_FSRef_20_To_20_Frameworks,
kVPXMethod_Find_20_FSRef_20_To_20_Info_2E_plist,
kVPXMethod_Find_20_FSRef_20_To_20_Resources,
kVPXMethod_Find_20_FSRef_20_To_20_Self,
kVPXMethod_Find_20_Find_20_Text,
kVPXMethod_Find_20_Find_20_Window,
kVPXMethod_Find_20_Flavor_20_Values_20_For_20_Identifiers,
kVPXMethod_Find_20_Flavors_20_For_20_UTIs,
kVPXMethod_Find_20_Folder,
kVPXMethod_Find_20_ID,
kVPXMethod_Find_20_ID_20_HIViewRef,
kVPXMethod_Find_20_IO_20_Item_20_Near,
kVPXMethod_Find_20_Ignore_20_Case_3F_,
kVPXMethod_Find_20_Initial_20_Window_3F_,
kVPXMethod_Find_20_Instance,
kVPXMethod_Find_20_Instance_20_Values,
kVPXMethod_Find_20_Item,
kVPXMethod_Find_20_Item_20_ID,
kVPXMethod_Find_20_Item_20_IconRef,
kVPXMethod_Find_20_Item_20_Name,
kVPXMethod_Find_20_Known_20_Item_20_ID,
kVPXMethod_Find_20_Line_20_Hilite_3F_,
kVPXMethod_Find_20_List_20_Name,
kVPXMethod_Find_20_List_20_View,
kVPXMethod_Find_20_List_20_Window,
kVPXMethod_Find_20_MAIN,
kVPXMethod_Find_20_Matches_20_In_20_Sources,
kVPXMethod_Find_20_Matching_20_Identifier,
kVPXMethod_Find_20_Media,
kVPXMethod_Find_20_Methods_20_With_20_Value,
kVPXMethod_Find_20_Min_20_MacOS,
kVPXMethod_Find_20_Name,
kVPXMethod_Find_20_Name_20_Text,
kVPXMethod_Find_20_Next,
kVPXMethod_Find_20_Nib_20_Window,
kVPXMethod_Find_20_Operation_20_Parts,
kVPXMethod_Find_20_Option_20_Popup,
kVPXMethod_Find_20_Output_20_Text,
kVPXMethod_Find_20_Package_20_Extension,
kVPXMethod_Find_20_Package_20_Name,
kVPXMethod_Find_20_Package_20_Type,
kVPXMethod_Find_20_Parent_20_ComboBox,
kVPXMethod_Find_20_Pasteboard_20_Name,
kVPXMethod_Find_20_Path_20_To_20_Arch_20_Binary,
kVPXMethod_Find_20_Path_20_To_20_Binary,
kVPXMethod_Find_20_Path_20_To_20_Contents,
kVPXMethod_Find_20_Path_20_To_20_Info_2E_plist,
kVPXMethod_Find_20_PkgInfo_20_Creator,
kVPXMethod_Find_20_PkgInfo_20_Type,
kVPXMethod_Find_20_Previous,
kVPXMethod_Find_20_Primary_20_Prompt,
kVPXMethod_Find_20_Primary_20_Text,
kVPXMethod_Find_20_Private_20_Frameworks_3F_,
kVPXMethod_Find_20_Product_20_Name,
kVPXMethod_Find_20_Progress_20_Bar,
kVPXMethod_Find_20_Project_20_Info,
kVPXMethod_Find_20_Project_20_Info_20_List,
kVPXMethod_Find_20_Project_20_Storage,
kVPXMethod_Find_20_Prompt_20_Text,
kVPXMethod_Find_20_Proto_20_Windows,
kVPXMethod_Find_20_Range,
kVPXMethod_Find_20_Recent_20_Projects,
kVPXMethod_Find_20_Release_20_Version,
kVPXMethod_Find_20_Replace,
kVPXMethod_Find_20_Replace_20_All,
kVPXMethod_Find_20_Replace_20_Text,
kVPXMethod_Find_20_Reuse_20_List_3F_,
kVPXMethod_Find_20_Root_20_SDK,
kVPXMethod_Find_20_Run_20_Mode,
kVPXMethod_Find_20_SDK_20_By_20_Name,
kVPXMethod_Find_20_SDK_20_Path,
kVPXMethod_Find_20_SDK_20_Service,
kVPXMethod_Find_20_Search_20_Text,
kVPXMethod_Find_20_Secondary_20_Prompt,
kVPXMethod_Find_20_Secondary_20_Text,
kVPXMethod_Find_20_Sections_20_Popup,
kVPXMethod_Find_20_Service,
kVPXMethod_Find_20_Service_20_Name,
kVPXMethod_Find_20_State_20_Disable,
kVPXMethod_Find_20_State_20_Element_20_Add,
kVPXMethod_Find_20_State_20_Element_20_Message,
kVPXMethod_Find_20_State_20_Element_20_Message_20_Send,
kVPXMethod_Find_20_State_20_Enable,
kVPXMethod_Find_20_Sub_20_Control_20_Bounds,
kVPXMethod_Find_20_Task_20_Service,
kVPXMethod_Find_20_Tasty_20_Flavors_3F_,
kVPXMethod_Find_20_Template_20_ID,
kVPXMethod_Find_20_Terminals,
kVPXMethod_Find_20_Tools,
kVPXMethod_Find_20_Type_20_Code,
kVPXMethod_Find_20_Type_20_Popup,
kVPXMethod_Find_20_Type_20_Result,
kVPXMethod_Find_20_UTIs_20_For_20_Value,
kVPXMethod_Find_20_UTIs_20_For_20_Value_2023_1,
kVPXMethod_Find_20_Users_20_Folder,
kVPXMethod_Find_20_Utility_20_Button,
kVPXMethod_Find_20_View_20_Popup,
kVPXMethod_Find_20_Views_20_In_20_Group,
kVPXMethod_Find_20_Window,
kVPXMethod_Find_20_Windows_20_Name,
kVPXMethod_Find_20_Windows_20_Type,
kVPXMethod_Finish,
kVPXMethod_Finish_20_Busy,
kVPXMethod_Finish_20_Find,
kVPXMethod_Finish_20_Modal,
kVPXMethod_Finish_20_Service,
kVPXMethod_Finish_20_Window,
kVPXMethod_Flash_20_Dirty_20_Area,
kVPXMethod_Flip_20_Coin,
kVPXMethod_Flush,
kVPXMethod_Focus_20_Search_20_Text,
kVPXMethod_Force_20_Reinstall,
kVPXMethod_Force_20_Synchronize,
kVPXMethod_Form_20_Command_20_Text,
kVPXMethod_Form_20_Option_20_Text,
kVPXMethod_Formalize_20_Data_20_Name,
kVPXMethod_Formalize_20_POSIX_20_Path,
kVPXMethod_Frame_20_Text,
kVPXMethod_Frame_20_To_20_Corners,
kVPXMethod_Frame_20_To_20_Repeat_20_Corners,
kVPXMethod_Frame_20_To_20_Text,
kVPXMethod_Framework_20_Link_20_Headers,
kVPXMethod_From_20_AEDesc,
kVPXMethod_From_20_AEDesc_20_Type,
kVPXMethod_From_20_CFBooleanRef,
kVPXMethod_From_20_CFNumberRef,
kVPXMethod_From_20_CFRange,
kVPXMethod_From_20_CFStringRef,
kVPXMethod_From_20_CFStringRef_20_Encoding,
kVPXMethod_From_20_CFType,
kVPXMethod_From_20_CGPoint,
kVPXMethod_From_20_CGRect,
kVPXMethod_From_20_CGSize,
kVPXMethod_From_20_MacRoman,
kVPXMethod_Front_20_Or_20_New_20_Project,
kVPXMethod_Full_20_Name,
kVPXMethod_Full_20_Persistent_20_Name,
kVPXMethod_Full_20_Universal_20_Name,
kVPXMethod_Fullfill_20_Promise,
kVPXMethod_Get_20_AEDesc,
kVPXMethod_Get_20_Absolute_20_Time,
kVPXMethod_Get_20_Action,
kVPXMethod_Get_20_Active_20_Columns,
kVPXMethod_Get_20_Active_20_Flag,
kVPXMethod_Get_20_Active_20_Services,
kVPXMethod_Get_20_Active_3F_,
kVPXMethod_Get_20_Activity,
kVPXMethod_Get_20_Activity_20_Name,
kVPXMethod_Get_20_Alias_20_Record,
kVPXMethod_Get_20_All_20_Attributes,
kVPXMethod_Get_20_All_20_Breakpoints,
kVPXMethod_Get_20_All_20_Comments,
kVPXMethod_Get_20_All_20_File_20_Open_20_Types,
kVPXMethod_Get_20_All_20_Operations,
kVPXMethod_Get_20_All_20_Package_20_Types,
kVPXMethod_Get_20_All_20_Universals,
kVPXMethod_Get_20_All_20_Values,
kVPXMethod_Get_20_All_20_Values_20_As_20_Strings,
kVPXMethod_Get_20_Allocator,
kVPXMethod_Get_20_Allowed_20_Items,
kVPXMethod_Get_20_Allowed_20_Order,
kVPXMethod_Get_20_Animating_3F_,
kVPXMethod_Get_20_Answer,
kVPXMethod_Get_20_Application,
kVPXMethod_Get_20_Application_20_Name,
kVPXMethod_Get_20_Architectures,
kVPXMethod_Get_20_Archive,
kVPXMethod_Get_20_Archive_20_Size,
kVPXMethod_Get_20_Archive_20_Types,
kVPXMethod_Get_20_Attachment_20_Value,
kVPXMethod_Get_20_Attachments,
kVPXMethod_Get_20_Attribute,
kVPXMethod_Get_20_Attribute_20_AEDesc,
kVPXMethod_Get_20_Attributes,
kVPXMethod_Get_20_Banner_20_Text,
kVPXMethod_Get_20_Base_20_Command_20_ID,
kVPXMethod_Get_20_Baseline,
kVPXMethod_Get_20_Block_20_Pages,
kVPXMethod_Get_20_Block_20_Size,
kVPXMethod_Get_20_BlockPtr,
kVPXMethod_Get_20_Bottom,
kVPXMethod_Get_20_Bounds,
kVPXMethod_Get_20_Bounds_20_QD,
kVPXMethod_Get_20_Breakpoint,
kVPXMethod_Get_20_Buffer_20_Size,
kVPXMethod_Get_20_Build_20_Folder,
kVPXMethod_Get_20_Build_20_Settings,
kVPXMethod_Get_20_Bulk_20_Count,
kVPXMethod_Get_20_Bundle,
kVPXMethod_Get_20_Bundle_20_Extension,
kVPXMethod_Get_20_Bundle_20_Icon_20_File,
kVPXMethod_Get_20_Bundle_20_Identifier,
kVPXMethod_Get_20_Bundle_20_Resource_20_FSRef,
kVPXMethod_Get_20_Bundle_20_Version,
kVPXMethod_Get_20_Bundle_20_With_20_Identifier,
kVPXMethod_Get_20_Byte_20_Pointer,
kVPXMethod_Get_20_Byte_20_Size,
kVPXMethod_Get_20_Bytes,
kVPXMethod_Get_20_Bytes_20_List,
kVPXMethod_Get_20_Bytes_20_Read,
kVPXMethod_Get_20_CF_20_Constant,
kVPXMethod_Get_20_CF_20_Reference,
kVPXMethod_Get_20_CFBundleRef,
kVPXMethod_Get_20_CFNullRef,
kVPXMethod_Get_20_CGContextRef,
kVPXMethod_Get_20_CGPathRef,
kVPXMethod_Get_20_CGPoint,
kVPXMethod_Get_20_CGSize,
kVPXMethod_Get_20_CGrafPtr,
kVPXMethod_Get_20_CString,
kVPXMethod_Get_20_CTM_20_Values,
kVPXMethod_Get_20_Cache_20_Mode,
kVPXMethod_Get_20_Callback_20_Method_20_Name,
kVPXMethod_Get_20_Callback_20_Pointer,
kVPXMethod_Get_20_Callback_20_Result,
kVPXMethod_Get_20_CallbacksRef,
kVPXMethod_Get_20_Calling_20_Promise_3F_,
kVPXMethod_Get_20_Canceled_3F_,
kVPXMethod_Get_20_Carbon_20_EventTargetRef,
kVPXMethod_Get_20_Case_20_Dock_20_Orientation,
kVPXMethod_Get_20_Case_20_Drawer,
kVPXMethod_Get_20_Cases_20_List,
kVPXMethod_Get_20_Changed_20_Callback,
kVPXMethod_Get_20_Character_20_At_20_Index,
kVPXMethod_Get_20_Characters,
kVPXMethod_Get_20_Check_20_Timer,
kVPXMethod_Get_20_Class,
kVPXMethod_Get_20_Class_20_Attributes,
kVPXMethod_Get_20_Class_20_Instance,
kVPXMethod_Get_20_Class_20_Items,
kVPXMethod_Get_20_Class_20_Type_20_ID,
kVPXMethod_Get_20_Classes,
kVPXMethod_Get_20_Clean_3F_,
kVPXMethod_Get_20_Clipboard,
kVPXMethod_Get_20_Clipboard_20_Text,
kVPXMethod_Get_20_Color_20_Names,
kVPXMethod_Get_20_Column_20_View,
kVPXMethod_Get_20_ColumnDesc,
kVPXMethod_Get_20_Columns,
kVPXMethod_Get_20_Command,
kVPXMethod_Get_20_Command_20_ID,
kVPXMethod_Get_20_Command_20_Key,
kVPXMethod_Get_20_Command_20_Line,
kVPXMethod_Get_20_Compile_20_Requires_20_ObjC_3F_,
kVPXMethod_Get_20_Completed_3F_,
kVPXMethod_Get_20_Completion_20_Behavior,
kVPXMethod_Get_20_Component_20_Type,
kVPXMethod_Get_20_Container,
kVPXMethod_Get_20_Content,
kVPXMethod_Get_20_Content_20_HIViewRef,
kVPXMethod_Get_20_Content_20_List,
kVPXMethod_Get_20_ContentInfo,
kVPXMethod_Get_20_Contents_20_Name,
kVPXMethod_Get_20_Contextual_20_Menu_20_Event_3F_,
kVPXMethod_Get_20_Control_20_Auto_20_Invalidate_20_Flags,
kVPXMethod_Get_20_Control_20_Bounds_20_QD,
kVPXMethod_Get_20_Control_20_Data,
kVPXMethod_Get_20_Control_20_Data_20_Boolean,
kVPXMethod_Get_20_Control_20_Data_20_Long,
kVPXMethod_Get_20_Control_20_Data_20_Object,
kVPXMethod_Get_20_Control_20_Data_20_Ptr,
kVPXMethod_Get_20_Control_20_Data_20_Short,
kVPXMethod_Get_20_Control_20_Data_20_Text,
kVPXMethod_Get_20_Control_20_Hilite,
kVPXMethod_Get_20_Control_20_ID,
kVPXMethod_Get_20_Control_20_Key,
kVPXMethod_Get_20_Control_20_Kind,
kVPXMethod_Get_20_Control_20_Maximum,
kVPXMethod_Get_20_Control_20_Minimum,
kVPXMethod_Get_20_Control_20_Record,
kVPXMethod_Get_20_Control_20_Title,
kVPXMethod_Get_20_Control_20_Value,
kVPXMethod_Get_20_ControlRef,
kVPXMethod_Get_20_Copy_20_Frameworks_3F_,
kVPXMethod_Get_20_CoreGraphics_20_Context,
kVPXMethod_Get_20_Count,
kVPXMethod_Get_20_Creation_20_Attributes,
kVPXMethod_Get_20_Creation_20_Options_20_Record,
kVPXMethod_Get_20_Creator,
kVPXMethod_Get_20_Creator_20_Code,
kVPXMethod_Get_20_Current_20_Allocator,
kVPXMethod_Get_20_Current_20_Data,
kVPXMethod_Get_20_Current_20_Drop_20_Flavors,
kVPXMethod_Get_20_Current_20_Find,
kVPXMethod_Get_20_Current_20_Find_20_Result,
kVPXMethod_Get_20_Current_20_Index,
kVPXMethod_Get_20_Current_20_Item,
kVPXMethod_Get_20_Current_20_Operation,
kVPXMethod_Get_20_Current_20_Opers,
kVPXMethod_Get_20_Current_20_State,
kVPXMethod_Get_20_Current_20_Task_20_ID,
kVPXMethod_Get_20_Current_20_Tasks,
kVPXMethod_Get_20_Current_20_Text,
kVPXMethod_Get_20_Current_20_Thread_20_ID,
kVPXMethod_Get_20_Current_20_Transform,
kVPXMethod_Get_20_Current_20_Value,
kVPXMethod_Get_20_Current_20_Values,
kVPXMethod_Get_20_Current_20_View,
kVPXMethod_Get_20_Custom_20_Plist_20_Keys,
kVPXMethod_Get_20_Custom_20_Properties,
kVPXMethod_Get_20_Custom_20_Reply,
kVPXMethod_Get_20_Custom_20_View_20_ID,
kVPXMethod_Get_20_Data,
kVPXMethod_Get_20_Data_20_Pointer_20_For_20_Name,
kVPXMethod_Get_20_Databrowser,
kVPXMethod_Get_20_Debug_20_Window,
kVPXMethod_Get_20_Debug_20_Windows,
kVPXMethod_Get_20_Default_20_Items,
kVPXMethod_Get_20_Default_20_Order,
kVPXMethod_Get_20_Default_20_Properties,
kVPXMethod_Get_20_Delimiter,
kVPXMethod_Get_20_Depth_20_Flag,
kVPXMethod_Get_20_Description,
kVPXMethod_Get_20_Desktop,
kVPXMethod_Get_20_Desktop_20_Windows,
kVPXMethod_Get_20_Diamond_20_Corners,
kVPXMethod_Get_20_Direct_20_Object,
kVPXMethod_Get_20_Direct_20_Value,
kVPXMethod_Get_20_Directory_20_Items,
kVPXMethod_Get_20_Disclosure_20_Column,
kVPXMethod_Get_20_Display_20_Name,
kVPXMethod_Get_20_Display_20_Type,
kVPXMethod_Get_20_Document_20_Count,
kVPXMethod_Get_20_Domain,
kVPXMethod_Get_20_Double_20_Value,
kVPXMethod_Get_20_Drag_20_Allowable_20_Actions,
kVPXMethod_Get_20_Drag_20_Drop_20_Action,
kVPXMethod_Get_20_Drag_20_Input_20_Callback,
kVPXMethod_Get_20_Drag_20_Mouse,
kVPXMethod_Get_20_Drag_20_Origin,
kVPXMethod_Get_20_Drag_20_Pasteboard,
kVPXMethod_Get_20_DragRef,
kVPXMethod_Get_20_Drawing_20_Enabled_3F_,
kVPXMethod_Get_20_Drop_20_Flavor_20_UTIs,
kVPXMethod_Get_20_Drop_20_Flavors,
kVPXMethod_Get_20_Duration,
kVPXMethod_Get_20_EP_20_Attributes,
kVPXMethod_Get_20_EP_20_Boolean,
kVPXMethod_Get_20_EP_20_CFMutableArray,
kVPXMethod_Get_20_EP_20_CFMutableArrayRef,
kVPXMethod_Get_20_EP_20_CFString,
kVPXMethod_Get_20_EP_20_CFStringRef,
kVPXMethod_Get_20_EP_20_CGContextRef,
kVPXMethod_Get_20_EP_20_Control_20_Part,
kVPXMethod_Get_20_EP_20_Control_20_Region,
kVPXMethod_Get_20_EP_20_DragRef,
kVPXMethod_Get_20_EP_20_Enumeration,
kVPXMethod_Get_20_EP_20_HICommand,
kVPXMethod_Get_20_EP_20_HIObjectRef,
kVPXMethod_Get_20_EP_20_HIPoint,
kVPXMethod_Get_20_EP_20_HISize,
kVPXMethod_Get_20_EP_20_Mouse_20_Location_20_CG,
kVPXMethod_Get_20_EP_20_Mouse_20_Location_20_QD,
kVPXMethod_Get_20_EP_20_Object,
kVPXMethod_Get_20_EP_20_QDPoint,
kVPXMethod_Get_20_EP_20_QDRect,
kVPXMethod_Get_20_EP_20_QDRgnHandle,
kVPXMethod_Get_20_EP_20_SInt16,
kVPXMethod_Get_20_EP_20_SInt32,
kVPXMethod_Get_20_EP_20_UInt32,
kVPXMethod_Get_20_EP_20_typePartCode,
kVPXMethod_Get_20_EP_20_typePtr,
kVPXMethod_Get_20_EP_20_typeRef,
kVPXMethod_Get_20_Editable_3F_,
kVPXMethod_Get_20_Editor,
kVPXMethod_Get_20_Editors,
kVPXMethod_Get_20_Enabled_3F_,
kVPXMethod_Get_20_Encoding_20_Default,
kVPXMethod_Get_20_Encoding_20_Fastest,
kVPXMethod_Get_20_Encoding_20_Smallest,
kVPXMethod_Get_20_Encoding_20_System,
kVPXMethod_Get_20_Engine_20_Framework,
kVPXMethod_Get_20_Erase_20_Color,
kVPXMethod_Get_20_Error,
kVPXMethod_Get_20_Error_3F_,
kVPXMethod_Get_20_Errors,
kVPXMethod_Get_20_Event_20_Callback_20_Behavior,
kVPXMethod_Get_20_Event_20_Class,
kVPXMethod_Get_20_Event_20_Handlers,
kVPXMethod_Get_20_Event_20_ID,
kVPXMethod_Get_20_Event_20_Kind,
kVPXMethod_Get_20_Event_20_Parameter,
kVPXMethod_Get_20_Event_20_Parameters,
kVPXMethod_Get_20_Event_20_Reference,
kVPXMethod_Get_20_Event_20_Service,
kVPXMethod_Get_20_EventLoopRef,
kVPXMethod_Get_20_EventTargetRef,
kVPXMethod_Get_20_EventTypeSpec,
kVPXMethod_Get_20_Exclude_20_Flavors_20_For_20_Type,
kVPXMethod_Get_20_Exclude_20_IDs_20_For_20_Type,
kVPXMethod_Get_20_Exclude_20_Types,
kVPXMethod_Get_20_Exit_20_Result_20_Code,
kVPXMethod_Get_20_Export_20_Level,
kVPXMethod_Get_20_Export_20_Mode_20_Extension,
kVPXMethod_Get_20_Export_20_Name,
kVPXMethod_Get_20_External_20_Constant,
kVPXMethod_Get_20_Extracted_20_Value,
kVPXMethod_Get_20_FSRef,
kVPXMethod_Get_20_FSSpec,
kVPXMethod_Get_20_FX_20_ScriptCode,
kVPXMethod_Get_20_File,
kVPXMethod_Get_20_File_20_Creator,
kVPXMethod_Get_20_File_20_Name,
kVPXMethod_Get_20_File_20_Translation_20_Spec,
kVPXMethod_Get_20_File_20_Type,
kVPXMethod_Get_20_File_20_Type_20_Extension,
kVPXMethod_Get_20_Filter_20_Callback_20_Behavior,
kVPXMethod_Get_20_Find,
kVPXMethod_Get_20_Find_20_Pasteboard,
kVPXMethod_Get_20_Find_20_Pasteboard_20_Text,
kVPXMethod_Get_20_Find_20_Sheet,
kVPXMethod_Get_20_Find_20_State,
kVPXMethod_Get_20_Find_20_Text,
kVPXMethod_Get_20_Find_20_Window,
kVPXMethod_Get_20_Finder_20_Info,
kVPXMethod_Get_20_First_20_Page,
kVPXMethod_Get_20_First_20_Subview,
kVPXMethod_Get_20_First_20_Subview_20_HIViewRef,
kVPXMethod_Get_20_Flavors,
kVPXMethod_Get_20_Flavors_20_For_20_Type,
kVPXMethod_Get_20_Focus_20_Part,
kVPXMethod_Get_20_Folder,
kVPXMethod_Get_20_FontStyleRec,
kVPXMethod_Get_20_Form,
kVPXMethod_Get_20_Format,
kVPXMethod_Get_20_Frame,
kVPXMethod_Get_20_Frame_20_In_20_Window,
kVPXMethod_Get_20_Frame_20_In_20_Windowxx,
kVPXMethod_Get_20_Framework_20_Constant,
kVPXMethod_Get_20_Framework_20_Structure,
kVPXMethod_Get_20_From_20_Pasteboard,
kVPXMethod_Get_20_Front_20_Method,
kVPXMethod_Get_20_Front_20_Project,
kVPXMethod_Get_20_Front_20_Window,
kVPXMethod_Get_20_Front_20_Window_20_Type,
kVPXMethod_Get_20_Full_20_Path,
kVPXMethod_Get_20_Full_20_Path_20_CFString,
kVPXMethod_Get_20_Full_20_Path_20_CFURL,
kVPXMethod_Get_20_Function_20_Pointer_20_For_20_Name,
kVPXMethod_Get_20_Grandparent_20_Helper,
kVPXMethod_Get_20_Gregorian_20_Date,
kVPXMethod_Get_20_HICommand_20_Cache,
kVPXMethod_Get_20_HICommand_20_State,
kVPXMethod_Get_20_HIObject_20_Class,
kVPXMethod_Get_20_HIObject_20_Instance_20_Type,
kVPXMethod_Get_20_HIObject_20_Reference,
kVPXMethod_Get_20_HIObjectClassRef,
kVPXMethod_Get_20_HIObjectRef,
kVPXMethod_Get_20_HIToolbarItemRef,
kVPXMethod_Get_20_HIToolbarRef,
kVPXMethod_Get_20_HIView_20_Class,
kVPXMethod_Get_20_HIViewRef,
kVPXMethod_Get_20_ID,
kVPXMethod_Get_20_IO_20_Value,
kVPXMethod_Get_20_Icon,
kVPXMethod_Get_20_Icon_20_Reference,
kVPXMethod_Get_20_IconRef,
kVPXMethod_Get_20_Ideal_20_Size,
kVPXMethod_Get_20_Identifier,
kVPXMethod_Get_20_Identity_20_Name,
kVPXMethod_Get_20_Idle_20_Action,
kVPXMethod_Get_20_Inarity,
kVPXMethod_Get_20_Indeterminate_3F_,
kVPXMethod_Get_20_Index,
kVPXMethod_Get_20_Info,
kVPXMethod_Get_20_Initial_20_Attributes,
kVPXMethod_Get_20_Initial_20_Delay,
kVPXMethod_Get_20_Initial_20_Descriptive_20_Text,
kVPXMethod_Get_20_Initial_20_Lists,
kVPXMethod_Get_20_Initial_20_Menu,
kVPXMethod_Get_20_Initial_20_Pasteboards,
kVPXMethod_Get_20_Initial_20_Services,
kVPXMethod_Get_20_Initial_20_Tasks,
kVPXMethod_Get_20_Initial_20_View,
kVPXMethod_Get_20_Initial_3F_,
kVPXMethod_Get_20_Input_20_Specifiers,
kVPXMethod_Get_20_Instances,
kVPXMethod_Get_20_Integer,
kVPXMethod_Get_20_Integer_20_Value,
kVPXMethod_Get_20_Item,
kVPXMethod_Get_20_Item_20_Bounds,
kVPXMethod_Get_20_Item_20_Helper,
kVPXMethod_Get_20_Item_20_ID,
kVPXMethod_Get_20_Item_20_List,
kVPXMethod_Get_20_Item_20_RGBA,
kVPXMethod_Get_20_Item_20_Type,
kVPXMethod_Get_20_Item_20_UTI,
kVPXMethod_Get_20_Item_20_Value_20_By_20_UTI,
kVPXMethod_Get_20_ItemID,
kVPXMethod_Get_20_Items,
kVPXMethod_Get_20_Key,
kVPXMethod_Get_20_Key_20_Script,
kVPXMethod_Get_20_Key_20_Value,
kVPXMethod_Get_20_Known_20_Flavors,
kVPXMethod_Get_20_Known_20_IDs,
kVPXMethod_Get_20_Known_20_IDs_20_For_20_Type,
kVPXMethod_Get_20_Known_20_Items,
kVPXMethod_Get_20_Known_20_Projects,
kVPXMethod_Get_20_Label,
kVPXMethod_Get_20_Last_20_Page,
kVPXMethod_Get_20_Last_20_Subview,
kVPXMethod_Get_20_Last_20_Subview_20_HIViewRef,
kVPXMethod_Get_20_Left,
kVPXMethod_Get_20_Length,
kVPXMethod_Get_20_Library_20_ID,
kVPXMethod_Get_20_Library_20_Info,
kVPXMethod_Get_20_Limit_20_UTIs,
kVPXMethod_Get_20_Line,
kVPXMethod_Get_20_Line_20_Size,
kVPXMethod_Get_20_Link_20_Frameworks,
kVPXMethod_Get_20_Link_20_Headers,
kVPXMethod_Get_20_Link_20_Is_20_Private_3F_,
kVPXMethod_Get_20_Link_20_States,
kVPXMethod_Get_20_List,
kVPXMethod_Get_20_List_20_Array,
kVPXMethod_Get_20_List_20_ArrayRef,
kVPXMethod_Get_20_List_20_Datum,
kVPXMethod_Get_20_List_20_View,
kVPXMethod_Get_20_List_20_Window,
kVPXMethod_Get_20_Load_20_Function_20_Name,
kVPXMethod_Get_20_Local_20_Where,
kVPXMethod_Get_20_Local_20_WhereQD,
kVPXMethod_Get_20_Location,
kVPXMethod_Get_20_Long_20_Help_20_Text,
kVPXMethod_Get_20_MPTask,
kVPXMethod_Get_20_Main_20_Bundle,
kVPXMethod_Get_20_Maximum_20_Size,
kVPXMethod_Get_20_Maximum_20_Size_20_For_20_Encoding,
kVPXMethod_Get_20_Maximum_20_Value,
kVPXMethod_Get_20_Maximum_20_Width,
kVPXMethod_Get_20_Menu_20_ID,
kVPXMethod_Get_20_Menu_20_Items,
kVPXMethod_Get_20_MenuRef,
kVPXMethod_Get_20_Method_20_Data,
kVPXMethod_Get_20_Method_20_Name,
kVPXMethod_Get_20_Methods,
kVPXMethod_Get_20_Minimum_20_MacOSX,
kVPXMethod_Get_20_Minimum_20_Size,
kVPXMethod_Get_20_Minimum_20_Value,
kVPXMethod_Get_20_Minimum_20_Width,
kVPXMethod_Get_20_Modality,
kVPXMethod_Get_20_Mode,
kVPXMethod_Get_20_Mutable_20_Byte_20_Pointer,
kVPXMethod_Get_20_Name,
kVPXMethod_Get_20_Name_20_As_20_String,
kVPXMethod_Get_20_Name_20_As_20_Unicode,
kVPXMethod_Get_20_Name_20_Plural,
kVPXMethod_Get_20_Name_20_Singular,
kVPXMethod_Get_20_Nav_20_Class,
kVPXMethod_Get_20_NavTypeList,
kVPXMethod_Get_20_Needs_20_Display_3F_,
kVPXMethod_Get_20_New_20_Line_20_Char,
kVPXMethod_Get_20_New_20_Line_20_Mode_3F_,
kVPXMethod_Get_20_Next_20_Handler,
kVPXMethod_Get_20_Next_20_View,
kVPXMethod_Get_20_Next_20_View_20_HIViewRef,
kVPXMethod_Get_20_Not_20_Saved_3F_,
kVPXMethod_Get_20_Number_20_Value,
kVPXMethod_Get_20_Object,
kVPXMethod_Get_20_OpaqueControlRef,
kVPXMethod_Get_20_Operation_20_Arity,
kVPXMethod_Get_20_Operation_20_Flag,
kVPXMethod_Get_20_Option,
kVPXMethod_Get_20_Option_20_Key,
kVPXMethod_Get_20_Options,
kVPXMethod_Get_20_Origin,
kVPXMethod_Get_20_Original_20_Owner,
kVPXMethod_Get_20_Original_20_Text,
kVPXMethod_Get_20_Outarity,
kVPXMethod_Get_20_Output_20_Count,
kVPXMethod_Get_20_Output_20_Specifiers,
kVPXMethod_Get_20_Owner,
kVPXMethod_Get_20_PMPageFormat,
kVPXMethod_Get_20_PMPrintSession,
kVPXMethod_Get_20_PMPrintSettings,
kVPXMethod_Get_20_Package_20_ID,
kVPXMethod_Get_20_Package_20_Info,
kVPXMethod_Get_20_Package_20_Name,
kVPXMethod_Get_20_Packager,
kVPXMethod_Get_20_Packager_20_State,
kVPXMethod_Get_20_Page_20_Range,
kVPXMethod_Get_20_Page_20_Setup_20_Done_20_Callback,
kVPXMethod_Get_20_Parameter,
kVPXMethod_Get_20_Parameter_20_AEDesc,
kVPXMethod_Get_20_Parameter_20_List_3F_,
kVPXMethod_Get_20_Parameter_20_String,
kVPXMethod_Get_20_Parent,
kVPXMethod_Get_20_Parent_20_Frame,
kVPXMethod_Get_20_Parent_20_ID,
kVPXMethod_Get_20_Parent_20_Window,
kVPXMethod_Get_20_ParentID,
kVPXMethod_Get_20_Part_20_Hit,
kVPXMethod_Get_20_Pasteboard,
kVPXMethod_Get_20_PasteboardRef,
kVPXMethod_Get_20_Pasteboards,
kVPXMethod_Get_20_Path,
kVPXMethod_Get_20_Path_20_List,
kVPXMethod_Get_20_Path_20_Name,
kVPXMethod_Get_20_Path_20_To_20_Binary,
kVPXMethod_Get_20_Permission,
kVPXMethod_Get_20_Persistents,
kVPXMethod_Get_20_PkgInfo_20_Creator,
kVPXMethod_Get_20_PkgInfo_20_Type,
kVPXMethod_Get_20_Plug_20_Ins,
kVPXMethod_Get_20_Port,
kVPXMethod_Get_20_Port_20_Bounds,
kVPXMethod_Get_20_Port_20_Number,
kVPXMethod_Get_20_Position_20_Mode,
kVPXMethod_Get_20_Position_20_Offset,
kVPXMethod_Get_20_Preview_20_Callback_20_Behavior,
kVPXMethod_Get_20_Previous_20_View,
kVPXMethod_Get_20_Previous_20_View_20_HIViewRef,
kVPXMethod_Get_20_Primary_20_Prompt,
kVPXMethod_Get_20_Primitives,
kVPXMethod_Get_20_Print_20_Dialog_20_Done_20_Callback,
kVPXMethod_Get_20_Print_20_Job,
kVPXMethod_Get_20_ProcPtr_20_Name,
kVPXMethod_Get_20_Product_20_Name,
kVPXMethod_Get_20_Progress,
kVPXMethod_Get_20_Progress_20_Percent,
kVPXMethod_Get_20_Project,
kVPXMethod_Get_20_Project_20_Data,
kVPXMethod_Get_20_Project_20_Helper,
kVPXMethod_Get_20_Project_20_Setting,
kVPXMethod_Get_20_Projects,
kVPXMethod_Get_20_Projects_20_Max,
kVPXMethod_Get_20_Promise_20_Callback,
kVPXMethod_Get_20_Promised_3F_,
kVPXMethod_Get_20_Property,
kVPXMethod_Get_20_Property_20_Attributes,
kVPXMethod_Get_20_Property_20_Flags,
kVPXMethod_Get_20_Property_20_ID,
kVPXMethod_Get_20_Property_20_Long,
kVPXMethod_Get_20_Property_20_Object,
kVPXMethod_Get_20_Property_20_Size,
kVPXMethod_Get_20_Property_20_Type,
kVPXMethod_Get_20_Put_20_Attributes,
kVPXMethod_Get_20_Put_20_Values,
kVPXMethod_Get_20_Put_20_Values_2023_1,
kVPXMethod_Get_20_QDFrame,
kVPXMethod_Get_20_QDPoint,
kVPXMethod_Get_20_Queue_20_ID,
kVPXMethod_Get_20_Quitting_3F_,
kVPXMethod_Get_20_Read_20_Cache_20_Mode,
kVPXMethod_Get_20_Read_20_Line_20_Mode,
kVPXMethod_Get_20_Read_20_Verify_20_Mode,
kVPXMethod_Get_20_Recents_20_Service,
kVPXMethod_Get_20_Reference,
kVPXMethod_Get_20_Registrar_20_Pasteboard,
kVPXMethod_Get_20_Relative_20_Item,
kVPXMethod_Get_20_Release_20_Version,
kVPXMethod_Get_20_Release_3F_,
kVPXMethod_Get_20_Repeat_20_Delay,
kVPXMethod_Get_20_Replacing_3F_,
kVPXMethod_Get_20_Reply,
kVPXMethod_Get_20_Reply_20_Parameter,
kVPXMethod_Get_20_Reply_20_Parameter_20_AEDesc,
kVPXMethod_Get_20_Reply_20_Record,
kVPXMethod_Get_20_Reply_20_Selection,
kVPXMethod_Get_20_Request_20_Only_3F_,
kVPXMethod_Get_20_Required_20_Services,
kVPXMethod_Get_20_Resource_20_FSRef,
kVPXMethod_Get_20_Resource_20_File,
kVPXMethod_Get_20_Result,
kVPXMethod_Get_20_Result_20_Code,
kVPXMethod_Get_20_Result_20_List,
kVPXMethod_Get_20_Result_20_Text,
kVPXMethod_Get_20_Retain_20_Count,
kVPXMethod_Get_20_Return_20_ID,
kVPXMethod_Get_20_Return_20_String,
kVPXMethod_Get_20_Review_3F_,
kVPXMethod_Get_20_Revision_20_ID,
kVPXMethod_Get_20_Right,
kVPXMethod_Get_20_Root_20_HIViewRef,
kVPXMethod_Get_20_Root_20_SDK,
kVPXMethod_Get_20_SDKs,
kVPXMethod_Get_20_SInt16,
kVPXMethod_Get_20_SInt32,
kVPXMethod_Get_20_SInt8,
kVPXMethod_Get_20_Save_20_Changes_3F_,
kVPXMethod_Get_20_Save_20_Data,
kVPXMethod_Get_20_Script,
kVPXMethod_Get_20_Search_20_Phrase,
kVPXMethod_Get_20_Search_20_Text,
kVPXMethod_Get_20_Search_3F_,
kVPXMethod_Get_20_Secondary_20_Prompt,
kVPXMethod_Get_20_Seconds_20_Since_20_Date,
kVPXMethod_Get_20_Section_20_Data,
kVPXMethod_Get_20_Section_20_Items,
kVPXMethod_Get_20_Segments,
kVPXMethod_Get_20_Select_20_Count,
kVPXMethod_Get_20_Select_20_Data,
kVPXMethod_Get_20_Select_20_Item,
kVPXMethod_Get_20_Select_20_Items,
kVPXMethod_Get_20_Select_20_List,
kVPXMethod_Get_20_Select_20_Name,
kVPXMethod_Get_20_Select_20_Result,
kVPXMethod_Get_20_Select_20_Values,
kVPXMethod_Get_20_Select_20_View,
kVPXMethod_Get_20_Selected,
kVPXMethod_Get_20_Selected_20_Cases,
kVPXMethod_Get_20_Selected_20_Comments,
kVPXMethod_Get_20_Selected_20_Files,
kVPXMethod_Get_20_Selected_20_IO,
kVPXMethod_Get_20_Selected_20_Local,
kVPXMethod_Get_20_Selected_20_Operations,
kVPXMethod_Get_20_Sender_20_Only_3F_,
kVPXMethod_Get_20_Sender_20_Translated_3F_,
kVPXMethod_Get_20_Service_20_Manager,
kVPXMethod_Get_20_Services,
kVPXMethod_Get_20_Session,
kVPXMethod_Get_20_Session_20_Error,
kVPXMethod_Get_20_Settings,
kVPXMethod_Get_20_Shell_20_Result,
kVPXMethod_Get_20_Shell_20_Text,
kVPXMethod_Get_20_Shift_20_Key,
kVPXMethod_Get_20_Short_20_Help_20_Text,
kVPXMethod_Get_20_Signature,
kVPXMethod_Get_20_Size,
kVPXMethod_Get_20_Size_20_Constraints,
kVPXMethod_Get_20_Sort_20_Order,
kVPXMethod_Get_20_Sortable_3F_,
kVPXMethod_Get_20_Sorted_20_SDK_20_Names,
kVPXMethod_Get_20_Sources,
kVPXMethod_Get_20_Specification,
kVPXMethod_Get_20_Stack_20_Service,
kVPXMethod_Get_20_Stack_20_Size,
kVPXMethod_Get_20_Stage,
kVPXMethod_Get_20_Standard_20_List_3F_,
kVPXMethod_Get_20_Standard_20_Text_3F_,
kVPXMethod_Get_20_Static_20_Directories,
kVPXMethod_Get_20_Stationery_3F_,
kVPXMethod_Get_20_Status,
kVPXMethod_Get_20_String,
kVPXMethod_Get_20_Structure_20_Pointer_20_For_20_Name,
kVPXMethod_Get_20_Sub_20_ControlRef,
kVPXMethod_Get_20_Subview_20_HIViewRef_20_Hit,
kVPXMethod_Get_20_Subview_20_Hit,
kVPXMethod_Get_20_Superview,
kVPXMethod_Get_20_Superview_20_HIViewRef,
kVPXMethod_Get_20_Supported_20_Behaviors,
kVPXMethod_Get_20_Supports_20_Drop_3F_,
kVPXMethod_Get_20_Supports_20_ZeroLink_3F_,
kVPXMethod_Get_20_System_20_Translated_3F_,
kVPXMethod_Get_20_TXNObject,
kVPXMethod_Get_20_Target,
kVPXMethod_Get_20_Target_20_AEDesc,
kVPXMethod_Get_20_Task_20_ID,
kVPXMethod_Get_20_Tasty_20_Pasteboard,
kVPXMethod_Get_20_Term,
kVPXMethod_Get_20_Text,
kVPXMethod_Get_20_Text_20_Command,
kVPXMethod_Get_20_The_20_Drag,
kVPXMethod_Get_20_Theme_20_Brush_20_RGBA,
kVPXMethod_Get_20_This_20_Case,
kVPXMethod_Get_20_Title,
kVPXMethod_Get_20_Title_20_CFString,
kVPXMethod_Get_20_Title_20_Offset,
kVPXMethod_Get_20_Tool_20_Set,
kVPXMethod_Get_20_Toolbar,
kVPXMethod_Get_20_Top,
kVPXMethod_Get_20_Topical_3F_,
kVPXMethod_Get_20_Total_20_Bounds,
kVPXMethod_Get_20_Total_20_Size,
kVPXMethod_Get_20_Transaction_20_ID,
kVPXMethod_Get_20_Translation_20_Needed_3F_,
kVPXMethod_Get_20_Triangle_20_North_20_Corners,
kVPXMethod_Get_20_Triangle_20_South_20_Corners,
kVPXMethod_Get_20_Type,
kVPXMethod_Get_20_Type_20_ID,
kVPXMethod_Get_20_Type_20_List,
kVPXMethod_Get_20_Type_20_Number,
kVPXMethod_Get_20_UInt16,
kVPXMethod_Get_20_UInt32,
kVPXMethod_Get_20_UInt8,
kVPXMethod_Get_20_UPP_20_Allocate,
kVPXMethod_Get_20_UPP_20_Dispose,
kVPXMethod_Get_20_UPP_20_Pointer,
kVPXMethod_Get_20_URL,
kVPXMethod_Get_20_URL_20_Text,
kVPXMethod_Get_20_UTIs_20_For_20_Type,
kVPXMethod_Get_20_UniChar,
kVPXMethod_Get_20_Universal,
kVPXMethod_Get_20_Universals,
kVPXMethod_Get_20_User_20_Data,
kVPXMethod_Get_20_VPL_20_Data,
kVPXMethod_Get_20_Valid_3F_,
kVPXMethod_Get_20_Value,
kVPXMethod_Get_20_Value_20_Address,
kVPXMethod_Get_20_Value_20_At_20_Index,
kVPXMethod_Get_20_Value_20_At_20_Index_20_As_20_CFStringRef,
kVPXMethod_Get_20_Value_20_At_20_Index_20_As_20_String,
kVPXMethod_Get_20_Value_20_CFType,
kVPXMethod_Get_20_Value_20_Clipboard,
kVPXMethod_Get_20_Value_20_Data,
kVPXMethod_Get_20_Value_20_For_20_Info_20_Dictionary_20_Key,
kVPXMethod_Get_20_Value_20_Item,
kVPXMethod_Get_20_Value_20_Type,
kVPXMethod_Get_20_Values,
kVPXMethod_Get_20_Values_20_As_20_UTIs,
kVPXMethod_Get_20_Verify_20_Reads_3F_,
kVPXMethod_Get_20_Version,
kVPXMethod_Get_20_View_20_For_20_Mouse_20_Event,
kVPXMethod_Get_20_Viewer_20_Windows,
kVPXMethod_Get_20_Views_20_For_20_Type,
kVPXMethod_Get_20_Visible_3F_,
kVPXMethod_Get_20_Visual_20_Frame,
kVPXMethod_Get_20_Watchpoint,
kVPXMethod_Get_20_Watchpoints,
kVPXMethod_Get_20_WhereQD,
kVPXMethod_Get_20_Window,
kVPXMethod_Get_20_Window_20_Alpha,
kVPXMethod_Get_20_Window_20_Bounds,
kVPXMethod_Get_20_Window_20_Drag_20_Handler,
kVPXMethod_Get_20_Window_20_Origin,
kVPXMethod_Get_20_Window_20_Pasteboard_20_Handler,
kVPXMethod_Get_20_Window_20_Printing_20_Handler,
kVPXMethod_Get_20_Window_20_Record,
kVPXMethod_Get_20_WindowRef,
kVPXMethod_Get_20_Windows,
kVPXMethod_Get_20_Write_20_Cache_20_Mode,
kVPXMethod_Get_20_X,
kVPXMethod_Get_20_X_20_Int,
kVPXMethod_Get_20_Y,
kVPXMethod_Get_20_Y_20_Int,
kVPXMethod_Grow_20_By,
kVPXMethod_Grow_20_Item,
kVPXMethod_Grow_20_Rectangle,
kVPXMethod_H_20_Code_20_Footer,
kVPXMethod_H_20_Code_20_Header,
kVPXMethod_H_20_File_20_Name,
kVPXMethod_HIC_20_Cancel,
kVPXMethod_HIC_20_Checks,
kVPXMethod_HIC_20_Classes,
kVPXMethod_HIC_20_Clear_20_Breakpoints,
kVPXMethod_HIC_20_Click_20_Marten,
kVPXMethod_HIC_20_Click_20_Utility,
kVPXMethod_HIC_20_Contents,
kVPXMethod_HIC_20_Control_20_Change,
kVPXMethod_HIC_20_Control_20_Reverse,
kVPXMethod_HIC_20_Deep_20_Cases,
kVPXMethod_HIC_20_Dock_20_Position,
kVPXMethod_HIC_20_Edit_20_Basics,
kVPXMethod_HIC_20_Edit_20_Clear,
kVPXMethod_HIC_20_Edit_20_Copy,
kVPXMethod_HIC_20_Edit_20_Copy_20_Value,
kVPXMethod_HIC_20_Edit_20_Cut,
kVPXMethod_HIC_20_Edit_20_Duplicate,
kVPXMethod_HIC_20_Edit_20_Move_20_To,
kVPXMethod_HIC_20_Edit_20_Paste,
kVPXMethod_HIC_20_Edit_20_Paste_20_Value,
kVPXMethod_HIC_20_Edit_20_Propagate_20_Attribute,
kVPXMethod_HIC_20_Edit_20_Reveal_20_Container,
kVPXMethod_HIC_20_Edit_20_Reveal_20_Parent,
kVPXMethod_HIC_20_Edit_20_Reveal_20_Path,
kVPXMethod_HIC_20_Edit_20_Select_20_All,
kVPXMethod_HIC_20_Exec_20_Abort,
kVPXMethod_HIC_20_Exec_20_Execute_20_Method,
kVPXMethod_HIC_20_Exec_20_Resume,
kVPXMethod_HIC_20_Exec_20_Run_20_Application,
kVPXMethod_HIC_20_Exec_20_Step,
kVPXMethod_HIC_20_Exec_20_Step_20_In,
kVPXMethod_HIC_20_Exec_20_Step_20_Out,
kVPXMethod_HIC_20_Exec_20_Step_20_Over,
kVPXMethod_HIC_20_Export_20_Mode,
kVPXMethod_HIC_20_File_20_Add_20_To_20_Project,
kVPXMethod_HIC_20_File_20_Build,
kVPXMethod_HIC_20_File_20_Export,
kVPXMethod_HIC_20_File_20_Import,
kVPXMethod_HIC_20_File_20_New,
kVPXMethod_HIC_20_File_20_New_20_Project,
kVPXMethod_HIC_20_File_20_New_20_Section,
kVPXMethod_HIC_20_File_20_New_20_Text,
kVPXMethod_HIC_20_File_20_Open_20_App,
kVPXMethod_HIC_20_File_20_Open_20_Project,
kVPXMethod_HIC_20_File_20_Open_20_Section,
kVPXMethod_HIC_20_File_20_Open_20_Text,
kVPXMethod_HIC_20_File_20_Revert,
kVPXMethod_HIC_20_File_20_Save,
kVPXMethod_HIC_20_File_20_Save_20_As,
kVPXMethod_HIC_20_File_20_Update_20_App,
kVPXMethod_HIC_20_Find_20_Find,
kVPXMethod_HIC_20_Go_20_To_20_URL,
kVPXMethod_HIC_20_IO_20_Change,
kVPXMethod_HIC_20_Info_20_Check_20_Program,
kVPXMethod_HIC_20_Info_20_Last_20_Error,
kVPXMethod_HIC_20_Initial_20_Window_3F_,
kVPXMethod_HIC_20_Line_20_Hilite_3F_,
kVPXMethod_HIC_20_Messages,
kVPXMethod_HIC_20_Nav_20_Back,
kVPXMethod_HIC_20_Nav_20_Forward,
kVPXMethod_HIC_20_OK,
kVPXMethod_HIC_20_Open_20_Cases,
kVPXMethod_HIC_20_Ops_20_Change,
kVPXMethod_HIC_20_Ops_20_Local_20_To_20_Method,
kVPXMethod_HIC_20_Ops_20_Ops_20_To_20_Local,
kVPXMethod_HIC_20_Ops_20_Reset,
kVPXMethod_HIC_20_Ops_20_Resize,
kVPXMethod_HIC_20_Ops_20_Tidy,
kVPXMethod_HIC_20_Pick_20_Arch,
kVPXMethod_HIC_20_Pick_20_Min_20_MacOS,
kVPXMethod_HIC_20_Pick_20_Root,
kVPXMethod_HIC_20_Pick_20_Type,
kVPXMethod_HIC_20_Proto_20_Windows,
kVPXMethod_HIC_20_Quit_20_Now,
kVPXMethod_HIC_20_Recent_20_Projects,
kVPXMethod_HIC_20_Recents_20_Clear,
kVPXMethod_HIC_20_Recents_20_Open_20_Project,
kVPXMethod_HIC_20_Replace_20_And_20_Find,
kVPXMethod_HIC_20_Reuse_20_List_3F_,
kVPXMethod_HIC_20_Run_20_Breakpoint,
kVPXMethod_HIC_20_Run_20_Mode,
kVPXMethod_HIC_20_Run_20_Tests,
kVPXMethod_HIC_20_Save_20_As,
kVPXMethod_HIC_20_Search,
kVPXMethod_HIC_20_Search_20_Apple,
kVPXMethod_HIC_20_Show_20_Breakpoints,
kVPXMethod_HIC_20_Status_20_File_20_New_3F_,
kVPXMethod_HIC_20_Toggle_20_Breakpoint,
kVPXMethod_HIC_20_Type_20_Change,
kVPXMethod_HIC_20_View_20_Change,
kVPXMethod_HIC_20_Window_20_Info,
kVPXMethod_HIC_20_Window_20_New_20_Projects,
kVPXMethod_HIC_20_Window_20_Project_20_Window,
kVPXMethod_HIC_20_Window_20_Projects,
kVPXMethod_HIC_20_Windows_20_Project,
kVPXMethod_HICommand_20_About,
kVPXMethod_HICommand_20_App_20_Custom,
kVPXMethod_HICommand_20_Determine_20_State,
kVPXMethod_HICommand_20_New,
kVPXMethod_HICommand_20_Open,
kVPXMethod_HICommand_20_Owner_20_State,
kVPXMethod_HICommand_20_Pasteboard_20_State,
kVPXMethod_HICommand_20_Preferences,
kVPXMethod_HICommand_20_Process,
kVPXMethod_HICommand_20_Quit,
kVPXMethod_HICommand_20_Selection_20_State,
kVPXMethod_HICommand_20_Update_20_Status,
kVPXMethod_HIObject_20_Construct,
kVPXMethod_HIObject_20_Destruct,
kVPXMethod_HIObject_20_Initialize,
kVPXMethod_HIObject_20_Is_20_Equal,
kVPXMethod_HIObject_20_Print_20_Debug_20_Info,
kVPXMethod_HIObjectRef_20_To_20_Object,
kVPXMethod_HIView_20_Get_20_Focus_20_Part,
kVPXMethod_HIView_20_Reshape_20_Structure,
kVPXMethod_HIView_20_Set_20_Needs_20_Display,
kVPXMethod_Half,
kVPXMethod_Handle_20_Break,
kVPXMethod_Handle_20_Fault,
kVPXMethod_Handle_20_Item_20_Click,
kVPXMethod_Handle_20_Selection_20_Click,
kVPXMethod_Has_20_Case_20_Stack_3F_,
kVPXMethod_Has_20_Instances_3F_,
kVPXMethod_Has_20_Left_20_Sender_20_Window_3F_,
kVPXMethod_Has_20_Prefix,
kVPXMethod_Has_20_Suffix,
kVPXMethod_Hash,
kVPXMethod_Have_20_Icon_20_Values_3F_,
kVPXMethod_Have_20_Row_20_Values_3F_,
kVPXMethod_Hide,
kVPXMethod_Hide_20_Control,
kVPXMethod_Hide_20_Drag_20_Hilite,
kVPXMethod_Hide_20_Hilite,
kVPXMethod_Hilite,
kVPXMethod_Hilite_20_Control,
kVPXMethod_INFO_3A20_Lookup,
kVPXMethod_INFO_3A20_SizeOf_20_Structure,
kVPXMethod_Idle,
kVPXMethod_Import_20_CPX,
kVPXMethod_Import_20_CPX_20_File,
kVPXMethod_Import_20_Primitives,
kVPXMethod_In_20_Current_20_Stack,
kVPXMethod_In_20_Last,
kVPXMethod_In_20_Message_20_Group_3F_,
kVPXMethod_Increase_20_Length,
kVPXMethod_Initial_20_What,
kVPXMethod_Initial_20_Where,
kVPXMethod_Initialize,
kVPXMethod_Initialize_20_Containers,
kVPXMethod_Initialize_20_Content,
kVPXMethod_Initialize_20_Control_20_Events,
kVPXMethod_Initialize_20_Drawers,
kVPXMethod_Initialize_20_Item_20_Callbacks,
kVPXMethod_Initialize_20_Item_20_Data,
kVPXMethod_Initialize_20_Item_20_Root,
kVPXMethod_Initialize_20_Progress_20_Window,
kVPXMethod_Initialize_20_Stack,
kVPXMethod_Initialize_20_Toolbar,
kVPXMethod_Initialize_20_Value,
kVPXMethod_Initialize_20_View,
kVPXMethod_Initialize_20_Window_20_Events,
kVPXMethod_Insert_20_Attribute,
kVPXMethod_Insert_20_Class_20_Attribute,
kVPXMethod_Insert_20_Root,
kVPXMethod_Insert_20_Terminal,
kVPXMethod_Inset_20_Rectangle,
kVPXMethod_Inside_20_Sender_20_Application_3F_,
kVPXMethod_Inside_20_Sender_20_Window_3F_,
kVPXMethod_Install,
kVPXMethod_Install_20_Action_20_Proc,
kVPXMethod_Install_20_Callback,
kVPXMethod_Install_20_Current_20_View,
kVPXMethod_Install_20_Data,
kVPXMethod_Install_20_Element,
kVPXMethod_Install_20_Frames,
kVPXMethod_Install_20_Handlers,
kVPXMethod_Install_20_Helper,
kVPXMethod_Install_20_Item,
kVPXMethod_Install_20_Names,
kVPXMethod_Install_20_Proxy,
kVPXMethod_Install_20_Root,
kVPXMethod_Install_20_Segments,
kVPXMethod_Install_20_Terminal,
kVPXMethod_Install_20_Thread,
kVPXMethod_Install_20_Toolbar,
kVPXMethod_Install_20_Tools,
kVPXMethod_Install_20_Value,
kVPXMethod_Instance_20_To_20_Object,
kVPXMethod_Int,
kVPXMethod_Integer_20_To_20_Boolean,
kVPXMethod_Integrate,
kVPXMethod_Integrate_20_First,
kVPXMethod_Ints_20_To_20_Rect,
kVPXMethod_Invalidate,
kVPXMethod_Invalidate_20_Auto,
kVPXMethod_Invalidate_20_Rect,
kVPXMethod_Invalidate_20_Region,
kVPXMethod_Is_20_CTM_20_Item_3F_,
kVPXMethod_Is_20_Completed_3F_,
kVPXMethod_Is_20_Compositing_3F_,
kVPXMethod_Is_20_Current_3F_,
kVPXMethod_Is_20_Desktop_3F_,
kVPXMethod_Is_20_Dirty,
kVPXMethod_Is_20_Empty_3F_,
kVPXMethod_Is_20_Executable_20_Loaded_3F_,
kVPXMethod_Is_20_Finished_3F_,
kVPXMethod_Is_20_Float_20_Type_3F_,
kVPXMethod_Is_20_Folder_3F_,
kVPXMethod_Is_20_Front_20_Window,
kVPXMethod_Is_20_In_20_Trash_3F_,
kVPXMethod_Is_20_KeyCode_20_Pressed_3F_,
kVPXMethod_Is_20_MacOS_3F_,
kVPXMethod_Is_20_Open_3F_,
kVPXMethod_Is_20_Or_20_Is_20_Descendant_3F_,
kVPXMethod_Is_20_Preemptive_3F_,
kVPXMethod_Is_20_Rect_3F_,
kVPXMethod_Is_20_Registered,
kVPXMethod_Is_20_Tasty_20_Flavor_3F_,
kVPXMethod_Is_20_Tasty_20_Pasteboard_3F_,
kVPXMethod_Is_20_Visible_3F_,
kVPXMethod_Isolate,
kVPXMethod_Isolate_20_First,
kVPXMethod_Item_20_Center,
kVPXMethod_Item_20_Data,
kVPXMethod_Item_20_Notification,
kVPXMethod_Item_20_Run,
kVPXMethod_Item_20_Start,
kVPXMethod_Item_20_Stop,
kVPXMethod_Key_20_Down,
kVPXMethod_Known_20_Type,
kVPXMethod_LS_20_Open_20_URL,
kVPXMethod_Launch_20_URL,
kVPXMethod_Line_20_Tool,
kVPXMethod_Link_20_Add_20_Frameworks,
kVPXMethod_Link_20_Sources_20_As,
kVPXMethod_Link_20_Tool,
kVPXMethod_Link_20_Tool_23_,
kVPXMethod_Linking_20_Failed,
kVPXMethod_Linking_20_Postflight,
kVPXMethod_Linking_20_Preflight,
kVPXMethod_List_20_Average,
kVPXMethod_List_20_Root_20_Export,
kVPXMethod_List_20_Root_20_Footer,
kVPXMethod_List_20_Root_20_Header,
kVPXMethod_Lists_20_To_20_List,
kVPXMethod_Load_20_Bundle,
kVPXMethod_Load_20_Executable,
kVPXMethod_Load_20_Info,
kVPXMethod_Load_20_Key_20_Value,
kVPXMethod_Load_20_Project_20_Setting,
kVPXMethod_Load_20_Project_20_Templates,
kVPXMethod_Load_20_Projects,
kVPXMethod_Load_20_Required_20_Services,
kVPXMethod_Load_20_Service,
kVPXMethod_Load_20_String,
kVPXMethod_Load_20_Type,
kVPXMethod_Local_20_To_20_Method,
kVPXMethod_Locate_20_File,
kVPXMethod_Lookup_20_Info,
kVPXMethod_Lookup_20_Project_20_Info,
kVPXMethod_Loop_20_Export,
kVPXMethod_Loop_20_Footer,
kVPXMethod_Loop_20_Header,
kVPXMethod_Lowercase,
kVPXMethod_MAIN,
kVPXMethod_Main,
kVPXMethod_Make_20_Attribute,
kVPXMethod_Make_20_Class,
kVPXMethod_Make_20_Clean,
kVPXMethod_Make_20_Clone,
kVPXMethod_Make_20_Count,
kVPXMethod_Make_20_Dirty,
kVPXMethod_Make_20_HIObject_20_Instance,
kVPXMethod_Make_20_HIView_20_Class,
kVPXMethod_Make_20_Method,
kVPXMethod_Make_20_Persistent,
kVPXMethod_Make_20_Section_20_Dirty,
kVPXMethod_Make_20_Terminal,
kVPXMethod_Mangle_20_Name,
kVPXMethod_Mark_20_Instances,
kVPXMethod_Marquee_20_Select,
kVPXMethod_Marquee_20_Select_23_,
kVPXMethod_Match_20_Identifier_3F_,
kVPXMethod_Match_20_Type,
kVPXMethod_Match_20_UTI_3F_,
kVPXMethod_Measure_20_Text,
kVPXMethod_Modifier_20_Key_20_Pressed_3F_,
kVPXMethod_Modify_20_Value_20_Use,
kVPXMethod_Mouse_20_Down,
kVPXMethod_Move_20_By,
kVPXMethod_Move_20_Case,
kVPXMethod_Move_20_Content_20_TopLeft_20_To,
kVPXMethod_Move_20_Control,
kVPXMethod_Move_20_Current_20_Case,
kVPXMethod_Move_20_Data,
kVPXMethod_Move_20_Item,
kVPXMethod_Move_20_Items,
kVPXMethod_Move_20_Origin_20_In_20_Limits,
kVPXMethod_Move_20_Origin_20_V,
kVPXMethod_Move_20_To,
kVPXMethod_Move_20_To_20_Point,
kVPXMethod_Moved,
kVPXMethod_Moving,
kVPXMethod_Multiply,
kVPXMethod_NULL_20_Event,
kVPXMethod_Nav_20_ASC_20_Callback,
kVPXMethod_Nav_20_Ask_20_Discard_20_Changes,
kVPXMethod_Nav_20_Ask_20_Review_20_Documents,
kVPXMethod_Nav_20_Ask_20_Save_20_Changes,
kVPXMethod_Nav_20_Choose_20_File,
kVPXMethod_Nav_20_Choose_20_Folder,
kVPXMethod_Nav_20_Choose_20_Object,
kVPXMethod_Nav_20_Choose_20_Volume,
kVPXMethod_Nav_20_Custom_20_Control,
kVPXMethod_Nav_20_File_20_Callback,
kVPXMethod_Nav_20_Files_20_Callback,
kVPXMethod_Nav_20_Folder_20_Callback,
kVPXMethod_Nav_20_Get_20_File,
kVPXMethod_Nav_20_Modal_20_Get_20_File,
kVPXMethod_Nav_20_Modal_20_Put_20_File,
kVPXMethod_Nav_20_New_20_Folder,
kVPXMethod_Nav_20_Put_20_File,
kVPXMethod_Nav_20_Put_20_File_20_Callback,
kVPXMethod_Nav_20_Read_20_Project_20_Callback,
kVPXMethod_Nav_20_Search_20_Callback,
kVPXMethod_NavCB_20_Accept,
kVPXMethod_NavCB_20_Adjust_20_Rect,
kVPXMethod_NavCB_20_Cancel,
kVPXMethod_NavCB_20_Customize,
kVPXMethod_NavCB_20_Event,
kVPXMethod_NavCB_20_New_20_Location,
kVPXMethod_NavCB_20_Start,
kVPXMethod_NavCB_20_Terminate,
kVPXMethod_NavCB_20_Unknown_20_Selector,
kVPXMethod_NavCB_20_User_20_Action,
kVPXMethod_NavCtl_20_Add_20_Control,
kVPXMethod_NavCtl_20_Get_20_Location,
kVPXMethod_NavCtl_20_Terminate,
kVPXMethod_NavEvent_20_Simple,
kVPXMethod_NavUA_20_Cancel,
kVPXMethod_NavUA_20_Choose,
kVPXMethod_NavUA_20_Discard_20_Changes,
kVPXMethod_NavUA_20_Dont_20_Save_20_Any_20_Documents,
kVPXMethod_NavUA_20_Dont_20_Save_20_Changes,
kVPXMethod_NavUA_20_New_20_Folder,
kVPXMethod_NavUA_20_None,
kVPXMethod_NavUA_20_Open,
kVPXMethod_NavUA_20_Review_20_Documents,
kVPXMethod_NavUA_20_Save_20_As,
kVPXMethod_NavUA_20_Save_20_Changes,
kVPXMethod_NavUA_20_Unknown_20_Action,
kVPXMethod_Needs_20_Draw_3F_,
kVPXMethod_New,
kVPXMethod_New_20_CFRange,
kVPXMethod_New_20_CGPoint,
kVPXMethod_New_20_CGRect,
kVPXMethod_New_20_CGSize,
kVPXMethod_New_20_Callback,
kVPXMethod_New_20_Case,
kVPXMethod_New_20_ControlID,
kVPXMethod_New_20_Element,
kVPXMethod_New_20_Element_20_At,
kVPXMethod_New_20_FSRef,
kVPXMethod_New_20_FSRef_20_From_20_Alias,
kVPXMethod_New_20_FSSpec,
kVPXMethod_New_20_Folder_20_FSRef,
kVPXMethod_New_20_From_20_AEDesc,
kVPXMethod_New_20_From_20_Alias,
kVPXMethod_New_20_From_20_CFString,
kVPXMethod_New_20_From_20_CFURL,
kVPXMethod_New_20_From_20_FSRef,
kVPXMethod_New_20_From_20_FSSpec,
kVPXMethod_New_20_From_20_Identifier,
kVPXMethod_New_20_From_20_PSN,
kVPXMethod_New_20_From_20_Path_20_String,
kVPXMethod_New_20_From_20_Signature,
kVPXMethod_New_20_From_20_Unicode,
kVPXMethod_New_20_Integer_20_Block,
kVPXMethod_New_20_Integer_20_Block_20_Type,
kVPXMethod_New_20_NavTypeList,
kVPXMethod_New_20_UInt16,
kVPXMethod_New_20_UInt32,
kVPXMethod_New_20_UInt8,
kVPXMethod_New_20_With_20_Pasteboard,
kVPXMethod_New_20_With_20_Points,
kVPXMethod_Next_20_Case_20_Check,
kVPXMethod_Next_20_Name,
kVPXMethod_Normalize_20_Returns_20_In_20_String,
kVPXMethod_Notify_20_Queue,
kVPXMethod_OLD_20_DB_20_Item_20_Notification,
kVPXMethod_OLD_20_Enter,
kVPXMethod_OLD_20_Process_20_Click,
kVPXMethod_OLD_20_Search_20_For_20_Text_23_,
kVPXMethod_Object_20_File_20_Extension,
kVPXMethod_Object_20_File_20_Name,
kVPXMethod_Object_20_File_20_Type,
kVPXMethod_Object_20_Save,
kVPXMethod_Object_20_Save_20_As,
kVPXMethod_Object_20_Save_20_Sync,
kVPXMethod_Object_20_To_20_ControlRef,
kVPXMethod_Object_20_To_20_Instance,
kVPXMethod_Object_20_To_20_PasteboardItemID,
kVPXMethod_Object_20_To_20_Text,
kVPXMethod_Object_20_To_20_Value,
kVPXMethod_Odd_3F_,
kVPXMethod_Offset_20_Rectangle,
kVPXMethod_Old_20_Command_20_Key,
kVPXMethod_Old_20_Draw,
kVPXMethod_Old_20_Extract_20_Data,
kVPXMethod_Old_20_Initial_20_Where,
kVPXMethod_Old_20_Initialize,
kVPXMethod_Old_20_Move_20_Origin_20_V,
kVPXMethod_Old_20_Open,
kVPXMethod_Old_20_Process_20_Click,
kVPXMethod_Old_20_Redraw,
kVPXMethod_Old_20_Set_20_Canvas_20_Limits,
kVPXMethod_Old_20_Show_20_Errors,
kVPXMethod_Old_207E_Get_20_Items,
kVPXMethod_Older_20_Extract_20_Data,
kVPXMethod_Open,
kVPXMethod_Open_20_Application_20_File,
kVPXMethod_Open_20_As_20_Handler,
kVPXMethod_Open_20_Callback,
kVPXMethod_Open_20_Case,
kVPXMethod_Open_20_Case_20_Editor_20_Name,
kVPXMethod_Open_20_Case_20_Name,
kVPXMethod_Open_20_Case_20_Number,
kVPXMethod_Open_20_Case_20_One,
kVPXMethod_Open_20_Component,
kVPXMethod_Open_20_Container,
kVPXMethod_Open_20_Control,
kVPXMethod_Open_20_Controller,
kVPXMethod_Open_20_Controls,
kVPXMethod_Open_20_Data_20_Fork,
kVPXMethod_Open_20_Drag_20_Handler,
kVPXMethod_Open_20_Drag_20_Input_20_Callback,
kVPXMethod_Open_20_Editor,
kVPXMethod_Open_20_Editor_20_Window,
kVPXMethod_Open_20_Editor_20_With_20_Selection,
kVPXMethod_Open_20_Environment,
kVPXMethod_Open_20_Event_20_Callback,
kVPXMethod_Open_20_Event_20_Handlers,
kVPXMethod_Open_20_File_20_Type,
kVPXMethod_Open_20_Filter_20_Callback,
kVPXMethod_Open_20_Find_20_Sheet,
kVPXMethod_Open_20_Flavors,
kVPXMethod_Open_20_Globals,
kVPXMethod_Open_20_Helper_20_List,
kVPXMethod_Open_20_Library_20_File,
kVPXMethod_Open_20_Lists,
kVPXMethod_Open_20_Local,
kVPXMethod_Open_20_Next_20_Case,
kVPXMethod_Open_20_Nib_20_Window,
kVPXMethod_Open_20_Once,
kVPXMethod_Open_20_Pasteboard_20_Handler,
kVPXMethod_Open_20_Pointer,
kVPXMethod_Open_20_Preview_20_Callback,
kVPXMethod_Open_20_Printing_20_Handler,
kVPXMethod_Open_20_Project,
kVPXMethod_Open_20_Project_20_File,
kVPXMethod_Open_20_Record,
kVPXMethod_Open_20_Reference,
kVPXMethod_Open_20_Resource_20_File,
kVPXMethod_Open_20_Section_20_File,
kVPXMethod_Open_20_Services,
kVPXMethod_Open_20_UPP,
kVPXMethod_Open_20_Update,
kVPXMethod_Open_20_With_20_Data,
kVPXMethod_Open_20_With_20_Item,
kVPXMethod_Operation_20_Export,
kVPXMethod_Operations_20_To_20_Local,
kVPXMethod_Option_20_Name_20_To_20_Number,
kVPXMethod_Option_20_Name_20_To_20_Power,
kVPXMethod_Option_20_Number_20_To_20_Name,
kVPXMethod_Order_20_Elements,
kVPXMethod_Order_20_Records,
kVPXMethod_PFAB_20_Compile_20_Sources_20_As,
kVPXMethod_PFAB_20_Link_20_Sources_20_As,
kVPXMethod_Pad,
kVPXMethod_Page_20_Draw,
kVPXMethod_Page_20_Setup,
kVPXMethod_Page_20_Setup_20_Dialog,
kVPXMethod_Parse_20_CPX_20_Buffer,
kVPXMethod_Parse_20_CPX_20_Object,
kVPXMethod_Parse_20_Frame,
kVPXMethod_Parse_20_Line,
kVPXMethod_Parse_20_Object,
kVPXMethod_Parse_20_Point,
kVPXMethod_Parse_20_Returns_20_Into_20_List,
kVPXMethod_Pascal_20_To_20_String,
kVPXMethod_Paste,
kVPXMethod_Paste_20_Value,
kVPXMethod_Pasteboard_20_Changed,
kVPXMethod_Pasteboard_20_Clear,
kVPXMethod_Pasteboard_20_Copy_20_Item_20_Flavor_20_Data,
kVPXMethod_Pasteboard_20_Copy_20_Item_20_Flavors,
kVPXMethod_Pasteboard_20_Create,
kVPXMethod_Pasteboard_20_Create_20_Unique,
kVPXMethod_Pasteboard_20_Get_20_Item_20_Count,
kVPXMethod_Pasteboard_20_Get_20_Item_20_Identifier,
kVPXMethod_Pasteboard_20_Put_20_Item_20_Flavor,
kVPXMethod_Pasteboard_20_Set_20_Promise_20_Keeper,
kVPXMethod_Pasteboard_20_Synchronize,
kVPXMethod_PasteboardItemID_20_To_20_Object,
kVPXMethod_Perform,
kVPXMethod_Pipe_20_Shell_20_Command,
kVPXMethod_Point_20_In_20_Rect,
kVPXMethod_Populate_20_CTM,
kVPXMethod_Populate_20_Item_20_List,
kVPXMethod_Populate_20_Items,
kVPXMethod_Position_20_Root,
kVPXMethod_Position_20_Terminal,
kVPXMethod_Post_20_Close_20_UI,
kVPXMethod_Post_20_Command,
kVPXMethod_Post_20_Initial_20_Task,
kVPXMethod_Post_20_Load_20_Processing,
kVPXMethod_Post_20_Load_3F_,
kVPXMethod_Post_20_Menu_20_Update,
kVPXMethod_Post_20_Open,
kVPXMethod_Post_20_Task,
kVPXMethod_Post_20_Update_20_Menu,
kVPXMethod_Prefers_20_CoreGraphics,
kVPXMethod_Prefix_20_String,
kVPXMethod_Prepare_20_Context,
kVPXMethod_Previous_20_Case,
kVPXMethod_Primitive_20_Info,
kVPXMethod_Print,
kVPXMethod_Print_20_Dialog,
kVPXMethod_Print_20_Loop,
kVPXMethod_Procedure_20_Info,
kVPXMethod_Process_20_Click,
kVPXMethod_Process_20_HICommand,
kVPXMethod_Process_20_Input,
kVPXMethod_Process_20_Input_20_Specifiers,
kVPXMethod_Process_20_Key,
kVPXMethod_Process_20_Output,
kVPXMethod_Process_20_Output_20_Specifiers,
kVPXMethod_Product_20_Name_20_To_20_CFBundleIdentifier,
kVPXMethod_Push_20_Last_20_Stage,
kVPXMethod_Push_20_Lists_20_Data,
kVPXMethod_Push_20_Next_20_Stage,
kVPXMethod_Push_20_On_20_Stack,
kVPXMethod_Put_20_Item_20_Data_20_By_20_UTI,
kVPXMethod_Put_20_Onto_20_Pasteboard,
kVPXMethod_Put_20_Parameter_20_Desc,
kVPXMethod_Put_20_TEXT_20_On_20_Scrap,
kVPXMethod_Put_20_UInt16,
kVPXMethod_Put_20_UInt32,
kVPXMethod_Put_20_UInt8,
kVPXMethod_Put_20_URLs_20_On_20_Scrap,
kVPXMethod_Put_20_Values_20_As_20_UTIs,
kVPXMethod_QDPoint_20_In_3F_,
kVPXMethod_Quit,
kVPXMethod_Quit_20_Application,
kVPXMethod_Quit_20_Main_20_Event_20_Loop,
kVPXMethod_Quote_20_String,
kVPXMethod_Rad_20_To_20_Deg,
kVPXMethod_Random_20_Between,
kVPXMethod_Read_20_Form_20_For_20_Key,
kVPXMethod_Read_20_From_20_Fork,
kVPXMethod_Read_20_Object_20_File,
kVPXMethod_Read_20_Project_20_Parameter_20_Keys,
kVPXMethod_Read_20_String,
kVPXMethod_Read_20_Text_20_File,
kVPXMethod_Rect_20_Size,
kVPXMethod_Rect_20_To_20_Ints,
kVPXMethod_Rectangle_20_Center,
kVPXMethod_Rectangle_20_Global_20_To_20_Local,
kVPXMethod_Rectangle_20_Local_20_To_20_Global,
kVPXMethod_Rectangle_20_Size,
kVPXMethod_Redraw,
kVPXMethod_Redraw_20_Items_20_CG,
kVPXMethod_Refresh,
kVPXMethod_Refresh_20_Case_20_List,
kVPXMethod_Refresh_20_Data,
kVPXMethod_Refresh_20_Editors,
kVPXMethod_Refresh_20_List,
kVPXMethod_Refresh_20_Result,
kVPXMethod_Refresh_20_Selection,
kVPXMethod_Register,
kVPXMethod_Register_20_HIObject,
kVPXMethod_Register_20_Icon,
kVPXMethod_Register_20_Icons,
kVPXMethod_Register_20_Instance,
kVPXMethod_Register_20_Item,
kVPXMethod_Register_20_Method,
kVPXMethod_Register_20_Subclass,
kVPXMethod_Register_20_With_20_Class,
kVPXMethod_Reinstall_20_Case_20_Data,
kVPXMethod_Reinstall_20_Data,
kVPXMethod_Release,
kVPXMethod_Release_20_Event,
kVPXMethod_Release_20_IconRef,
kVPXMethod_Release_20_Path,
kVPXMethod_Remove_20_Action_20_Proc,
kVPXMethod_Remove_20_All_20_Items,
kVPXMethod_Remove_20_Callback,
kVPXMethod_Remove_20_Content_20_Items,
kVPXMethod_Remove_20_Current_20_Task,
kVPXMethod_Remove_20_Data,
kVPXMethod_Remove_20_Editor,
kVPXMethod_Remove_20_Editor_20_Window,
kVPXMethod_Remove_20_From_20_Superview,
kVPXMethod_Remove_20_Handlers,
kVPXMethod_Remove_20_Items,
kVPXMethod_Remove_20_Just_20_Self,
kVPXMethod_Remove_20_Project,
kVPXMethod_Remove_20_Project_20_Setting,
kVPXMethod_Remove_20_Property,
kVPXMethod_Remove_20_Root,
kVPXMethod_Remove_20_Self,
kVPXMethod_Remove_20_Self_20_Reference,
kVPXMethod_Remove_20_Stack,
kVPXMethod_Remove_20_Sub_20_Class,
kVPXMethod_Remove_20_Terminal,
kVPXMethod_Remove_20_Toolbar,
kVPXMethod_Remove_20_Tools,
kVPXMethod_Remove_20_View,
kVPXMethod_Remove_20_Window,
kVPXMethod_Rename,
kVPXMethod_Rename_20_CFString,
kVPXMethod_Rename_20_Element,
kVPXMethod_Rename_20_Unicode,
kVPXMethod_Reorder_20_Inputs,
kVPXMethod_Reorder_20_Outputs,
kVPXMethod_Repeat_20_Export,
kVPXMethod_Repeat_20_Footer,
kVPXMethod_Repeat_20_Header,
kVPXMethod_Repeat_20_Limit_20_Export,
kVPXMethod_Repeat_20_Limit_20_Footer,
kVPXMethod_Repeat_20_Limit_20_Header,
kVPXMethod_Repeat_20_List_20_Root_20_Footer,
kVPXMethod_Replace,
kVPXMethod_Replace_20_All,
kVPXMethod_Replace_20_Bytes,
kVPXMethod_Replace_20_Item,
kVPXMethod_Replace_20_NULL,
kVPXMethod_Replace_20_NULL_20_No_20_Copy,
kVPXMethod_Report_20_Error,
kVPXMethod_Reset_20_Cache,
kVPXMethod_Reset_20_Content,
kVPXMethod_Reset_20_Errors,
kVPXMethod_Reset_20_Operations,
kVPXMethod_Reset_20_Repeat_20_Delay,
kVPXMethod_Reshape,
kVPXMethod_Reshape_20_Structure,
kVPXMethod_Resize,
kVPXMethod_Resize_20_Item,
kVPXMethod_Resize_20_Operation,
kVPXMethod_Resize_20_Operations,
kVPXMethod_Resized,
kVPXMethod_Resizing,
kVPXMethod_Resolve_20_Alias_20_File,
kVPXMethod_Resolve_20_Class,
kVPXMethod_Resolve_20_References,
kVPXMethod_Resources_20_Changed,
kVPXMethod_Restore_20_GState,
kVPXMethod_Retain,
kVPXMethod_Retain_20_Event,
kVPXMethod_Retain_20_Self_20_Reference,
kVPXMethod_Return,
kVPXMethod_Return_20_Event_20_Not_20_Handled,
kVPXMethod_Return_20_From_20_Thread,
kVPXMethod_Return_20_Internal_20_Error,
kVPXMethod_Return_20_Parameter_20_Not_20_Found,
kVPXMethod_Reveal_20_Location_20_String,
kVPXMethod_Reveal_20_Path_20_Item,
kVPXMethod_Roll_20_Dice,
kVPXMethod_Rollback,
kVPXMethod_Run,
kVPXMethod_Run_20_Begin,
kVPXMethod_Run_20_End,
kVPXMethod_Run_20_Link_20_State,
kVPXMethod_Run_20_Main_20_Event_20_Loop,
kVPXMethod_Run_20_Modal,
kVPXMethod_Run_20_Sync,
kVPXMethod_Run_20_Test_20_Tool,
kVPXMethod_Run_20_Tool_20_Name,
kVPXMethod_Run_20_Tool_20_Number,
kVPXMethod_Run_20_Verify_20_Completion,
kVPXMethod_Sandwich_20_Strings,
kVPXMethod_Save_20_File,
kVPXMethod_Save_20_File_20_Callback,
kVPXMethod_Save_20_GState,
kVPXMethod_Save_20_Key_20_Value,
kVPXMethod_Save_20_Project_20_Setting,
kVPXMethod_Save_20_Projects,
kVPXMethod_Save_20_String,
kVPXMethod_Save_20_To_20_History,
kVPXMethod_Scale_20_CTM,
kVPXMethod_Schedule_20_Callback,
kVPXMethod_Scroll_20_Rect,
kVPXMethod_Scroll_20_V,
kVPXMethod_Scrollable_20_Get_20_Info,
kVPXMethod_Scrollable_20_Scroll_20_To,
kVPXMethod_Search_20_Cancel,
kVPXMethod_Search_20_For_20_Text,
kVPXMethod_Search_20_Pass,
kVPXMethod_Search_20_Sync,
kVPXMethod_Select,
kVPXMethod_Select_20_All,
kVPXMethod_Select_20_CTM,
kVPXMethod_Select_20_Class,
kVPXMethod_Select_20_Item,
kVPXMethod_Select_20_Items,
kVPXMethod_Select_20_Name,
kVPXMethod_Select_20_Section,
kVPXMethod_Select_20_Stack_20_Number,
kVPXMethod_Select_20_Window,
kVPXMethod_Send_20_Exclusive,
kVPXMethod_Send_20_Message,
kVPXMethod_Send_20_No_20_Reply,
kVPXMethod_Send_20_Refresh,
kVPXMethod_Send_20_Reinstall,
kVPXMethod_Send_20_Remove_20_Self,
kVPXMethod_Send_20_States,
kVPXMethod_Send_20_To_20_All,
kVPXMethod_Send_20_Wait_20_Reply,
kVPXMethod_Set_20_AEDesc,
kVPXMethod_Set_20_Action,
kVPXMethod_Set_20_Active_3F_,
kVPXMethod_Set_20_Activity,
kVPXMethod_Set_20_Activity_20_Name,
kVPXMethod_Set_20_Alias_20_Record,
kVPXMethod_Set_20_Allocator,
kVPXMethod_Set_20_Alternate_20_Title,
kVPXMethod_Set_20_Animating_3F_,
kVPXMethod_Set_20_Application_20_Name,
kVPXMethod_Set_20_Architectures,
kVPXMethod_Set_20_Archive,
kVPXMethod_Set_20_Archive_20_Size,
kVPXMethod_Set_20_Archive_20_Types,
kVPXMethod_Set_20_Arity,
kVPXMethod_Set_20_Arrow_20_Cursor,
kVPXMethod_Set_20_Attachment_20_Value,
kVPXMethod_Set_20_Attachments,
kVPXMethod_Set_20_Block_20_Pages,
kVPXMethod_Set_20_BlockPtr,
kVPXMethod_Set_20_Bounds_20_Origin,
kVPXMethod_Set_20_Breakpoint,
kVPXMethod_Set_20_Buffer_20_Size,
kVPXMethod_Set_20_Build_20_Folder,
kVPXMethod_Set_20_Build_20_Settings,
kVPXMethod_Set_20_Bundle,
kVPXMethod_Set_20_Bundle_20_Extension,
kVPXMethod_Set_20_Bundle_20_Icon_20_File,
kVPXMethod_Set_20_Bundle_20_Identifier,
kVPXMethod_Set_20_Bundle_20_Version,
kVPXMethod_Set_20_Busy_3F_,
kVPXMethod_Set_20_Bytes_20_Read,
kVPXMethod_Set_20_CF_20_Reference,
kVPXMethod_Set_20_CGContextRef,
kVPXMethod_Set_20_CGPathRef,
kVPXMethod_Set_20_CPX_20_Text,
kVPXMethod_Set_20_Cache_20_Mode,
kVPXMethod_Set_20_Callback_20_Method_20_Name,
kVPXMethod_Set_20_Callback_20_Pointer,
kVPXMethod_Set_20_Callback_20_Result,
kVPXMethod_Set_20_Calling_20_Promise_3F_,
kVPXMethod_Set_20_Canceled_3F_,
kVPXMethod_Set_20_Canvas_20_Limits,
kVPXMethod_Set_20_Case_20_Sensitive_3F_,
kVPXMethod_Set_20_Changed_20_Callback,
kVPXMethod_Set_20_Check_20_Timer,
kVPXMethod_Set_20_Class,
kVPXMethod_Set_20_Clean_3F_,
kVPXMethod_Set_20_Clipboard_20_Text,
kVPXMethod_Set_20_Command,
kVPXMethod_Set_20_Command_20_ID,
kVPXMethod_Set_20_Command_20_Line,
kVPXMethod_Set_20_Completion_20_Behavior,
kVPXMethod_Set_20_Component_20_Type,
kVPXMethod_Set_20_Content,
kVPXMethod_Set_20_Content_20_List,
kVPXMethod_Set_20_Content_20_Size,
kVPXMethod_Set_20_Control_20_Auto_20_Invalidate_20_Flags,
kVPXMethod_Set_20_Control_20_Bounds_20_QD,
kVPXMethod_Set_20_Control_20_Data,
kVPXMethod_Set_20_Control_20_Data_20_Boolean,
kVPXMethod_Set_20_Control_20_Data_20_Long,
kVPXMethod_Set_20_Control_20_Data_20_Object,
kVPXMethod_Set_20_Control_20_Data_20_Ptr,
kVPXMethod_Set_20_Control_20_Data_20_Short,
kVPXMethod_Set_20_Control_20_Hilite,
kVPXMethod_Set_20_Control_20_ID,
kVPXMethod_Set_20_Control_20_Maximum,
kVPXMethod_Set_20_Control_20_Minimum,
kVPXMethod_Set_20_Control_20_Record,
kVPXMethod_Set_20_Control_20_Title,
kVPXMethod_Set_20_Control_20_Value,
kVPXMethod_Set_20_ControlRef,
kVPXMethod_Set_20_Copy_20_Frameworks_3F_,
kVPXMethod_Set_20_Count,
kVPXMethod_Set_20_Creation_20_Options_20_Record,
kVPXMethod_Set_20_Creator_20_Code,
kVPXMethod_Set_20_Current_20_Drop_20_Flavors,
kVPXMethod_Set_20_Current_20_Operation,
kVPXMethod_Set_20_Current_20_Tasks,
kVPXMethod_Set_20_Current_20_Transform,
kVPXMethod_Set_20_Current_20_Value,
kVPXMethod_Set_20_Current_3F_,
kVPXMethod_Set_20_Cursor,
kVPXMethod_Set_20_Custom_20_Plist_20_Keys,
kVPXMethod_Set_20_Custom_20_Properties,
kVPXMethod_Set_20_Custom_20_Reply,
kVPXMethod_Set_20_Data,
kVPXMethod_Set_20_Data_20_From_20_CFURL,
kVPXMethod_Set_20_Debug_20_Window,
kVPXMethod_Set_20_Default_20_Form_20_Identifier,
kVPXMethod_Set_20_Default_20_Properties,
kVPXMethod_Set_20_Description,
kVPXMethod_Set_20_Direct_20_Value,
kVPXMethod_Set_20_Document_20_Count,
kVPXMethod_Set_20_Drag_20_Allowable_20_Actions,
kVPXMethod_Set_20_Drag_20_CGImage,
kVPXMethod_Set_20_Drag_20_Drop_20_Action,
kVPXMethod_Set_20_Drag_20_Input_20_Callback,
kVPXMethod_Set_20_Drag_20_Input_20_Proc,
kVPXMethod_Set_20_DragRef,
kVPXMethod_Set_20_Drawing_20_Enabled_3F_,
kVPXMethod_Set_20_Drop_20_Flavors,
kVPXMethod_Set_20_EP_20_Attributes,
kVPXMethod_Set_20_EP_20_Boolean,
kVPXMethod_Set_20_EP_20_CFStringRef,
kVPXMethod_Set_20_EP_20_Control_20_Part,
kVPXMethod_Set_20_EP_20_Control_20_Region,
kVPXMethod_Set_20_EP_20_HIObject_20_Instance,
kVPXMethod_Set_20_EP_20_HIPoint,
kVPXMethod_Set_20_EP_20_HISize,
kVPXMethod_Set_20_EP_20_Object,
kVPXMethod_Set_20_EP_20_QDPoint,
kVPXMethod_Set_20_EP_20_QDRect,
kVPXMethod_Set_20_EP_20_QDRgnHandle,
kVPXMethod_Set_20_EP_20_SInt16,
kVPXMethod_Set_20_EP_20_Text,
kVPXMethod_Set_20_EP_20_UInt32,
kVPXMethod_Set_20_EP_20_typePartCode,
kVPXMethod_Set_20_EP_20_typeRef,
kVPXMethod_Set_20_Editor,
kVPXMethod_Set_20_Editor_20_Window,
kVPXMethod_Set_20_Engine_20_Framework,
kVPXMethod_Set_20_Error,
kVPXMethod_Set_20_Error_3F_,
kVPXMethod_Set_20_Event_20_Class,
kVPXMethod_Set_20_Event_20_Handlers,
kVPXMethod_Set_20_Event_20_ID,
kVPXMethod_Set_20_Event_20_Parameter,
kVPXMethod_Set_20_Event_20_Parameters,
kVPXMethod_Set_20_Exact_20_Match_3F_,
kVPXMethod_Set_20_Exclude_20_Types,
kVPXMethod_Set_20_Exit_20_Result_20_Code,
kVPXMethod_Set_20_Export_20_Level,
kVPXMethod_Set_20_Extracted_20_Value,
kVPXMethod_Set_20_File,
kVPXMethod_Set_20_File_20_Creator,
kVPXMethod_Set_20_File_20_Name,
kVPXMethod_Set_20_File_20_Translation_20_Spec,
kVPXMethod_Set_20_File_20_Type,
kVPXMethod_Set_20_Fill_20_RGB_20_Color,
kVPXMethod_Set_20_Filter_20_Callback_20_Behavior,
kVPXMethod_Set_20_Find_20_Pasteboard_20_Text,
kVPXMethod_Set_20_Find_20_Sheet,
kVPXMethod_Set_20_Find_20_State,
kVPXMethod_Set_20_Find_20_Text,
kVPXMethod_Set_20_Find_20_Window,
kVPXMethod_Set_20_Finder_20_Info,
kVPXMethod_Set_20_Finished_3F_,
kVPXMethod_Set_20_First_20_Subview_20_Focus,
kVPXMethod_Set_20_Flavors,
kVPXMethod_Set_20_Folder,
kVPXMethod_Set_20_Form,
kVPXMethod_Set_20_Format,
kVPXMethod_Set_20_Frame,
kVPXMethod_Set_20_Frame_20_Breakpoint,
kVPXMethod_Set_20_HICommand_20_Cache,
kVPXMethod_Set_20_HICommand_20_State,
kVPXMethod_Set_20_HIObject_20_Class,
kVPXMethod_Set_20_HIObject_20_Reference,
kVPXMethod_Set_20_HIObjectClassRef,
kVPXMethod_Set_20_HIObjectRef,
kVPXMethod_Set_20_HIToolbarRef,
kVPXMethod_Set_20_ID,
kVPXMethod_Set_20_IO_20_Value,
kVPXMethod_Set_20_Icon,
kVPXMethod_Set_20_IconRef,
kVPXMethod_Set_20_Identifier,
kVPXMethod_Set_20_Idle_20_Action,
kVPXMethod_Set_20_Image_20_Well_20_From_20_File,
kVPXMethod_Set_20_Indeterminate_3F_,
kVPXMethod_Set_20_Index,
kVPXMethod_Set_20_Initial_20_Delay,
kVPXMethod_Set_20_Initial_20_Pasteboards,
kVPXMethod_Set_20_Initial_20_Tasks,
kVPXMethod_Set_20_Initial_3F_,
kVPXMethod_Set_20_Instance_20_Attribute,
kVPXMethod_Set_20_Item,
kVPXMethod_Set_20_Item_20_Bounds,
kVPXMethod_Set_20_Item_20_Breakpoint,
kVPXMethod_Set_20_Item_20_Data_20_Property,
kVPXMethod_Set_20_Item_20_ID,
kVPXMethod_Set_20_Item_20_List,
kVPXMethod_Set_20_Item_20_Menu,
kVPXMethod_Set_20_Item_20_Meta_20_Property,
kVPXMethod_Set_20_Items,
kVPXMethod_Set_20_Job_20_Name,
kVPXMethod_Set_20_Key,
kVPXMethod_Set_20_Key_20_Script,
kVPXMethod_Set_20_Key_20_Value,
kVPXMethod_Set_20_Known_20_Flavors,
kVPXMethod_Set_20_Known_20_IDs,
kVPXMethod_Set_20_Known_20_Items,
kVPXMethod_Set_20_Known_20_Projects,
kVPXMethod_Set_20_Last_20_Page,
kVPXMethod_Set_20_Length,
kVPXMethod_Set_20_Limit_20_UTIs,
kVPXMethod_Set_20_Line_20_Size,
kVPXMethod_Set_20_Line_20_Width,
kVPXMethod_Set_20_Link_20_States,
kVPXMethod_Set_20_List_20_Array,
kVPXMethod_Set_20_List_20_View,
kVPXMethod_Set_20_List_20_Window,
kVPXMethod_Set_20_Location,
kVPXMethod_Set_20_MPTask,
kVPXMethod_Set_20_Maximum,
kVPXMethod_Set_20_Menu_20_ID,
kVPXMethod_Set_20_Menu_20_Items,
kVPXMethod_Set_20_MenuRef,
kVPXMethod_Set_20_Method,
kVPXMethod_Set_20_Minimum,
kVPXMethod_Set_20_Minimum_20_MacOSX,
kVPXMethod_Set_20_Modality,
kVPXMethod_Set_20_Mode,
kVPXMethod_Set_20_Name,
kVPXMethod_Set_20_Name_20_As_20_String,
kVPXMethod_Set_20_Name_20_As_20_Unicode,
kVPXMethod_Set_20_Nav_20_Class,
kVPXMethod_Set_20_Needs_20_Display_20_In_20_Region_3F_,
kVPXMethod_Set_20_Needs_20_Display_3F_,
kVPXMethod_Set_20_New_20_Line_20_Char,
kVPXMethod_Set_20_New_20_Line_20_Mode_3F_,
kVPXMethod_Set_20_Next_20_Fire_20_Time,
kVPXMethod_Set_20_Next_20_Focus,
kVPXMethod_Set_20_Not_20_Saved_3F_,
kVPXMethod_Set_20_Operation,
kVPXMethod_Set_20_Operation_20_Font,
kVPXMethod_Set_20_Option,
kVPXMethod_Set_20_Options,
kVPXMethod_Set_20_Origin,
kVPXMethod_Set_20_Original_20_Text,
kVPXMethod_Set_20_Output_20_Text,
kVPXMethod_Set_20_Owner,
kVPXMethod_Set_20_PMPageFormat,
kVPXMethod_Set_20_PMPrintSession,
kVPXMethod_Set_20_PMPrintSettings,
kVPXMethod_Set_20_Package_20_ID,
kVPXMethod_Set_20_Package_20_Name,
kVPXMethod_Set_20_Packager,
kVPXMethod_Set_20_Packager_20_State,
kVPXMethod_Set_20_Page_20_Range,
kVPXMethod_Set_20_Page_20_Setup_20_Done_20_Callback,
kVPXMethod_Set_20_Parameter,
kVPXMethod_Set_20_Parameter_20_AEDesc,
kVPXMethod_Set_20_Parameter_20_String,
kVPXMethod_Set_20_Parent_20_URL,
kVPXMethod_Set_20_Parent_20_Window,
kVPXMethod_Set_20_Pasteboard,
kVPXMethod_Set_20_PasteboardRef,
kVPXMethod_Set_20_Pasteboards,
kVPXMethod_Set_20_Path,
kVPXMethod_Set_20_Path_20_To_20_Binary,
kVPXMethod_Set_20_Permission,
kVPXMethod_Set_20_PkgInfo_20_Creator,
kVPXMethod_Set_20_PkgInfo_20_Type,
kVPXMethod_Set_20_Plug_20_Ins,
kVPXMethod_Set_20_Popup_20_Selection,
kVPXMethod_Set_20_Port,
kVPXMethod_Set_20_Position_20_Mode,
kVPXMethod_Set_20_Position_20_Offset,
kVPXMethod_Set_20_Preference_20_Key,
kVPXMethod_Set_20_Preview_20_Callback_20_Behavior,
kVPXMethod_Set_20_Primary_20_Prompt,
kVPXMethod_Set_20_Print_20_Dialog_20_Done_20_Callback,
kVPXMethod_Set_20_Print_20_Job,
kVPXMethod_Set_20_ProcPtr_20_Name,
kVPXMethod_Set_20_Product_20_Name,
kVPXMethod_Set_20_Progress_20_Percent,
kVPXMethod_Set_20_Project,
kVPXMethod_Set_20_Project_20_Data,
kVPXMethod_Set_20_Project_20_Setting,
kVPXMethod_Set_20_Promise_20_Callback,
kVPXMethod_Set_20_Promised_3F_,
kVPXMethod_Set_20_Prompt,
kVPXMethod_Set_20_Prompt_20_Text,
kVPXMethod_Set_20_Property,
kVPXMethod_Set_20_Property_20_Long,
kVPXMethod_Set_20_Property_20_Object,
kVPXMethod_Set_20_Property_20_Ptr,
kVPXMethod_Set_20_Queue_20_ID,
kVPXMethod_Set_20_Queue_20_Reserve,
kVPXMethod_Set_20_Quitting_3F_,
kVPXMethod_Set_20_Reference,
kVPXMethod_Set_20_Release_20_Version,
kVPXMethod_Set_20_Release_3F_,
kVPXMethod_Set_20_Repeat_20_Delay,
kVPXMethod_Set_20_Replace_20_Text,
kVPXMethod_Set_20_Replacing_3F_,
kVPXMethod_Set_20_Reply,
kVPXMethod_Set_20_Reply_20_Parameter,
kVPXMethod_Set_20_Reply_20_Parameter_20_AEDesc,
kVPXMethod_Set_20_Request_20_Only_3F_,
kVPXMethod_Set_20_Required_20_Services,
kVPXMethod_Set_20_Resource_20_File,
kVPXMethod_Set_20_Result,
kVPXMethod_Set_20_Result_20_Code,
kVPXMethod_Set_20_Result_20_Text,
kVPXMethod_Set_20_Return_20_ID,
kVPXMethod_Set_20_Review_3F_,
kVPXMethod_Set_20_Revision_20_ID,
kVPXMethod_Set_20_Root,
kVPXMethod_Set_20_Root_20_SDK,
kVPXMethod_Set_20_SDKs,
kVPXMethod_Set_20_Save_20_Changes_3F_,
kVPXMethod_Set_20_Script,
kVPXMethod_Set_20_Search_20_Text,
kVPXMethod_Set_20_Secondary_20_Prompt,
kVPXMethod_Set_20_Segment,
kVPXMethod_Set_20_Segment_20_Attributes,
kVPXMethod_Set_20_Segment_20_Behavior,
kVPXMethod_Set_20_Segment_20_Command,
kVPXMethod_Set_20_Segment_20_Enabled_3F_,
kVPXMethod_Set_20_Segment_20_Image,
kVPXMethod_Set_20_Segment_20_Label,
kVPXMethod_Set_20_Segment_20_Value,
kVPXMethod_Set_20_Segment_20_Width,
kVPXMethod_Set_20_Segments,
kVPXMethod_Set_20_Select_20_Data,
kVPXMethod_Set_20_Select_20_List,
kVPXMethod_Set_20_Select_20_Name,
kVPXMethod_Set_20_Selected,
kVPXMethod_Set_20_Selected_20_BackColor,
kVPXMethod_Set_20_Selected_20_Colors,
kVPXMethod_Set_20_Selected_20_Files,
kVPXMethod_Set_20_Selected_20_ForeColor,
kVPXMethod_Set_20_Selection,
kVPXMethod_Set_20_Sender_20_Only_3F_,
kVPXMethod_Set_20_Sender_20_Translated_3F_,
kVPXMethod_Set_20_Service_20_Manager,
kVPXMethod_Set_20_Services,
kVPXMethod_Set_20_Session,
kVPXMethod_Set_20_Settings,
kVPXMethod_Set_20_Shape,
kVPXMethod_Set_20_Shell_20_Result,
kVPXMethod_Set_20_Shell_20_Text,
kVPXMethod_Set_20_Should_20_Antialias,
kVPXMethod_Set_20_Size,
kVPXMethod_Set_20_Source_20_Data,
kVPXMethod_Set_20_Sources,
kVPXMethod_Set_20_Stack_20_Size,
kVPXMethod_Set_20_Stage,
kVPXMethod_Set_20_Standard_20_Colors,
kVPXMethod_Set_20_Static_20_Directories,
kVPXMethod_Set_20_Stationery_3F_,
kVPXMethod_Set_20_Status,
kVPXMethod_Set_20_Stroke_20_RGB_20_Color,
kVPXMethod_Set_20_Sub_20_ControlRef,
kVPXMethod_Set_20_Super_20_Class,
kVPXMethod_Set_20_Supports_20_ZeroLink_3F_,
kVPXMethod_Set_20_System_20_Translated_3F_,
kVPXMethod_Set_20_Target,
kVPXMethod_Set_20_Target_20_AEDesc,
kVPXMethod_Set_20_Task_20_ID,
kVPXMethod_Set_20_Task_20_Type,
kVPXMethod_Set_20_Task_20_Weight,
kVPXMethod_Set_20_Term,
kVPXMethod_Set_20_Terminal,
kVPXMethod_Set_20_Text,
kVPXMethod_Set_20_Text_20_Command,
kVPXMethod_Set_20_The_20_Drag,
kVPXMethod_Set_20_Title,
kVPXMethod_Set_20_Toolbar,
kVPXMethod_Set_20_Total_20_Size,
kVPXMethod_Set_20_Transaction_20_ID,
kVPXMethod_Set_20_Translation_20_Needed_3F_,
kVPXMethod_Set_20_Type,
kVPXMethod_Set_20_Type_20_List,
kVPXMethod_Set_20_UPP_20_Allocate,
kVPXMethod_Set_20_UPP_20_Dispose,
kVPXMethod_Set_20_UPP_20_Pointer,
kVPXMethod_Set_20_URL_20_Text,
kVPXMethod_Set_20_Up_20_Drawing,
kVPXMethod_Set_20_Valid_3F_,
kVPXMethod_Set_20_Value,
kVPXMethod_Set_20_Value_20_Address,
kVPXMethod_Set_20_Value_20_CFType,
kVPXMethod_Set_20_Values,
kVPXMethod_Set_20_Verify_20_Reads_3F_,
kVPXMethod_Set_20_Version,
kVPXMethod_Set_20_Viewport_20_Origin,
kVPXMethod_Set_20_Visible_3F_,
kVPXMethod_Set_20_Watched_3F_,
kVPXMethod_Set_20_Watchpoint,
kVPXMethod_Set_20_Window,
kVPXMethod_Set_20_Window_20_Alpha,
kVPXMethod_Set_20_Window_20_Bounds,
kVPXMethod_Set_20_Window_20_Drag_20_Handler,
kVPXMethod_Set_20_Window_20_Origin,
kVPXMethod_Set_20_Window_20_Pasteboard_20_Handler,
kVPXMethod_Set_20_Window_20_Printing_20_Handler,
kVPXMethod_Set_20_Window_20_Record,
kVPXMethod_Set_20_Window_20_Title,
kVPXMethod_Set_20_WindowRef,
kVPXMethod_Set_20_Windows,
kVPXMethod_Set_20_Wrap_20_Around_3F_,
kVPXMethod_Set_20_X,
kVPXMethod_Set_20_Y,
kVPXMethod_Set_20_ZOrder,
kVPXMethod_Setup,
kVPXMethod_Setup_20_Clipboard,
kVPXMethod_Setup_20_CoreGraphics,
kVPXMethod_Setup_20_Custom,
kVPXMethod_Setup_20_Dialog,
kVPXMethod_Setup_20_Drawing_20_CG,
kVPXMethod_Setup_20_Find,
kVPXMethod_Setup_20_For_20_CoreGraphics,
kVPXMethod_Setup_20_Help,
kVPXMethod_Setup_20_Icon,
kVPXMethod_Setup_20_Item,
kVPXMethod_Setup_20_Menu,
kVPXMethod_Setup_20_Options,
kVPXMethod_Setup_20_Results_20_List,
kVPXMethod_Setup_20_Run_20_Flags,
kVPXMethod_Setup_20_Search,
kVPXMethod_Show,
kVPXMethod_Show_20_CTM,
kVPXMethod_Show_20_Control,
kVPXMethod_Show_20_Current_20_Operation,
kVPXMethod_Show_20_Drag_20_Hilite,
kVPXMethod_Show_20_Errors,
kVPXMethod_Show_20_Hilite,
kVPXMethod_Show_20_Project_20_Info,
kVPXMethod_Show_20_Project_20_Messages,
kVPXMethod_Simple_20_Run_20_OSA,
kVPXMethod_Simple_20_Speak,
kVPXMethod_Simple_20_Value_3F_,
kVPXMethod_Simulate_20_Click,
kVPXMethod_Size_20_Control,
kVPXMethod_Slice_20_String,
kVPXMethod_Sort_20_Control,
kVPXMethod_Sort_20_Horizontally,
kVPXMethod_Sort_20_Instances_20_With_20_Key_20_Method,
kVPXMethod_Sort_20_Key_20_Helper_20_List,
kVPXMethod_Sort_20_Key_2D_Value_20_List,
kVPXMethod_Sort_20_Operations,
kVPXMethod_Sort_20_Vertically,
kVPXMethod_Space_20_Bar,
kVPXMethod_Speak,
kVPXMethod_Stack_20_Execution,
kVPXMethod_Stack_20_Open,
kVPXMethod_Stack_20_Opened,
kVPXMethod_Stack_20_Termination,
kVPXMethod_Stage_20_For_20_Error,
kVPXMethod_Standard_20_Drag_20_Input_20_Callback,
kVPXMethod_Start_20_Busy,
kVPXMethod_Start_20_Find,
kVPXMethod_Start_20_Timer,
kVPXMethod_State_20_Changed,
kVPXMethod_Step,
kVPXMethod_Step_20_Into,
kVPXMethod_Step_20_Out,
kVPXMethod_Step_20_Skip,
kVPXMethod_Stop_20_Timer,
kVPXMethod_String_20_To_20_Pascal,
kVPXMethod_Strip_20_Suffix,
kVPXMethod_Stroke_20_Arc,
kVPXMethod_Stroke_20_Line,
kVPXMethod_Stroke_20_Oval,
kVPXMethod_Stroke_20_Path,
kVPXMethod_Stroke_20_Rect,
kVPXMethod_Stroke_20_Rounded_20_Rect,
kVPXMethod_Structure_20_Info,
kVPXMethod_Substitute_20_Attribute,
kVPXMethod_Substitute_20_Class_20_Attribute,
kVPXMethod_Substitute_20_Keys,
kVPXMethod_Substitute_20_Template_20_Keys,
kVPXMethod_Substitute_20_With,
kVPXMethod_Subtract,
kVPXMethod_Subtract_20_Point,
kVPXMethod_Subtree_20_Contains_20_Focus_3F_,
kVPXMethod_Supports_20_UI_20_Settings,
kVPXMethod_Sync_20_CGContext_20_Origin,
kVPXMethod_Sync_20_Origin_20_With_20_CGrafPort,
kVPXMethod_Sync_20_Tool,
kVPXMethod_Sync_20_Tool_23_,
kVPXMethod_Synchro_20_Line,
kVPXMethod_Synchro_20_Line_20_CG,
kVPXMethod_Synchro_20_To_20_Operation,
kVPXMethod_Synchro_20_To_20_Operation_20_CG,
kVPXMethod_Synchronize,
kVPXMethod_TEST,
kVPXMethod_TEST_20_AE_20_Quit,
kVPXMethod_TEST_20_Activity_20_Simple_20_ASync,
kVPXMethod_TEST_20_Activity_20_Simple_20_Sync,
kVPXMethod_TEST_20_Activity_20_Staged_20_ASync,
kVPXMethod_TEST_20_Activity_20_Staged_20_Sync,
kVPXMethod_TEST_20_CFConstant,
kVPXMethod_TEST_20_CFData,
kVPXMethod_TEST_20_CFNumber,
kVPXMethod_TEST_20_CFPref_20_Read,
kVPXMethod_TEST_20_CFPref_20_Sync,
kVPXMethod_TEST_20_CFPref_20_Write,
kVPXMethod_TEST_20_CFString_20_1,
kVPXMethod_TEST_20_CFString_20_2,
kVPXMethod_TEST_20_CFString_20_3,
kVPXMethod_TEST_20_CFString_20_4,
kVPXMethod_TEST_20_CFURL_20_1,
kVPXMethod_TEST_20_CFURL_20_2,
kVPXMethod_TEST_20_Display_20_Alert,
kVPXMethod_TEST_20_Display_20_Notice,
kVPXMethod_TEST_20_Execute_20_Deferred,
kVPXMethod_TEST_20_MP_20_Task,
kVPXMethod_TEST_20_Nav_20_Ask_20_Discard_20_Changes,
kVPXMethod_TEST_20_Nav_20_Ask_20_Review_20_Documents,
kVPXMethod_TEST_20_Nav_20_Ask_20_Save_20_Changes,
kVPXMethod_TEST_20_Nav_20_Choose_20_Folder,
kVPXMethod_TEST_20_Nav_20_Choose_20_Volume,
kVPXMethod_TEST_20_Nav_20_Get_20_File,
kVPXMethod_TEST_20_Nav_20_Modal_20_ASC,
kVPXMethod_TEST_20_Nav_20_Modal_20_GF,
kVPXMethod_TEST_20_Nav_20_Modal_20_PF,
kVPXMethod_TEST_20_Nav_20_New_20_Folder,
kVPXMethod_TEST_20_Nav_20_Put_20_File,
kVPXMethod_TEST_20_New_20_Nav_20_Modal_20_CF,
kVPXMethod_TEST_20_New_20_Nav_20_Modal_20_GF,
kVPXMethod_TEST_20_Pipe,
kVPXMethod_TEST_20_Raw_20_Quit,
kVPXMethod_TEST_20_Read_20_Project,
kVPXMethod_TEST_20_Script,
kVPXMethod_TEST_20_Set_20_Clipboard_20_Text,
kVPXMethod_TEST_20_Set_20_Find_20_Text,
kVPXMethod_TEST_20_Shell_20_Command,
kVPXMethod_TEST_20_Show_20_Clipboard_20_Flavors,
kVPXMethod_TEST_20_Show_20_Clipboard_20_Text,
kVPXMethod_TEST_20_Show_20_Find_20_Text,
kVPXMethod_TEST_20_Show_20_Standard_20_Form,
kVPXMethod_TEST_20_Static_20_Form,
kVPXMethod_TEST_20_UTI_20_Generator,
kVPXMethod_TEST_20_VPL_20_URL_20_Types,
kVPXMethod_TIV_20_Config_20_For_20_Mode,
kVPXMethod_TIV_20_Config_20_For_20_Size,
kVPXMethod_Tab,
kVPXMethod_Tab_20_Direction,
kVPXMethod_Target,
kVPXMethod_Target_20_Data,
kVPXMethod_Target_20_Deferred,
kVPXMethod_Target_20_Operation_20_Data,
kVPXMethod_Target_20_Self,
kVPXMethod_Target_20_Text,
kVPXMethod_Target_20_Value,
kVPXMethod_Task_20_Postflight,
kVPXMethod_Task_20_Preflight,
kVPXMethod_Terminate_20_Task,
kVPXMethod_Test,
kVPXMethod_Test_20_Attribute_20_Name,
kVPXMethod_Text_20_To_20_Object,
kVPXMethod_Tidy,
kVPXMethod_To_20_AEDesc,
kVPXMethod_To_20_CFBooleanRef,
kVPXMethod_To_20_CFNumberRef,
kVPXMethod_To_20_CFString,
kVPXMethod_To_20_CFStringRef,
kVPXMethod_To_20_CFType,
kVPXMethod_To_20_CString,
kVPXMethod_To_20_MacRoman,
kVPXMethod_To_20_PString,
kVPXMethod_To_20_Point,
kVPXMethod_Toggle,
kVPXMethod_Toggle_20_Container,
kVPXMethod_Toggle_20_DataBrowser,
kVPXMethod_Toggle_20_Drawer,
kVPXMethod_Toggle_20_Select_20_List,
kVPXMethod_Toggle_20_View,
kVPXMethod_Toolbar_20_Create_20_Custom_20_Item,
kVPXMethod_Toolbar_20_Create_20_Item_20_From_20_Drag,
kVPXMethod_Toolbar_20_Create_20_Item_20_With_20_Identifier,
kVPXMethod_Toolbar_20_Get_20_Allowed_20_Identifiers,
kVPXMethod_Toolbar_20_Get_20_Default_20_Identifiers,
kVPXMethod_Toolbar_20_Item_20_Added,
kVPXMethod_Toolbar_20_Item_20_Command_20_ID_20_Changed,
kVPXMethod_Toolbar_20_Item_20_Create_20_Custom_20_View,
kVPXMethod_Toolbar_20_Item_20_Enabled_20_State_20_Changed,
kVPXMethod_Toolbar_20_Item_20_Get_20_Persistent_20_Data,
kVPXMethod_Toolbar_20_Item_20_Help_20_Text_20_Changed,
kVPXMethod_Toolbar_20_Item_20_Image_20_Changed,
kVPXMethod_Toolbar_20_Item_20_Label_20_Changed,
kVPXMethod_Toolbar_20_Item_20_Perform_20_Action,
kVPXMethod_Toolbar_20_Item_20_Removed,
kVPXMethod_Toolbar_20_Layout_20_Changed,
kVPXMethod_Track_20_Control,
kVPXMethod_Track_20_Drag,
kVPXMethod_Transform_20_Arity,
kVPXMethod_Translate_20_CTM,
kVPXMethod_Trim,
kVPXMethod_Trim_20_Projects,
kVPXMethod_Trim_20_Whitespace,
kVPXMethod_Type_20_Name_20_To_20_Number,
kVPXMethod_Type_20_Number_20_To_20_Name,
kVPXMethod_URL_20_Open_20_In_20_Browser,
kVPXMethod_URL_20_Search_20_appledev_2E_com,
kVPXMethod_Unarchive_20_Element,
kVPXMethod_Unescape_20_Text,
kVPXMethod_Uninstall_20_Data,
kVPXMethod_Unique_20_Name_20_For_20_String,
kVPXMethod_Unique_20_Name_20_From_20_List,
kVPXMethod_Unique_20_Recents_20_Names,
kVPXMethod_Unix_20_Carriage_20_Return,
kVPXMethod_Unix_20_Tab,
kVPXMethod_Unload_20_Executable,
kVPXMethod_Unmangle_20_Name,
kVPXMethod_Unmark_20_Heap,
kVPXMethod_Unquoted_20_In,
kVPXMethod_Unregister,
kVPXMethod_Unregister_20_Icon,
kVPXMethod_Unregister_20_Icons,
kVPXMethod_Unregister_20_Instance,
kVPXMethod_Unregister_20_Item,
kVPXMethod_Unregister_20_Method,
kVPXMethod_Unregister_20_With_20_Class,
kVPXMethod_Unsign_20_Integer,
kVPXMethod_Up_20_Count,
kVPXMethod_Update_20_Alias,
kVPXMethod_Update_20_All,
kVPXMethod_Update_20_Attribute_20_Name,
kVPXMethod_Update_20_Attribute_20_Value,
kVPXMethod_Update_20_Breakpoints,
kVPXMethod_Update_20_Bundle,
kVPXMethod_Update_20_Canvas_20_Limits,
kVPXMethod_Update_20_Class_20_Attribute_20_Name,
kVPXMethod_Update_20_Class_20_Attribute_20_Value,
kVPXMethod_Update_20_Controls,
kVPXMethod_Update_20_Data,
kVPXMethod_Update_20_Data_20_Controls,
kVPXMethod_Update_20_Data_20_Type,
kVPXMethod_Update_20_Editors,
kVPXMethod_Update_20_FSCatInfo,
kVPXMethod_Update_20_FSRef,
kVPXMethod_Update_20_Find_20_Result,
kVPXMethod_Update_20_Frame,
kVPXMethod_Update_20_Item_20_List,
kVPXMethod_Update_20_Items,
kVPXMethod_Update_20_List,
kVPXMethod_Update_20_List_20_Data,
kVPXMethod_Update_20_Location_20_Prompt,
kVPXMethod_Update_20_Menu,
kVPXMethod_Update_20_Menu_20_Items,
kVPXMethod_Update_20_Menu_20_Visibility,
kVPXMethod_Update_20_Name,
kVPXMethod_Update_20_Names,
kVPXMethod_Update_20_Now,
kVPXMethod_Update_20_Operation_20_Types,
kVPXMethod_Update_20_Owner,
kVPXMethod_Update_20_Percent,
kVPXMethod_Update_20_Progress,
kVPXMethod_Update_20_Record,
kVPXMethod_Update_20_Select_20_Item,
kVPXMethod_Update_20_Select_20_List,
kVPXMethod_Update_20_Self,
kVPXMethod_Update_20_Title,
kVPXMethod_Update_20_Tool_20_Set,
kVPXMethod_Update_20_Value,
kVPXMethod_Uppercase,
kVPXMethod_Use_20_Best_20_Controls,
kVPXMethod_Use_20_Best_20_Frame,
kVPXMethod_Use_20_Best_20_IO_20_Frames,
kVPXMethod_Use_20_Default_20_Controls,
kVPXMethod_Use_20_Initial_20_Parameters,
kVPXMethod_Use_20_Parameters,
kVPXMethod_Use_20_Sheets,
kVPXMethod_User_20_Cancel,
kVPXMethod_VPL_20_Action_20_To_20_C_20_Action,
kVPXMethod_VPL_20_Add_20_Search_20_Locations,
kVPXMethod_VPL_20_Boolean_20_To_20_C_20_Boolean,
kVPXMethod_VPL_20_Control_20_To_20_C_20_Control,
kVPXMethod_VPL_20_Parse_20_Inline_20_Method,
kVPXMethod_VPL_20_Parse_20_URL,
kVPXMethod_VPL_20_String_20_To_20_C_20_String,
kVPXMethod_VPL_20_Text_20_To_20_C_20_String,
kVPXMethod_VPLCallback_20_Handler,
kVPXMethod_VPLPrefs_20_Load,
kVPXMethod_VPLPrefs_20_Reset,
kVPXMethod_VPLPrefs_20_Sync,
kVPXMethod_Valid_20_Subfolder_3F_,
kVPXMethod_Validate_20_Page_20_Format,
kVPXMethod_Validate_20_Rect,
kVPXMethod_Validate_20_Region,
kVPXMethod_View_20_Rect,
kVPXMethod_View_20_Size,
kVPXMethod_Wait_20_On_20_Queue,
kVPXMethod_Was_20_Content_20_Hit_3F_,
kVPXMethod_Was_20_Hit,
kVPXMethod_WindowRef_20_To_20_Object,
kVPXMethod_Write_20_Data_20_And_20_Properties_20_To_20_Resource,
kVPXMethod_Write_20_String,
kVPXMethod_Write_20_To_20_Fork,
kVPXMethod_Write_20_XML_20_File_20_From_20_Property_20_List,
kVPXMethod_Yield,
kVPXMethod_Yield_20_To_20_Thread,
kVPXMethod_bit_2D_without,
kVPXMethod_list_2D_to_2D_CGPoint,
kVPXMethod_list_2D_to_2D_CGRect,
kVPXMethod_list_2D_to_2D_CGSize,
kVPXMethod_old_20_Loop_20_Header,
kVPXMethod_test_2D_bit_3F_,
kVPXMethod_x_2A_pi,
kVPXMethod_xCheck_20_Drop_20_Flavors,
kVPXMethod_xClose_20_UPP,
kVPXMethod_xDrag_20_In_20_Window,
kVPXMethod_xDraw_20_CG,
kVPXMethod_xExport_20_Text,
kVPXMethod_xFile_20_New,
kVPXMethod_xFile_20_New_20_Project,
kVPXMethod_xFind_20_Item,
kVPXMethod_xInstall_20_Handlers,
kVPXMethod_xOpen_20_UPP,
kVPXMethod_xxxCall,
kVPXMethod__7E_AE_20_Idle,
kVPXMethod__7E_Add_20_DBItems,
kVPXMethod__7E_Add_20_ListView_20_Column,
kVPXMethod__7E_Autosize_20_List_20_View_20_Columns,
kVPXMethod__7E_Change_20_Window_20_Attributes,
kVPXMethod__7E_Create_20_Control_20_Record,
kVPXMethod__7E_Create_20_HIToolbarItem,
kVPXMethod__7E_Create_20_Subfolders,
kVPXMethod__7E_Default_20_Completion,
kVPXMethod__7E_Execute_20_MAIN,
kVPXMethod__7E_FNNotify,
kVPXMethod__7E_FSGetCatalogInfo,
kVPXMethod__7E_FSGetCatalogInfo_20_FInfo,
kVPXMethod__7E_FSGetCatalogInfo_20_FXInfo,
kVPXMethod__7E_FSGetCatalogInfo_20_NodeFlag,
kVPXMethod__7E_FSGetCatalogInfoBulk,
kVPXMethod__7E_FSSetCatalogInfo,
kVPXMethod__7E_FSpMakeFSRef,
kVPXMethod__7E_Get_20_Control_20_Value,
kVPXMethod__7E_Get_20_Item_20_Count,
kVPXMethod__7E_Get_20_Items,
kVPXMethod__7E_Get_20_Property_20_Flags,
kVPXMethod__7E_Get_20_Proxy_20_IconRef,
kVPXMethod__7E_Get_20_Value,
kVPXMethod__7E_Get_20_View_20_Style,
kVPXMethod__7E_LSCopyItemInfo,
kVPXMethod__7E_LSOpenFSRef,
kVPXMethod__7E_Make_20_Initialization_20_Event,
kVPXMethod__7E_Make_20_Initialization_20_Parameters,
kVPXMethod__7E_Nav_20_Create_20_Dialog,
kVPXMethod__7E_New_20_NavDialog_2A2A_,
kVPXMethod__7E_Remove_20_DBItems,
kVPXMethod__7E_Reveal_20_DBItem,
kVPXMethod__7E_Select_20_DBItems,
kVPXMethod__7E_Set_20_Automatic_20_Control_20_Drag_20_Tracking_3F_,
kVPXMethod__7E_Set_20_ColumnView_20_Display_20_Type,
kVPXMethod__7E_Set_20_Control_20_Value,
kVPXMethod__7E_Set_20_DBCallbacks,
kVPXMethod__7E_Set_20_DBEdit_20_Item,
kVPXMethod__7E_Set_20_ListView_20_Disclosure_20_Column,
kVPXMethod__7E_Set_20_Property_20_Flags,
kVPXMethod__7E_Set_20_Proxy_20_Alias,
kVPXMethod__7E_Set_20_Proxy_20_FSSpec,
kVPXMethod__7E_Set_20_Proxy_20_IconRef,
kVPXMethod__7E_Set_20_Proxy_20_Type,
kVPXMethod__7E_Set_20_Target_20_Item,
kVPXMethod__7E_Set_20_Toolbar_20_Button_20_Attribute,
kVPXMethod__7E_Set_20_Toolbar_20_Visible_3F_,
kVPXMethod__7E_Set_20_Value,
kVPXMethod__7E_Set_20_View_20_Style,
kVPXMethod__7E_Set_20_Window_20_Modified,
kVPXMethod__7E_Set_20_Window_20_Toolbar,
kVPXMethod__7E_Update_20_Items,
kVPXMethod__7E7E_Extract_20_FSCatInfo,
kVPXMethod__7E7E_Generate_20_Reply,
kVPXMethod__7E7E_Param_20_Error,
kVPXMethod__7E7E_Parse_20_Reply_20_Selection_20_AEDesc,
kVPXMethod__7E7E_Update_20_Data
};
enum valueConstantType {
kVPXValue_AEDesc,
kVPXValue_Accept_20_Drag_20_Callback,
kVPXValue_Action,
kVPXValue_Action_20_Callback,
kVPXValue_Active_3F_,
kVPXValue_Activities,
kVPXValue_Activity,
kVPXValue_Activity_20_Name,
kVPXValue_Add_20_Drag_20_Item_20_Callback,
kVPXValue_Additional_20_Data,
kVPXValue_Alias_20_Record,
kVPXValue_All_20_Package_20_Types,
kVPXValue_Allocator,
kVPXValue_Allowed_20_Order,
kVPXValue_Annotation,
kVPXValue_App_20_Saved_3F_,
kVPXValue_Apple_20_Event,
kVPXValue_Application_20_Name,
kVPXValue_Application_20_Type,
kVPXValue_Architectures,
kVPXValue_Archive,
kVPXValue_Archive_20_Size,
kVPXValue_Archive_20_Types,
kVPXValue_Archive_20_Value,
kVPXValue_Attachments,
kVPXValue_Attribute,
kVPXValue_Attribute_20_Indices,
kVPXValue_Attribute_20_Name,
kVPXValue_Attributes,
kVPXValue_Auto_20_Move_20_Output_20_Bar_3F_,
kVPXValue_Auto_20_Open_20_Case_20_Drawer_3F_,
kVPXValue_Base_20_Class_20_ID,
kVPXValue_Behavior,
kVPXValue_Block_20_Pages,
kVPXValue_Block_20_Pointer,
kVPXValue_Block_20_Size,
kVPXValue_BlockPtr,
kVPXValue_Breakpoint,
kVPXValue_Breakpoints,
kVPXValue_Buffer_20_Size,
kVPXValue_Build_20_Error,
kVPXValue_Build_20_Folder,
kVPXValue_Build_20_Settings,
kVPXValue_Bundle,
kVPXValue_Bundle_20_Extension,
kVPXValue_Bundle_20_Icon_20_File,
kVPXValue_Bundle_20_Identifier,
kVPXValue_Bundle_20_Version,
kVPXValue_Bytes_20_Read,
kVPXValue_CF_20_Reference,
kVPXValue_CGContext_20_Reference,
kVPXValue_CGPath_20_Reference,
kVPXValue_Cache_20_Mode,
kVPXValue_Call_20_Super,
kVPXValue_Callback_20_Method_20_Name,
kVPXValue_Callback_20_Pointer,
kVPXValue_Callback_20_Result,
kVPXValue_Callbacks_20_Reference,
kVPXValue_Calling_20_Promise_3F_,
kVPXValue_Cancel,
kVPXValue_Canceled_3F_,
kVPXValue_Canvas_20_Limits,
kVPXValue_Case,
kVPXValue_Case_20_Dock_20_Side,
kVPXValue_Case_20_Index,
kVPXValue_Case_20_Sensitive_3F_,
kVPXValue_Case_20_Stack,
kVPXValue_Change_20_Selection_3F_,
kVPXValue_Changed_20_Callback,
kVPXValue_Check_20_Timer,
kVPXValue_Children,
kVPXValue_Class,
kVPXValue_Class_20_Attribute_20_Indices,
kVPXValue_Class_20_ID,
kVPXValue_Class_20_List,
kVPXValue_Class_20_Name,
kVPXValue_Class_20_Name_20_ID,
kVPXValue_Clean_3F_,
kVPXValue_Column_20_View,
kVPXValue_Columns,
kVPXValue_Command,
kVPXValue_Command_20_ID,
kVPXValue_Command_20_Line,
kVPXValue_Comment_20_Colors,
kVPXValue_Completed_20_Stages,
kVPXValue_Completed_3F_,
kVPXValue_Completion_20_Behavior,
kVPXValue_Completion_20_Callback,
kVPXValue_Component_20_Ref,
kVPXValue_Component_20_Type,
kVPXValue_Constructor,
kVPXValue_Container,
kVPXValue_Container_3F_,
kVPXValue_Content,
kVPXValue_Contents_20_Page,
kVPXValue_Contextual_20_Menu_3F_,
kVPXValue_Control,
kVPXValue_Control_20_Action,
kVPXValue_Control_20_Auto_20_Invalidate_20_Flags,
kVPXValue_Control_20_Event_20_Behavior,
kVPXValue_Control_20_Event_20_Handler,
kVPXValue_Control_20_Kind,
kVPXValue_Control_20_Record,
kVPXValue_ControlRef,
kVPXValue_Controller,
kVPXValue_Copy_20_Frameworks_3F_,
kVPXValue_Count_20_Completed,
kVPXValue_Count_20_Max,
kVPXValue_Creation_20_Options_20_Record,
kVPXValue_Creator,
kVPXValue_Creator_20_Code,
kVPXValue_Current_20_Colors,
kVPXValue_Current_20_Count,
kVPXValue_Current_20_Drag,
kVPXValue_Current_20_Drop_20_Flavors,
kVPXValue_Current_20_Find,
kVPXValue_Current_20_Find_20_State,
kVPXValue_Current_20_Item,
kVPXValue_Current_20_Page,
kVPXValue_Current_20_Result,
kVPXValue_Current_20_Search,
kVPXValue_Current_20_Stage,
kVPXValue_Current_20_Subfolders,
kVPXValue_Current_20_Tasks,
kVPXValue_Current_20_Transform,
kVPXValue_Current_20_Value,
kVPXValue_Current_3F_,
kVPXValue_Custom_20_Plist_20_Keys,
kVPXValue_Custom_20_Properties,
kVPXValue_Custom_20_Reply,
kVPXValue_Data,
kVPXValue_Data_20_Cache,
kVPXValue_Data_20_Cache_20_Index,
kVPXValue_Debug_20_Background,
kVPXValue_Debug_20_Colors,
kVPXValue_Deep_20_Case_20_Items_3F_,
kVPXValue_Default_20_Bundle_20_Identifier_20_Prefix,
kVPXValue_Default_20_Forms_20_List,
kVPXValue_Default_20_Info_20_Lists,
kVPXValue_Default_20_Order,
kVPXValue_Default_20_Properties,
kVPXValue_Default_20_Template,
kVPXValue_Defaults,
kVPXValue_Demo_20_Messages,
kVPXValue_Depth,
kVPXValue_Depth_20_Flag,
kVPXValue_Description,
kVPXValue_Descriptive_20_Text,
kVPXValue_Dirty,
kVPXValue_Dirty_3F_,
kVPXValue_Disclosure_20_Column,
kVPXValue_Display_20_Type,
kVPXValue_Displaying_20_Results_20_Windows_3F_,
kVPXValue_Document_20_Count,
kVPXValue_Done,
kVPXValue_Double_20_Down,
kVPXValue_Drag_20_Input_20_Callback,
kVPXValue_DragRef,
kVPXValue_Drawers,
kVPXValue_Drop_20_Flavors,
kVPXValue_Dynamic_20_Attributes,
kVPXValue_Edit_20_Control,
kVPXValue_Edit_20_Record,
kVPXValue_Editable_3F_,
kVPXValue_Editor,
kVPXValue_Editors,
kVPXValue_Enabled_3F_,
kVPXValue_Engine_20_Framework,
kVPXValue_Environment,
kVPXValue_Error,
kVPXValue_Error_3F_,
kVPXValue_Errors,
kVPXValue_Event_20_Callback_20_Behavior,
kVPXValue_Event_20_Class,
kVPXValue_Event_20_Handler,
kVPXValue_Event_20_Handler_20_Ref,
kVPXValue_Event_20_Handlers,
kVPXValue_Event_20_ID,
kVPXValue_Event_20_Loop,
kVPXValue_Event_20_Parameters,
kVPXValue_Event_20_Record,
kVPXValue_Event_20_Reference,
kVPXValue_Event_20_Target,
kVPXValue_Event_20_Types,
kVPXValue_EventRef,
kVPXValue_Exact_20_Match_3F_,
kVPXValue_Exclude_20_Types,
kVPXValue_Exit_20_Result_20_Code,
kVPXValue_Export_20_Level,
kVPXValue_Export_20_Mode,
kVPXValue_Extracted_20_Value,
kVPXValue_FS_20_Reference,
kVPXValue_Fast_20_Quit_3F_,
kVPXValue_Fat_3F_,
kVPXValue_File,
kVPXValue_File_20_Creator,
kVPXValue_File_20_Name,
kVPXValue_File_20_Ref,
kVPXValue_File_20_Specification,
kVPXValue_File_20_Translation_20_Spec,
kVPXValue_File_20_Type,
kVPXValue_Fill_3F_,
kVPXValue_Filter_20_Callback_20_Behavior,
kVPXValue_Final_20_Task,
kVPXValue_Find_20_Class_20_Types,
kVPXValue_Find_20_Result,
kVPXValue_Find_20_Sheet,
kVPXValue_Find_20_State,
kVPXValue_Find_20_Text,
kVPXValue_Find_20_Window,
kVPXValue_Finished_3F_,
kVPXValue_Flavors,
kVPXValue_Folder,
kVPXValue_Folder_20_Search,
kVPXValue_Form,
kVPXValue_Format,
kVPXValue_Found_20_Callback,
kVPXValue_Found_20_Items,
kVPXValue_Frame,
kVPXValue_Framework_20_Directories,
kVPXValue_Front_20_Application,
kVPXValue_Get_20_Contextual_20_Menu_20_Callback,
kVPXValue_Graphic,
kVPXValue_HICommand,
kVPXValue_HICommand_20_Cache,
kVPXValue_HIObject_20_Class,
kVPXValue_HIObject_20_Class_20_Callback,
kVPXValue_HIObject_20_Class_20_Reference,
kVPXValue_HIObject_20_Instance_20_Type,
kVPXValue_HIObject_20_Reference,
kVPXValue_HIObjectRef,
kVPXValue_HIToolbar_20_Events,
kVPXValue_HIToolbar_20_Item_20_Events,
kVPXValue_HIToolbar_20_Reference,
kVPXValue_HIView_20_Class,
kVPXValue_Has_20_Cancel_3F_,
kVPXValue_Has_20_Repeat_3F_,
kVPXValue_Header_20_Directories,
kVPXValue_Helper,
kVPXValue_Helper_20_Name,
kVPXValue_Highlight,
kVPXValue_Horizontal_20_Scroll_20_Bar,
kVPXValue_ID,
kVPXValue_IO_20_Spacing_20_Buffer,
kVPXValue_Icon,
kVPXValue_Icon_20_Name,
kVPXValue_Icon_20_Reference,
kVPXValue_Icon_20_Registrar,
kVPXValue_IconRef,
kVPXValue_Icons,
kVPXValue_Identifier,
kVPXValue_Idle_20_Action,
kVPXValue_Idle_20_Scroll_20_Timer,
kVPXValue_In_20_Drag_20_Instances,
kVPXValue_In_20_Drag_20_View_20_Content,
kVPXValue_Inarity,
kVPXValue_Index,
kVPXValue_Info_20_Use_20_Web_20_View_3F_,
kVPXValue_Inherited,
kVPXValue_Initial_20_Classes,
kVPXValue_Initial_20_Delay,
kVPXValue_Initial_20_Pasteboards,
kVPXValue_Initial_20_Tasks,
kVPXValue_Initial_20_View,
kVPXValue_Initial_20_Windows,
kVPXValue_Initial_3F_,
kVPXValue_Initially_20_Open_3F_,
kVPXValue_Inject,
kVPXValue_Input_20_List,
kVPXValue_Input_20_Specifiers,
kVPXValue_Inputs,
kVPXValue_Inset,
kVPXValue_Instance,
kVPXValue_Instances,
kVPXValue_Interpreter_20_Mode,
kVPXValue_Interpreter_20_Thread_3F_,
kVPXValue_Interpreter_20_Version,
kVPXValue_Item,
kVPXValue_Item_20_Callbacks,
kVPXValue_Item_20_Compare_20_Callback,
kVPXValue_Item_20_Data_20_Callback,
kVPXValue_Item_20_Help_20_Content_20_Callback,
kVPXValue_Item_20_ID,
kVPXValue_Item_20_List,
kVPXValue_Item_20_Notification_20_Callback,
kVPXValue_Item_20_Record,
kVPXValue_Item_20_Stack,
kVPXValue_Items,
kVPXValue_Items_20_To_20_Open,
kVPXValue_Justification,
kVPXValue_Key,
kVPXValue_Key_20_Script,
kVPXValue_Known_20_Flavors,
kVPXValue_Known_20_IDs,
kVPXValue_Known_20_Items,
kVPXValue_Known_20_Projects,
kVPXValue_Label,
kVPXValue_Last_20_Form,
kVPXValue_Last_20_Height,
kVPXValue_Last_20_Width,
kVPXValue_Library_20_Name,
kVPXValue_Limit_20_UTIs,
kVPXValue_Line_20_Size,
kVPXValue_Link_20_States,
kVPXValue_Linker_20_Sets,
kVPXValue_Lipo_20_Paths,
kVPXValue_List,
kVPXValue_List_20_Array,
kVPXValue_List_20_Index,
kVPXValue_List_20_Roots,
kVPXValue_List_20_Terminals,
kVPXValue_List_20_View,
kVPXValue_List_20_View_20_Canvas_20_Buffer,
kVPXValue_List_20_View_20_Row_20_Colors_3F_,
kVPXValue_List_20_Window,
kVPXValue_Lists,
kVPXValue_Long_20_Help_20_Text,
kVPXValue_Lookup_20_History,
kVPXValue_Loop_20_Root,
kVPXValue_Loop_20_Terminals,
kVPXValue_MP_20_Task,
kVPXValue_MPTask,
kVPXValue_Main_20_Thread,
kVPXValue_Manual_20_Items,
kVPXValue_Manual_20_Locations,
kVPXValue_Max,
kVPXValue_Max_20_Count,
kVPXValue_Maximum,
kVPXValue_Maximum_20_Size,
kVPXValue_Maximum_20_Width,
kVPXValue_Menu,
kVPXValue_Menu_20_ID,
kVPXValue_Menu_20_Items,
kVPXValue_Menu_20_Nib_20_Info,
kVPXValue_MenuRef,
kVPXValue_Menubar_20_Icons,
kVPXValue_Method,
kVPXValue_Method_20_Name,
kVPXValue_Min,
kVPXValue_Minimum,
kVPXValue_Minimum_20_MacOSX,
kVPXValue_Minimum_20_Size,
kVPXValue_Minimum_20_Size_20_Text,
kVPXValue_Minimum_20_Width,
kVPXValue_Modality,
kVPXValue_Name,
kVPXValue_Nav_20_Class,
kVPXValue_New_20_Line_20_Char,
kVPXValue_New_20_Line_20_Mode_3F_,
kVPXValue_Next_20_Handler,
kVPXValue_Normal_20_Colors,
kVPXValue_Not_20_Saved_3F_,
kVPXValue_Null_20_on_20_Cancel_3F_,
kVPXValue_Offsets,
kVPXValue_Old_20_Select_20_List,
kVPXValue_Open_20_Stack,
kVPXValue_Open_20_Viewer_20_At_20_Launch_3F_,
kVPXValue_Open_3F_,
kVPXValue_Operation,
kVPXValue_Option,
kVPXValue_Options,
kVPXValue_Origin,
kVPXValue_Original_20_Text,
kVPXValue_Originator,
kVPXValue_Other_20_Files,
kVPXValue_Outarity,
kVPXValue_Output_20_Specifiers,
kVPXValue_Outputs,
kVPXValue_Oval_20_Height,
kVPXValue_Oval_20_Width,
kVPXValue_Owner,
kVPXValue_PMPageFormat,
kVPXValue_PMPrintSession,
kVPXValue_PMPrintSettings,
kVPXValue_Package_20_ID,
kVPXValue_Package_20_Name,
kVPXValue_Packager,
kVPXValue_Packager_20_State,
kVPXValue_Page_20_Setup_20_Done_20_Callback,
kVPXValue_Parameter_20_Strings,
kVPXValue_Parameters,
kVPXValue_Parent,
kVPXValue_Parent_20_URL,
kVPXValue_Parent_20_Window,
kVPXValue_Part,
kVPXValue_Pasteboard,
kVPXValue_PasteboardRef,
kVPXValue_Pasteboards,
kVPXValue_Path,
kVPXValue_Path_20_To_20_Binary,
kVPXValue_Permission,
kVPXValue_PkgInfo_20_Creator,
kVPXValue_PkgInfo_20_Type,
kVPXValue_Plug_20_Ins,
kVPXValue_Position_20_Mode,
kVPXValue_Position_20_Offset,
kVPXValue_Preferred_20_Edge,
kVPXValue_Preview_20_Callback_20_Behavior,
kVPXValue_Primary_20_Prompt,
kVPXValue_Primitive_20_Files,
kVPXValue_Print_20_Dialog_20_Done_20_Callback,
kVPXValue_Print_20_Job,
kVPXValue_Problem_20_Operations,
kVPXValue_ProcPtr_20_Name,
kVPXValue_Procedure_20_ID,
kVPXValue_Process_20_Items,
kVPXValue_Product_20_Name,
kVPXValue_Progress,
kVPXValue_Progress_20_Percent,
kVPXValue_Project,
kVPXValue_Project_20_Data,
kVPXValue_Project_20_File,
kVPXValue_Project_20_Info,
kVPXValue_Project_20_Templates,
kVPXValue_Projects,
kVPXValue_Projects_20_Max,
kVPXValue_Promise_20_Callback,
kVPXValue_Promised_3F_,
kVPXValue_Property_20_Flags,
kVPXValue_Property_20_ID,
kVPXValue_Property_20_Type,
kVPXValue_QDFrame,
kVPXValue_QDPort_20_Reference,
kVPXValue_Queue_20_ID,
kVPXValue_Quitting_3F_,
kVPXValue_Read_20_Descriptor,
kVPXValue_Read_20_Name,
kVPXValue_Receive_20_Callback,
kVPXValue_Receive_20_Drag_20_Callback,
kVPXValue_Recent_20_Projects,
kVPXValue_Record,
kVPXValue_Ref_20_ID,
kVPXValue_Reference,
kVPXValue_Region,
kVPXValue_Release_20_Version,
kVPXValue_Release_3F_,
kVPXValue_Repeat,
kVPXValue_Repeat_20_Count,
kVPXValue_Repeat_20_Delay,
kVPXValue_Replace_20_Text,
kVPXValue_Replacing_3F_,
kVPXValue_Reply,
kVPXValue_ReplyRef,
kVPXValue_Request_20_Only_3F_,
kVPXValue_Required_20_Services,
kVPXValue_Requires_20_ObjC_3F_,
kVPXValue_Resource_20_File,
kVPXValue_Result,
kVPXValue_Result_20_Class,
kVPXValue_Result_20_Code,
kVPXValue_Result_20_ID,
kVPXValue_Result_20_Ref,
kVPXValue_Result_20_Text,
kVPXValue_Results,
kVPXValue_Results_20_Name,
kVPXValue_Return_20_Character,
kVPXValue_Return_20_ID,
kVPXValue_Reuse_20_List_20_Window_3F_,
kVPXValue_Review_3F_,
kVPXValue_Revision_20_ID,
kVPXValue_Root,
kVPXValue_Root_20_Data_20_Item,
kVPXValue_Root_20_SDK,
kVPXValue_Roots,
kVPXValue_SDKs,
kVPXValue_Save_20_Changes_3F_,
kVPXValue_Script,
kVPXValue_Search_20_Folders,
kVPXValue_Search_20_Items,
kVPXValue_Search_20_Phrase,
kVPXValue_Search_3F_,
kVPXValue_Secondary_20_Prompt,
kVPXValue_Section_20_Files,
kVPXValue_Segments,
kVPXValue_Select_20_Contextual_20_Menu_20_Callback,
kVPXValue_Select_20_List,
kVPXValue_Selected,
kVPXValue_Selected_20_Colors,
kVPXValue_Selected_20_Files,
kVPXValue_Sender_20_Only_3F_,
kVPXValue_Sender_20_Translated_3F_,
kVPXValue_Service_20_Manager,
kVPXValue_Services,
kVPXValue_Session,
kVPXValue_Settings,
kVPXValue_Shape,
kVPXValue_Shell_20_Result,
kVPXValue_Shell_20_Text,
kVPXValue_Short_20_Help_20_Text,
kVPXValue_Shut_20_Down_3F_,
kVPXValue_Size,
kVPXValue_Skip_20_Colors,
kVPXValue_Smart_20_Find_20_States,
kVPXValue_Sort_20_Order,
kVPXValue_Sortable_3F_,
kVPXValue_Source_20_Data,
kVPXValue_Sources,
kVPXValue_Stack,
kVPXValue_Stack_20_Frames,
kVPXValue_Stack_20_Size,
kVPXValue_Stacks,
kVPXValue_Stage,
kVPXValue_Stages,
kVPXValue_Standard_20_List_3F_,
kVPXValue_Standard_20_Text_3F_,
kVPXValue_Start_20_Time,
kVPXValue_State,
kVPXValue_Static_20_Directories,
kVPXValue_Stationery_3F_,
kVPXValue_Status,
kVPXValue_Sub_20_Classes,
kVPXValue_Sub_20_ControlRef,
kVPXValue_Subfolders_3F_,
kVPXValue_Super_20_Class,
kVPXValue_Super_20_Instance,
kVPXValue_Supports_20_Drop_3F_,
kVPXValue_Supports_20_ZeroLink_3F_,
kVPXValue_Synchros,
kVPXValue_System_20_Translated_3F_,
kVPXValue_Target,
kVPXValue_Target_20_AEDesc,
kVPXValue_Task_20_ID,
kVPXValue_Term,
kVPXValue_Terminals,
kVPXValue_Text,
kVPXValue_Text_20_Command,
kVPXValue_Text_20_Descriptor,
kVPXValue_Text_20_Editor,
kVPXValue_Text_20_File_20_Creator_20_Code,
kVPXValue_The_20_Application,
kVPXValue_The_20_Class,
kVPXValue_The_20_Custom_20_View,
kVPXValue_The_20_Drag,
kVPXValue_The_20_Event,
kVPXValue_The_20_Nib_20_Window,
kVPXValue_Thread,
kVPXValue_Threads,
kVPXValue_Tidy_20_Grid_20_H,
kVPXValue_Tidy_20_Grid_20_V,
kVPXValue_Tidy_20_Offset_20_H,
kVPXValue_Tidy_20_Offset_20_V,
kVPXValue_Time_20_Stamp,
kVPXValue_Timer_20_Reference,
kVPXValue_Title,
kVPXValue_Title_20_Offset,
kVPXValue_Tool_20_Set,
kVPXValue_Toolbar,
kVPXValue_Toolbar_20_Item,
kVPXValue_Tools,
kVPXValue_Top,
kVPXValue_Topical_3F_,
kVPXValue_Total_20_Cases,
kVPXValue_Total_20_Size,
kVPXValue_Tracking_20_Callback,
kVPXValue_Transaction_20_ID,
kVPXValue_Translation_20_Needed_3F_,
kVPXValue_Type,
kVPXValue_Type_20_List,
kVPXValue_UPP_20_Allocate,
kVPXValue_UPP_20_Dispose,
kVPXValue_UPP_20_Pointer,
kVPXValue_URL,
kVPXValue_URL_20_Prefix,
kVPXValue_URL_20_Text,
kVPXValue_Use_20_Prototype_20_Windows_3F_,
kVPXValue_User_20_Data,
kVPXValue_VPL_20_Data,
kVPXValue_VPZ_20_Access_20_Control,
kVPXValue_Valid_20_View_20_Types,
kVPXValue_Valid_3F_,
kVPXValue_Value,
kVPXValue_Value_20_Clipboard,
kVPXValue_Value_20_Type_20_Menu_20_Items,
kVPXValue_Values,
kVPXValue_Verify_20_Reads_3F_,
kVPXValue_Version,
kVPXValue_Vertical_20_Scroll_20_Bar,
kVPXValue_View,
kVPXValue_View_20_Type,
kVPXValue_Viewer,
kVPXValue_Viewport_20_Origin,
kVPXValue_Views,
kVPXValue_Visible,
kVPXValue_Visible_3F_,
kVPXValue_Volume_20_Reference,
kVPXValue_Wait_20_Time,
kVPXValue_Watched_3F_,
kVPXValue_Whole_20_List,
kVPXValue_Width,
kVPXValue_Window,
kVPXValue_Window_20_Drag_20_Handler,
kVPXValue_Window_20_Event_20_Handler,
kVPXValue_Window_20_Origin,
kVPXValue_Window_20_Pasteboard_20_Handler,
kVPXValue_Window_20_Printing_20_Handler,
kVPXValue_Window_20_Record,
kVPXValue_Window_20_Toolbar,
kVPXValue_Window_20_Type,
kVPXValue_WindowRef,
kVPXValue_Windows,
kVPXValue_Wrap_20_Around_3F_,
kVPXValue_Write_20_Descriptor,
kVPXValue_Write_20_Name,
kVPXValue_X,
kVPXValue_Y,
kVPXValue_appDEBUG_5F_VERBOSITY,
kVPXValue_edoM_20_omeD,
kVPXValue__7E_HIToolbar_20_Item,
kVPXValue__7E_HIToolbarItemRef
};
#endif