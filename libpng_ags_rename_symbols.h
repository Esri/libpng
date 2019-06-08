#ifndef LIBPNG_AGS_RENAME_SYMBOLS_H
#define LIBPNG_AGS_RENAME_SYMBOLS_H

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wextra-tokens"
#pragma clang diagnostic ignored "-Wc99-extensions"

// Namespaced Header
#ifndef __NS_SYMBOL
// We need to have multiple levels of macros here so that __NAMESPACE_PREFIX_ is
// properly replaced by the time we concatenate the namespace prefix.
#define __NS_REWRITE(ns, symbol) ns ## _ ## symbol
#define __NS_BRIDGE(ns, symbol) __NS_REWRITE(ns, symbol)
#define __NS_SYMBOL(symbol) __NS_BRIDGE(ags, symbol)
#endif

// Functions
#ifndef png_64bit_product
#define png_64bit_product __NS_SYMBOL(png_64bit_product)
#endif

#ifndef png_access_version_number
#define png_access_version_number __NS_SYMBOL(png_access_version_number)
#endif

#ifndef png_build_gamma_table
#define png_build_gamma_table __NS_SYMBOL(png_build_gamma_table)
#endif

#ifndef png_build_grayscale_palette
#define png_build_grayscale_palette __NS_SYMBOL(png_build_grayscale_palette)
#endif

#ifndef png_calculate_crc
#define png_calculate_crc __NS_SYMBOL(png_calculate_crc)
#endif

#ifndef png_calloc
#define png_calloc __NS_SYMBOL(png_calloc)
#endif

#ifndef png_check_IHDR
#define png_check_IHDR __NS_SYMBOL(png_check_IHDR)
#endif

#ifndef png_check_cHRM_fixed
#define png_check_cHRM_fixed __NS_SYMBOL(png_check_cHRM_fixed)
#endif

#ifndef png_check_chunk_name
#define png_check_chunk_name __NS_SYMBOL(png_check_chunk_name)
#endif

#ifndef png_check_keyword
#define png_check_keyword __NS_SYMBOL(png_check_keyword)
#endif

#ifndef png_check_sig
#define png_check_sig __NS_SYMBOL(png_check_sig)
#endif

#ifndef png_chunk_error
#define png_chunk_error __NS_SYMBOL(png_chunk_error)
#endif

#ifndef png_chunk_warning
#define png_chunk_warning __NS_SYMBOL(png_chunk_warning)
#endif

#ifndef png_combine_row
#define png_combine_row __NS_SYMBOL(png_combine_row)
#endif

#ifndef png_convert_from_struct_tm
#define png_convert_from_struct_tm __NS_SYMBOL(png_convert_from_struct_tm)
#endif

#ifndef png_convert_from_time_t
#define png_convert_from_time_t __NS_SYMBOL(png_convert_from_time_t)
#endif

#ifndef png_convert_to_rfc1123
#define png_convert_to_rfc1123 __NS_SYMBOL(png_convert_to_rfc1123)
#endif

#ifndef png_crc_error
#define png_crc_error __NS_SYMBOL(png_crc_error)
#endif

#ifndef png_crc_finish
#define png_crc_finish __NS_SYMBOL(png_crc_finish)
#endif

#ifndef png_crc_read
#define png_crc_read __NS_SYMBOL(png_crc_read)
#endif

#ifndef png_create_info_struct
#define png_create_info_struct __NS_SYMBOL(png_create_info_struct)
#endif

#ifndef png_create_read_struct
#define png_create_read_struct __NS_SYMBOL(png_create_read_struct)
#endif

#ifndef png_create_read_struct_2
#define png_create_read_struct_2 __NS_SYMBOL(png_create_read_struct_2)
#endif

#ifndef png_create_struct
#define png_create_struct __NS_SYMBOL(png_create_struct)
#endif

#ifndef png_create_struct_2
#define png_create_struct_2 __NS_SYMBOL(png_create_struct_2)
#endif

#ifndef png_create_write_struct
#define png_create_write_struct __NS_SYMBOL(png_create_write_struct)
#endif

#ifndef png_create_write_struct_2
#define png_create_write_struct_2 __NS_SYMBOL(png_create_write_struct_2)
#endif

#ifndef png_data_freer
#define png_data_freer __NS_SYMBOL(png_data_freer)
#endif

#ifndef png_decompress_chunk
#define png_decompress_chunk __NS_SYMBOL(png_decompress_chunk)
#endif

#ifndef png_default_flush
#define png_default_flush __NS_SYMBOL(png_default_flush)
#endif

#ifndef png_default_read_data
#define png_default_read_data __NS_SYMBOL(png_default_read_data)
#endif

#ifndef png_default_write_data
#define png_default_write_data __NS_SYMBOL(png_default_write_data)
#endif

#ifndef png_destroy_info_struct
#define png_destroy_info_struct __NS_SYMBOL(png_destroy_info_struct)
#endif

#ifndef png_destroy_read_struct
#define png_destroy_read_struct __NS_SYMBOL(png_destroy_read_struct)
#endif

#ifndef png_destroy_struct
#define png_destroy_struct __NS_SYMBOL(png_destroy_struct)
#endif

#ifndef png_destroy_struct_2
#define png_destroy_struct_2 __NS_SYMBOL(png_destroy_struct_2)
#endif

#ifndef png_destroy_write_struct
#define png_destroy_write_struct __NS_SYMBOL(png_destroy_write_struct)
#endif

#ifndef png_do_background
#define png_do_background __NS_SYMBOL(png_do_background)
#endif

#ifndef png_do_bgr
#define png_do_bgr __NS_SYMBOL(png_do_bgr)
#endif

#ifndef png_do_chop
#define png_do_chop __NS_SYMBOL(png_do_chop)
#endif

