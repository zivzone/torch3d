import torch
import torch.nn as nn
import torch3d.nn.functional as F


__all__ = ["ChamferLoss"]


class ChamferLoss(nn.Module):
    def __init__(self):
        super(ChamferLoss, self).__init__()
        self.transform = transform

    def forward(x, y):
        return F.chamfer_loss(x, y)