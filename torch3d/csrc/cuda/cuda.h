// -*- mode: c++ -*-
#include <torch/extension.h>
#include <ATen/cuda/CUDAContext.h>


at::Tensor farthest_point_sample_cuda(at::Tensor points, int num_samples);
at::Tensor ball_point_cuda(at::Tensor points, at::Tensor queries, float radius, int k);
at::Tensor gather_points_cuda(at::Tensor points, at::Tensor indices);
at::Tensor gather_points_backward_cuda(at::Tensor grad, at::Tensor indices, int n);