#ifndef png_do_dither
#define png_do_dither __NS_SYMBOL(png_do_dither)
#endif

#ifndef png_do_expand
#define png_do_expand __NS_SYMBOL(png_do_expand)
#endif

#ifndef png_do_expand_palette
#define png_do_expand_palette __NS_SYMBOL(png_do_expand_palette)
#endif

#ifndef png_do_gamma
#define png_do_gamma __NS_SYMBOL(png_do_gamma)
#endif

#ifndef png_do_gray_to_rgb
#define png_do_gray_to_rgb __NS_SYMBOL(png_do_gray_to_rgb)
#endif

#ifndef png_do_invert
#define png_do_invert __NS_SYMBOL(png_do_invert)
#endif

#ifndef png_do_pack
#define png_do_pack __NS_SYMBOL(png_do_pack)
#endif

#ifndef png_do_packswap
#define png_do_packswap __NS_SYMBOL(png_do_packswap)
#endif

#ifndef png_do_read_filler
#define png_do_read_filler __NS_SYMBOL(png_do_read_filler)
#endif

#ifndef png_do_read_interlace
#define png_do_read_interlace __NS_SYMBOL(png_do_read_interlace)
#endif

#ifndef png_do_read_intrapixel
#define png_do_read_intrapixel __NS_SYMBOL(png_do_read_intrapixel)
#endif

#ifndef png_do_read_invert_alpha
#define png_do_read_invert_alpha __NS_SYMBOL(png_do_read_invert_alpha)
#endif

#ifndef png_do_read_swap_alpha
#define png_do_read_swap_alpha __NS_SYMBOL(png_do_read_swap_alpha)
#endif

#ifndef png_do_read_transformations
#define png_do_read_transformations __NS_SYMBOL(png_do_read_transformations)
#endif

#ifndef png_do_rgb_to_gray
#define png_do_rgb_to_gray __NS_SYMBOL(png_do_rgb_to_gray)
#endif

#ifndef png_do_shift
#define png_do_shift __NS_SYMBOL(png_do_shift)
#endif

#ifndef png_do_strip_filler
#define png_do_strip_filler __NS_SYMBOL(png_do_strip_filler)
#endif

#ifndef png_do_swap
#define png_do_swap __NS_SYMBOL(png_do_swap)
#endif

#ifndef png_do_unpack
#define png_do_unpack __NS_SYMBOL(png_do_unpack)
#endif

#ifndef png_do_unshift
#define png_do_unshift __NS_SYMBOL(png_do_unshift)
#endif

#ifndef png_do_write_interlace
#define png_do_write_interlace __NS_SYMBOL(png_do_write_interlace)
#endif

#ifndef png_do_write_intrapixel
#define png_do_write_intrapixel __NS_SYMBOL(png_do_write_intrapixel)
#endif

#ifndef png_do_write_invert_alpha
#define png_do_write_invert_alpha __NS_SYMBOL(png_do_write_invert_alpha)
#endif

#ifndef png_do_write_swap_alpha
#define png_do_write_swap_alpha __NS_SYMBOL(png_do_write_swap_alpha)
#endif

#ifndef png_do_write_transformations
#define png_do_write_transformations __NS_SYMBOL(png_do_write_transformations)
#endif

#ifndef png_error
#define png_error __NS_SYMBOL(png_error)
#endif

#ifndef png_flush
#define png_flush __NS_SYMBOL(png_flush)
#endif

#ifndef png_free
#define png_free __NS_SYMBOL(png_free)
#endif

#ifndef png_free_data
#define png_free_data __NS_SYMBOL(png_free_data)
#endif

#ifndef png_free_default
#define png_free_default __NS_SYMBOL(png_free_default)
#endif

#ifndef png_get_IHDR
#define png_get_IHDR __NS_SYMBOL(png_get_IHDR)
#endif

#ifndef png_get_PLTE
#define png_get_PLTE __NS_SYMBOL(png_get_PLTE)
#endif

#ifndef png_get_asm_flagmask
#define png_get_asm_flagmask __NS_SYMBOL(png_get_asm_flagmask)
#endif

#ifndef png_get_asm_flags
#define png_get_asm_flags __NS_SYMBOL(png_get_asm_flags)
#endif

#ifndef png_get_bKGD
#define png_get_bKGD __NS_SYMBOL(png_get_bKGD)
#endif

#ifndef png_get_bit_depth
#define png_get_bit_depth __NS_SYMBOL(png_get_bit_depth)
#endif

#ifndef png_get_cHRM
#define png_get_cHRM __NS_SYMBOL(png_get_cHRM)
#endif

#ifndef png_get_cHRM_fixed
#define png_get_cHRM_fixed __NS_SYMBOL(png_get_cHRM_fixed)
#endif

#ifndef png_get_channels
#define png_get_channels __NS_SYMBOL(png_get_channels)
#endif

#ifndef png_get_color_type
#define png_get_color_type __NS_SYMBOL(png_get_color_type)
#endif

#ifndef png_get_compression_buffer_size
#define png_get_compression_buffer_size __NS_SYMBOL(png_get_compression_buffer_size)
#endif

#ifndef png_get_compression_type
#define png_get_compression_type __NS_SYMBOL(png_get_compression_type)
#endif

#ifndef png_get_copyright
#define png_get_copyright __NS_SYMBOL(png_get_copyright)
#endif

#ifndef png_get_error_ptr
#define png_get_error_ptr __NS_SYMBOL(png_get_error_ptr)
#endif

#ifndef png_get_filter_type
#define png_get_filter_type __NS_SYMBOL(png_get_filter_type)
#endif

#ifndef png_get_gAMA
#define png_get_gAMA __NS_SYMBOL(png_get_gAMA)
#endif

#ifndef png_get_gAMA_fixed
#define png_get_gAMA_fixed __NS_SYMBOL(png_get_gAMA_fixed)
#endif

#ifndef png_get_hIST
#define png_get_hIST __NS_SYMBOL(png_get_hIST)
#endif

#ifndef png_get_header_ver
#define png_get_header_ver __NS_SYMBOL(png_get_header_ver)
#endif

#ifndef png_get_header_version
#define png_get_header_version __NS_SYMBOL(png_get_header_version)
#endif

#ifndef png_get_iCCP
#define png_get_iCCP __NS_SYMBOL(png_get_iCCP)
#endif

#ifndef png_get_image_height
#define png_get_image_height __NS_SYMBOL(png_get_image_height)
#endif

#ifndef png_get_image_width
#define png_get_image_width __NS_SYMBOL(png_get_image_width)
#endif

#ifndef png_get_int_32
#define png_get_int_32 __NS_SYMBOL(png_get_int_32)
#endif

#ifndef png_get_interlace_type
#define png_get_interlace_type __NS_SYMBOL(png_get_interlace_type)
#endif

#ifndef png_get_io_ptr
#define png_get_io_ptr __NS_SYMBOL(png_get_io_ptr)
#endif

#ifndef png_get_libpng_ver
#define png_get_libpng_ver __NS_SYMBOL(png_get_libpng_ver)
#endif

#ifndef png_get_mem_ptr
#define png_get_mem_ptr __NS_SYMBOL(png_get_mem_ptr)
#endif

#ifndef png_get_mmx_bitdepth_threshold
#define png_get_mmx_bitdepth_threshold __NS_SYMBOL(png_get_mmx_bitdepth_threshold)
#endif

#ifndef png_get_mmx_flagmask
#define png_get_mmx_flagmask __NS_SYMBOL(png_get_mmx_flagmask)
#endif

#ifndef png_get_mmx_rowbytes_threshold
#define png_get_mmx_rowbytes_threshold __NS_SYMBOL(png_get_mmx_rowbytes_threshold)
#endif

#ifndef png_get_oFFs
#define png_get_oFFs __NS_SYMBOL(png_get_oFFs)
#endif

#ifndef png_get_pCAL
#define png_get_pCAL __NS_SYMBOL(png_get_pCAL)
#endif

#ifndef png_get_pHYs
#define png_get_pHYs __NS_SYMBOL(png_get_pHYs)
#endif

#ifndef png_get_pixel_aspect_ratio
#define png_get_pixel_aspect_ratio __NS_SYMBOL(png_get_pixel_aspect_ratio)
#endif

#ifndef png_get_pixels_per_meter
#define png_get_pixels_per_meter __NS_SYMBOL(png_get_pixels_per_meter)
#endif

#ifndef png_get_progressive_ptr
#define png_get_progressive_ptr __NS_SYMBOL(png_get_progressive_ptr)
#endif

#ifndef png_get_rgb_to_gray_status
#define png_get_rgb_to_gray_status __NS_SYMBOL(png_get_rgb_to_gray_status)
#endif

#ifndef png_get_rowbytes
#define png_get_rowbytes __NS_SYMBOL(png_get_rowbytes)
#endif

#ifndef png_get_rows
#define png_get_rows __NS_SYMBOL(png_get_rows)
#endif

#ifndef png_get_sBIT
#define png_get_sBIT __NS_SYMBOL(png_get_sBIT)
#endif

#ifndef png_get_sCAL
#define png_get_sCAL __NS_SYMBOL(png_get_sCAL)
#endif

#ifndef png_get_sPLT
#define png_get_sPLT __NS_SYMBOL(png_get_sPLT)
#endif

#ifndef png_get_sRGB
#define png_get_sRGB __NS_SYMBOL(png_get_sRGB)
#endif

#ifndef png_get_signature
#define png_get_signature __NS_SYMBOL(png_get_signature)
#endif

#ifndef png_get_tIME
#define png_get_tIME __NS_SYMBOL(png_get_tIME)
#endif

#ifndef png_get_tRNS
#define png_get_tRNS __NS_SYMBOL(png_get_tRNS)
#endif

#ifndef png_get_text
#define png_get_text __NS_SYMBOL(png_get_text)
#endif

#ifndef png_get_uint_16
#define png_get_uint_16 __NS_SYMBOL(png_get_uint_16)
#endif

#ifndef png_get_uint_31
#define png_get_uint_31 __NS_SYMBOL(png_get_uint_31)
#endif

#ifndef png_get_uint_32
#define png_get_uint_32 __NS_SYMBOL(png_get_uint_32)
#endif

#ifndef png_get_unknown_chunks
#define png_get_unknown_chunks __NS_SYMBOL(png_get_unknown_chunks)
#endif

#ifndef png_get_user_chunk_ptr
#define png_get_user_chunk_ptr __NS_SYMBOL(png_get_user_chunk_ptr)
#endif

#ifndef png_get_user_height_max
#define png_get_user_height_max __NS_SYMBOL(png_get_user_height_max)
#endif

#ifndef png_get_user_transform_ptr
#define png_get_user_transform_ptr __NS_SYMBOL(png_get_user_transform_ptr)
#endif

#ifndef png_get_user_width_max
#define png_get_user_width_max __NS_SYMBOL(png_get_user_width_max)
#endif

#ifndef png_get_valid
#define png_get_valid __NS_SYMBOL(png_get_valid)
#endif

#ifndef png_get_x_offset_microns
#define png_get_x_offset_microns __NS_SYMBOL(png_get_x_offset_microns)
#endif

#ifndef png_get_x_offset_pixels
#define png_get_x_offset_pixels __NS_SYMBOL(png_get_x_offset_pixels)
#endif

#ifndef png_get_x_pixels_per_meter
#define png_get_x_pixels_per_meter __NS_SYMBOL(png_get_x_pixels_per_meter)
#endif

#ifndef png_get_y_offset_microns
#define png_get_y_offset_microns __NS_SYMBOL(png_get_y_offset_microns)
#endif

#ifndef png_get_y_offset_pixels
#define png_get_y_offset_pixels __NS_SYMBOL(png_get_y_offset_pixels)
#endif

#ifndef png_get_y_pixels_per_meter
#define png_get_y_pixels_per_meter __NS_SYMBOL(png_get_y_pixels_per_meter)
#endif

#ifndef png_handle_IEND
#define png_handle_IEND __NS_SYMBOL(png_handle_IEND)
#endif

#ifndef png_handle_IHDR
#define png_handle_IHDR __NS_SYMBOL(png_handle_IHDR)
#endif

#ifndef png_handle_PLTE
#define png_handle_PLTE __NS_SYMBOL(png_handle_PLTE)
#endif

#ifndef png_handle_as_unknown
#define png_handle_as_unknown __NS_SYMBOL(png_handle_as_unknown)
#endif

#ifndef png_handle_bKGD
#define png_handle_bKGD __NS_SYMBOL(png_handle_bKGD)
#endif

#ifndef png_handle_cHRM
#define png_handle_cHRM __NS_SYMBOL(png_handle_cHRM)
#endif

#ifndef png_handle_gAMA
#define png_handle_gAMA __NS_SYMBOL(png_handle_gAMA)
#endif

#ifndef png_handle_hIST
#define png_handle_hIST __NS_SYMBOL(png_handle_hIST)
#endif

#ifndef png_handle_iCCP
#define png_handle_iCCP __NS_SYMBOL(png_handle_iCCP)
#endif

#ifndef png_handle_oFFs
#define png_handle_oFFs __NS_SYMBOL(png_handle_oFFs)
#endif

#ifndef png_handle_pCAL
#define png_handle_pCAL __NS_SYMBOL(png_handle_pCAL)
#endif

#ifndef png_handle_pHYs
#define png_handle_pHYs __NS_SYMBOL(png_handle_pHYs)
#endif

#ifndef png_handle_sBIT
#define png_handle_sBIT __NS_SYMBOL(png_handle_sBIT)
#endif

#ifndef png_handle_sCAL
#define png_handle_sCAL __NS_SYMBOL(png_handle_sCAL)
#endif

#ifndef png_handle_sPLT
#define png_handle_sPLT __NS_SYMBOL(png_handle_sPLT)
#endif

#ifndef png_handle_sRGB
#define png_handle_sRGB __NS_SYMBOL(png_handle_sRGB)
#endif

#ifndef png_handle_tEXt
#define png_handle_tEXt __NS_SYMBOL(png_handle_tEXt)
#endif

#ifndef png_handle_tIME
#define png_handle_tIME __NS_SYMBOL(png_handle_tIME)
#endif

#ifndef png_handle_tRNS
#define png_handle_tRNS __NS_SYMBOL(png_handle_tRNS)
#endif

#ifndef png_handle_unknown
#define png_handle_unknown __NS_SYMBOL(png_handle_unknown)
#endif

#ifndef png_handle_zTXt
#define png_handle_zTXt __NS_SYMBOL(png_handle_zTXt)
#endif

#ifndef png_info_destroy
#define png_info_destroy __NS_SYMBOL(png_info_destroy)
#endif

#ifndef png_info_init
#define png_info_init __NS_SYMBOL(png_info_init)
#endif

#ifndef png_info_init_3
#define png_info_init_3 __NS_SYMBOL(png_info_init_3)
#endif

#ifndef png_init_io
#define png_init_io __NS_SYMBOL(png_init_io)
#endif

#ifndef png_init_read_transformations
#define png_init_read_transformations __NS_SYMBOL(png_init_read_transformations)
#endif

#ifndef png_malloc
#define png_malloc __NS_SYMBOL(png_malloc)
#endif

#ifndef png_malloc_default
#define png_malloc_default __NS_SYMBOL(png_malloc_default)
#endif

#ifndef png_malloc_warn
#define png_malloc_warn __NS_SYMBOL(png_malloc_warn)
#endif

#ifndef png_memcpy_check
#define png_memcpy_check __NS_SYMBOL(png_memcpy_check)
#endif

#ifndef png_memset_check
#define png_memset_check __NS_SYMBOL(png_memset_check)
#endif

#ifndef png_mmx_support
#define png_mmx_support __NS_SYMBOL(png_mmx_support)
#endif

#ifndef png_permit_empty_plte
#define png_permit_empty_plte __NS_SYMBOL(png_permit_empty_plte)
#endif

#ifndef png_permit_mng_features
#define png_permit_mng_features __NS_SYMBOL(png_permit_mng_features)
#endif

#ifndef png_process_IDAT_data
#define png_process_IDAT_data __NS_SYMBOL(png_process_IDAT_data)
#endif

#ifndef png_process_data
#define png_process_data __NS_SYMBOL(png_process_data)
#endif

#ifndef png_process_some_data
#define png_process_some_data __NS_SYMBOL(png_process_some_data)
#endif

#ifndef png_progressive_combine_row
#define png_progressive_combine_row __NS_SYMBOL(png_progressive_combine_row)
#endif

#ifndef png_push_crc_finish
#define png_push_crc_finish __NS_SYMBOL(png_push_crc_finish)
#endif

#ifndef png_push_crc_skip
#define png_push_crc_skip __NS_SYMBOL(png_push_crc_skip)
#endif

#ifndef png_push_fill_buffer
#define png_push_fill_buffer __NS_SYMBOL(png_push_fill_buffer)
#endif

#ifndef png_push_have_end
#define png_push_have_end __NS_SYMBOL(png_push_have_end)
#endif

#ifndef png_push_have_info
#define png_push_have_info __NS_SYMBOL(png_push_have_info)
#endif

#ifndef png_push_have_row
#define png_push_have_row __NS_SYMBOL(png_push_have_row)
#endif

#ifndef png_push_process_row
#define png_push_process_row __NS_SYMBOL(png_push_process_row)
#endif

#ifndef png_push_read_IDAT
#define png_push_read_IDAT __NS_SYMBOL(png_push_read_IDAT)
#endif

#ifndef png_push_read_chunk
#define png_push_read_chunk __NS_SYMBOL(png_push_read_chunk)
#endif

#ifndef png_push_read_sig
#define png_push_read_sig __NS_SYMBOL(png_push_read_sig)
#endif

#ifndef png_push_restore_buffer
#define png_push_restore_buffer __NS_SYMBOL(png_push_restore_buffer)
#endif

#ifndef png_push_save_buffer
#define png_push_save_buffer __NS_SYMBOL(png_push_save_buffer)
#endif

#ifndef png_read_chunk_header
#define png_read_chunk_header __NS_SYMBOL(png_read_chunk_header)
#endif

#ifndef png_read_data
#define png_read_data __NS_SYMBOL(png_read_data)
#endif

#ifndef png_read_destroy
#define png_read_destroy __NS_SYMBOL(png_read_destroy)
#endif

#ifndef png_read_end
#define png_read_end __NS_SYMBOL(png_read_end)
#endif

#ifndef png_read_filter_row
#define png_read_filter_row __NS_SYMBOL(png_read_filter_row)
#endif

#ifndef png_read_finish_row
#define png_read_finish_row __NS_SYMBOL(png_read_finish_row)
#endif

#ifndef png_read_image
#define png_read_image __NS_SYMBOL(png_read_image)
#endif

#ifndef png_read_info
#define png_read_info __NS_SYMBOL(png_read_info)
#endif

#ifndef png_read_init
#define png_read_init __NS_SYMBOL(png_read_init)
#endif

#ifndef png_read_init_2
#define png_read_init_2 __NS_SYMBOL(png_read_init_2)
#endif

#ifndef png_read_init_3
#define png_read_init_3 __NS_SYMBOL(png_read_init_3)
#endif

#ifndef png_read_png
#define png_read_png __NS_SYMBOL(png_read_png)
#endif

#ifndef png_read_push_finish_row
#define png_read_push_finish_row __NS_SYMBOL(png_read_push_finish_row)
#endif

#ifndef png_read_row
#define png_read_row __NS_SYMBOL(png_read_row)
#endif

#ifndef png_read_rows
#define png_read_rows __NS_SYMBOL(png_read_rows)
#endif

#ifndef png_read_start_row
#define png_read_start_row __NS_SYMBOL(png_read_start_row)
#endif

#ifndef png_read_transform_info
#define png_read_transform_info __NS_SYMBOL(png_read_transform_info)
#endif

#ifndef png_read_update_info
#define png_read_update_info __NS_SYMBOL(png_read_update_info)
#endif

#ifndef png_reset_crc
#define png_reset_crc __NS_SYMBOL(png_reset_crc)
#endif

#ifndef png_reset_zstream
#define png_reset_zstream __NS_SYMBOL(png_reset_zstream)
#endif

#ifndef png_save_int_32
#define png_save_int_32 __NS_SYMBOL(png_save_int_32)
#endif

#ifndef png_save_uint_16
#define png_save_uint_16 __NS_SYMBOL(png_save_uint_16)
#endif

#ifndef png_save_uint_32
#define png_save_uint_32 __NS_SYMBOL(png_save_uint_32)
#endif

#ifndef png_set_IHDR
#define png_set_IHDR __NS_SYMBOL(png_set_IHDR)
#endif

#ifndef png_set_PLTE
#define png_set_PLTE __NS_SYMBOL(png_set_PLTE)
#endif

#ifndef png_set_add_alpha
#define png_set_add_alpha __NS_SYMBOL(png_set_add_alpha)
#endif

#ifndef png_set_asm_flags
#define png_set_asm_flags __NS_SYMBOL(png_set_asm_flags)
#endif

#ifndef png_set_bKGD
#define png_set_bKGD __NS_SYMBOL(png_set_bKGD)
#endif

#ifndef png_set_background
#define png_set_background __NS_SYMBOL(png_set_background)
#endif

#ifndef png_set_bgr
#define png_set_bgr __NS_SYMBOL(png_set_bgr)
#endif

#ifndef png_set_cHRM
#define png_set_cHRM __NS_SYMBOL(png_set_cHRM)
#endif

#ifndef png_set_cHRM_fixed
#define png_set_cHRM_fixed __NS_SYMBOL(png_set_cHRM_fixed)
#endif

#ifndef png_set_compression_buffer_size
#define png_set_compression_buffer_size __NS_SYMBOL(png_set_compression_buffer_size)
#endif

#ifndef png_set_compression_level
#define png_set_compression_level __NS_SYMBOL(png_set_compression_level)
#endif

#ifndef png_set_compression_mem_level
#define png_set_compression_mem_level __NS_SYMBOL(png_set_compression_mem_level)
#endif

#ifndef png_set_compression_method
#define png_set_compression_method __NS_SYMBOL(png_set_compression_method)
#endif

#ifndef png_set_compression_strategy
#define png_set_compression_strategy __NS_SYMBOL(png_set_compression_strategy)
#endif

#ifndef png_set_compression_window_bits
#define png_set_compression_window_bits __NS_SYMBOL(png_set_compression_window_bits)
#endif

#ifndef png_set_crc_action
#define png_set_crc_action __NS_SYMBOL(png_set_crc_action)
#endif

#ifndef png_set_dither
#define png_set_dither __NS_SYMBOL(png_set_dither)
#endif

#ifndef png_set_error_fn
#define png_set_error_fn __NS_SYMBOL(png_set_error_fn)
#endif

#ifndef png_set_expand
#define png_set_expand __NS_SYMBOL(png_set_expand)
#endif

#ifndef png_set_expand_gray_1_2_4_to_8
#define png_set_expand_gray_1_2_4_to_8 __NS_SYMBOL(png_set_expand_gray_1_2_4_to_8)
#endif

#ifndef png_set_filler
#define png_set_filler __NS_SYMBOL(png_set_filler)
#endif

#ifndef png_set_filter
#define png_set_filter __NS_SYMBOL(png_set_filter)
#endif

#ifndef png_set_filter_heuristics
#define png_set_filter_heuristics __NS_SYMBOL(png_set_filter_heuristics)
#endif

#ifndef png_set_flush
#define png_set_flush __NS_SYMBOL(png_set_flush)
#endif

#ifndef png_set_gAMA
#define png_set_gAMA __NS_SYMBOL(png_set_gAMA)
#endif

#ifndef png_set_gAMA_fixed
#define png_set_gAMA_fixed __NS_SYMBOL(png_set_gAMA_fixed)
#endif

#ifndef png_set_gamma
#define png_set_gamma __NS_SYMBOL(png_set_gamma)
#endif

#ifndef png_set_gray_1_2_4_to_8
#define png_set_gray_1_2_4_to_8 __NS_SYMBOL(png_set_gray_1_2_4_to_8)
#endif

#ifndef png_set_gray_to_rgb
#define png_set_gray_to_rgb __NS_SYMBOL(png_set_gray_to_rgb)
#endif

#ifndef png_set_hIST
#define png_set_hIST __NS_SYMBOL(png_set_hIST)
#endif

#ifndef png_set_iCCP
#define png_set_iCCP __NS_SYMBOL(png_set_iCCP)
#endif

#ifndef png_set_interlace_handling
#define png_set_interlace_handling __NS_SYMBOL(png_set_interlace_handling)
#endif

#ifndef png_set_invalid
#define png_set_invalid __NS_SYMBOL(png_set_invalid)
#endif

#ifndef png_set_invert_alpha
#define png_set_invert_alpha __NS_SYMBOL(png_set_invert_alpha)
#endif

#ifndef png_set_invert_mono
#define png_set_invert_mono __NS_SYMBOL(png_set_invert_mono)
#endif

#ifndef png_set_keep_unknown_chunks
#define png_set_keep_unknown_chunks __NS_SYMBOL(png_set_keep_unknown_chunks)
#endif

#ifndef png_set_mem_fn
#define png_set_mem_fn __NS_SYMBOL(png_set_mem_fn)
#endif

#ifndef png_set_mmx_thresholds
#define png_set_mmx_thresholds __NS_SYMBOL(png_set_mmx_thresholds)
#endif

#ifndef png_set_oFFs
#define png_set_oFFs __NS_SYMBOL(png_set_oFFs)
#endif

#ifndef png_set_pCAL
#define png_set_pCAL __NS_SYMBOL(png_set_pCAL)
#endif

#ifndef png_set_pHYs
#define png_set_pHYs __NS_SYMBOL(png_set_pHYs)
#endif

#ifndef png_set_packing
#define png_set_packing __NS_SYMBOL(png_set_packing)
#endif

#ifndef png_set_packswap
#define png_set_packswap __NS_SYMBOL(png_set_packswap)
#endif

#ifndef png_set_palette_to_rgb
#define png_set_palette_to_rgb __NS_SYMBOL(png_set_palette_to_rgb)
#endif

#ifndef png_set_progressive_read_fn
#define png_set_progressive_read_fn __NS_SYMBOL(png_set_progressive_read_fn)
#endif

#ifndef png_set_read_fn
#define png_set_read_fn __NS_SYMBOL(png_set_read_fn)
#endif

#ifndef png_set_read_status_fn
#define png_set_read_status_fn __NS_SYMBOL(png_set_read_status_fn)
#endif

#ifndef png_set_read_user_chunk_fn
#define png_set_read_user_chunk_fn __NS_SYMBOL(png_set_read_user_chunk_fn)
#endif

#ifndef png_set_read_user_transform_fn
#define png_set_read_user_transform_fn __NS_SYMBOL(png_set_read_user_transform_fn)
#endif

#ifndef png_set_rgb_to_gray
#define png_set_rgb_to_gray __NS_SYMBOL(png_set_rgb_to_gray)
#endif

#ifndef png_set_rgb_to_gray_fixed
#define png_set_rgb_to_gray_fixed __NS_SYMBOL(png_set_rgb_to_gray_fixed)
#endif

#ifndef png_set_rows
#define png_set_rows __NS_SYMBOL(png_set_rows)
#endif

#ifndef png_set_sBIT
#define png_set_sBIT __NS_SYMBOL(png_set_sBIT)
#endif

#ifndef png_set_sCAL
#define png_set_sCAL __NS_SYMBOL(png_set_sCAL)
#endif

#ifndef png_set_sPLT
#define png_set_sPLT __NS_SYMBOL(png_set_sPLT)
#endif

#ifndef png_set_sRGB
#define png_set_sRGB __NS_SYMBOL(png_set_sRGB)
#endif

#ifndef png_set_sRGB_gAMA_and_cHRM
#define png_set_sRGB_gAMA_and_cHRM __NS_SYMBOL(png_set_sRGB_gAMA_and_cHRM)
#endif

#ifndef png_set_shift
#define png_set_shift __NS_SYMBOL(png_set_shift)
#endif

#ifndef png_set_sig_bytes
#define png_set_sig_bytes __NS_SYMBOL(png_set_sig_bytes)
#endif

#ifndef png_set_strip_16
#define png_set_strip_16 __NS_SYMBOL(png_set_strip_16)
#endif

#ifndef png_set_strip_alpha
#define png_set_strip_alpha __NS_SYMBOL(png_set_strip_alpha)
#endif

#ifndef png_set_strip_error_numbers
#define png_set_strip_error_numbers __NS_SYMBOL(png_set_strip_error_numbers)
#endif

#ifndef png_set_swap
#define png_set_swap __NS_SYMBOL(png_set_swap)
#endif

#ifndef png_set_swap_alpha
#define png_set_swap_alpha __NS_SYMBOL(png_set_swap_alpha)
#endif

#ifndef png_set_tIME
#define png_set_tIME __NS_SYMBOL(png_set_tIME)
#endif

#ifndef png_set_tRNS
#define png_set_tRNS __NS_SYMBOL(png_set_tRNS)
#endif

#ifndef png_set_tRNS_to_alpha
#define png_set_tRNS_to_alpha __NS_SYMBOL(png_set_tRNS_to_alpha)
#endif

#ifndef png_set_text
#define png_set_text __NS_SYMBOL(png_set_text)
#endif

#ifndef png_set_text_2
#define png_set_text_2 __NS_SYMBOL(png_set_text_2)
#endif

#ifndef png_set_unknown_chunk_location
#define png_set_unknown_chunk_location __NS_SYMBOL(png_set_unknown_chunk_location)
#endif

#ifndef png_set_unknown_chunks
#define png_set_unknown_chunks __NS_SYMBOL(png_set_unknown_chunks)
#endif

#ifndef png_set_user_limits
#define png_set_user_limits __NS_SYMBOL(png_set_user_limits)
#endif

#ifndef png_set_user_transform_info
#define png_set_user_transform_info __NS_SYMBOL(png_set_user_transform_info)
#endif

#ifndef png_set_write_fn
#define png_set_write_fn __NS_SYMBOL(png_set_write_fn)
#endif

#ifndef png_set_write_status_fn
#define png_set_write_status_fn __NS_SYMBOL(png_set_write_status_fn)
#endif

#ifndef png_set_write_user_transform_fn
#define png_set_write_user_transform_fn __NS_SYMBOL(png_set_write_user_transform_fn)
#endif

#ifndef png_sig_cmp
#define png_sig_cmp __NS_SYMBOL(png_sig_cmp)
#endif

#ifndef png_start_read_image
#define png_start_read_image __NS_SYMBOL(png_start_read_image)
#endif

#ifndef png_warning
#define png_warning __NS_SYMBOL(png_warning)
#endif

#ifndef png_write_IDAT
#define png_write_IDAT __NS_SYMBOL(png_write_IDAT)
#endif

#ifndef png_write_IEND
#define png_write_IEND __NS_SYMBOL(png_write_IEND)
#endif

#ifndef png_write_IHDR
#define png_write_IHDR __NS_SYMBOL(png_write_IHDR)
#endif

#ifndef png_write_PLTE
#define png_write_PLTE __NS_SYMBOL(png_write_PLTE)
#endif

#ifndef png_write_bKGD
#define png_write_bKGD __NS_SYMBOL(png_write_bKGD)
#endif

#ifndef png_write_cHRM
#define png_write_cHRM __NS_SYMBOL(png_write_cHRM)
#endif

#ifndef png_write_cHRM_fixed
#define png_write_cHRM_fixed __NS_SYMBOL(png_write_cHRM_fixed)
#endif

#ifndef png_write_chunk
#define png_write_chunk __NS_SYMBOL(png_write_chunk)
#endif

#ifndef png_write_chunk_data
#define png_write_chunk_data __NS_SYMBOL(png_write_chunk_data)
#endif

#ifndef png_write_chunk_end
#define png_write_chunk_end __NS_SYMBOL(png_write_chunk_end)
#endif

#ifndef png_write_chunk_start
#define png_write_chunk_start __NS_SYMBOL(png_write_chunk_start)
#endif

#ifndef png_write_data
#define png_write_data __NS_SYMBOL(png_write_data)
#endif

#ifndef png_write_destroy
#define png_write_destroy __NS_SYMBOL(png_write_destroy)
#endif

#ifndef png_write_end
#define png_write_end __NS_SYMBOL(png_write_end)
#endif

#ifndef png_write_filtered_row
#define png_write_filtered_row __NS_SYMBOL(png_write_filtered_row)
#endif

#ifndef png_write_find_filter
#define png_write_find_filter __NS_SYMBOL(png_write_find_filter)
#endif

#ifndef png_write_finish_row
#define png_write_finish_row __NS_SYMBOL(png_write_finish_row)
#endif

#ifndef png_write_flush
#define png_write_flush __NS_SYMBOL(png_write_flush)
#endif

#ifndef png_write_gAMA
#define png_write_gAMA __NS_SYMBOL(png_write_gAMA)
#endif

#ifndef png_write_gAMA_fixed
#define png_write_gAMA_fixed __NS_SYMBOL(png_write_gAMA_fixed)
#endif

#ifndef png_write_hIST
#define png_write_hIST __NS_SYMBOL(png_write_hIST)
#endif

#ifndef png_write_iCCP
#define png_write_iCCP __NS_SYMBOL(png_write_iCCP)
#endif

#ifndef png_write_image
#define png_write_image __NS_SYMBOL(png_write_image)
#endif

#ifndef png_write_info
#define png_write_info __NS_SYMBOL(png_write_info)
#endif

#ifndef png_write_info_before_PLTE
#define png_write_info_before_PLTE __NS_SYMBOL(png_write_info_before_PLTE)
#endif

#ifndef png_write_init
#define png_write_init __NS_SYMBOL(png_write_init)
#endif

#ifndef png_write_init_2
#define png_write_init_2 __NS_SYMBOL(png_write_init_2)
#endif

#ifndef png_write_init_3
#define png_write_init_3 __NS_SYMBOL(png_write_init_3)
#endif

#ifndef png_write_oFFs
#define png_write_oFFs __NS_SYMBOL(png_write_oFFs)
#endif

#ifndef png_write_pCAL
#define png_write_pCAL __NS_SYMBOL(png_write_pCAL)
#endif

#ifndef png_write_pHYs
#define png_write_pHYs __NS_SYMBOL(png_write_pHYs)
#endif

#ifndef png_write_png
#define png_write_png __NS_SYMBOL(png_write_png)
#endif

#ifndef png_write_row
#define png_write_row __NS_SYMBOL(png_write_row)
#endif

#ifndef png_write_rows
#define png_write_rows __NS_SYMBOL(png_write_rows)
#endif

#ifndef png_write_sBIT
#define png_write_sBIT __NS_SYMBOL(png_write_sBIT)
#endif

#ifndef png_write_sCAL
#define png_write_sCAL __NS_SYMBOL(png_write_sCAL)
#endif

#ifndef png_write_sPLT
#define png_write_sPLT __NS_SYMBOL(png_write_sPLT)
#endif

#ifndef png_write_sRGB
#define png_write_sRGB __NS_SYMBOL(png_write_sRGB)
#endif

#ifndef png_write_sig
#define png_write_sig __NS_SYMBOL(png_write_sig)
#endif

#ifndef png_write_start_row
#define png_write_start_row __NS_SYMBOL(png_write_start_row)
#endif

#ifndef png_write_tEXt
#define png_write_tEXt __NS_SYMBOL(png_write_tEXt)
#endif

#ifndef png_write_tIME
#define png_write_tIME __NS_SYMBOL(png_write_tIME)
#endif

#ifndef png_write_tRNS
#define png_write_tRNS __NS_SYMBOL(png_write_tRNS)
#endif

#ifndef png_write_zTXt
#define png_write_zTXt __NS_SYMBOL(png_write_zTXt)
#endif

#ifndef png_zalloc
#define png_zalloc __NS_SYMBOL(png_zalloc)
#endif

#ifndef png_zfree
#define png_zfree __NS_SYMBOL(png_zfree)
#endif


// Externs
#ifndef png_IDAT
#define png_IDAT __NS_SYMBOL(png_IDAT)
#endif

#ifndef png_IEND
#define png_IEND __NS_SYMBOL(png_IEND)
#endif

#ifndef png_IHDR
#define png_IHDR __NS_SYMBOL(png_IHDR)
#endif

#ifndef png_PLTE
#define png_PLTE __NS_SYMBOL(png_PLTE)
#endif

#ifndef png_bKGD
#define png_bKGD __NS_SYMBOL(png_bKGD)
#endif

#ifndef png_cHRM
#define png_cHRM __NS_SYMBOL(png_cHRM)
#endif

#ifndef png_gAMA
#define png_gAMA __NS_SYMBOL(png_gAMA)
#endif

#ifndef png_hIST
#define png_hIST __NS_SYMBOL(png_hIST)
#endif

#ifndef png_iCCP
#define png_iCCP __NS_SYMBOL(png_iCCP)
#endif

#ifndef png_iTXt
#define png_iTXt __NS_SYMBOL(png_iTXt)
#endif

#ifndef png_oFFs
#define png_oFFs __NS_SYMBOL(png_oFFs)
#endif

#ifndef png_pCAL
#define png_pCAL __NS_SYMBOL(png_pCAL)
#endif

#ifndef png_pHYs
#define png_pHYs __NS_SYMBOL(png_pHYs)
#endif

#ifndef png_sBIT
#define png_sBIT __NS_SYMBOL(png_sBIT)
#endif

#ifndef png_sCAL
#define png_sCAL __NS_SYMBOL(png_sCAL)
#endif

#ifndef png_sPLT
#define png_sPLT __NS_SYMBOL(png_sPLT)
#endif

#ifndef png_sRGB
#define png_sRGB __NS_SYMBOL(png_sRGB)
#endif

#ifndef png_tEXt
#define png_tEXt __NS_SYMBOL(png_tEXt)
#endif

#ifndef png_tIME
#define png_tIME __NS_SYMBOL(png_tIME)
#endif

#ifndef png_tRNS
#define png_tRNS __NS_SYMBOL(png_tRNS)
#endif

#ifndef png_zTXt
#define png_zTXt __NS_SYMBOL(png_zTXt)
#endif

#ifndef png_libpng_ver
#define png_libpng_ver __NS_SYMBOL(png_libpng_ver)
#endif

#ifndef png_pass_dsp_mask
#define png_pass_dsp_mask __NS_SYMBOL(png_pass_dsp_mask)
#endif

#ifndef png_pass_inc
#define png_pass_inc __NS_SYMBOL(png_pass_inc)
#endif

#ifndef png_pass_mask
#define png_pass_mask __NS_SYMBOL(png_pass_mask)
#endif

#ifndef png_pass_start
#define png_pass_start __NS_SYMBOL(png_pass_start)
#endif

#ifndef png_pass_yinc
#define png_pass_yinc __NS_SYMBOL(png_pass_yinc)
#endif

#ifndef png_pass_ystart
#define png_pass_ystart __NS_SYMBOL(png_pass_ystart)
#endif

#ifndef png_sig
#define png_sig __NS_SYMBOL(png_sig)
#endif

#endif // LIBPNG_AGS_RENAME_SYMBOLS_H
