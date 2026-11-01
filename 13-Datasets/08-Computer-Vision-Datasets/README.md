# 👁️ Computer Vision Datasets

A collection of datasets for computer vision research, experimentation, and deep learning applications.

This directory contains datasets with visual information and annotations used to develop and evaluate systems that interpret images and videos.

---

## 🎯 Objectives

- Understand datasets used in computer vision.
- Explore image and video annotation formats.
- Practice preparing data for computer vision models.
- Work with classification, detection, and segmentation tasks.
- Experiment with pretrained and custom vision models.
- Learn dataset evaluation and validation techniques.

---

## 📁 Dataset Categories

Organize datasets into the following categories when needed:

| Category | Description |
|---|---|
| `01-Image-Classification/` | Images labeled with predefined classes. |
| `02-Object-Detection/` | Images or videos with object bounding-box annotations. |
| `03-Image-Segmentation/` | Pixel-level or region-level image annotations. |
| `04-Face-Detection-And-Recognition/` | Face-related datasets for detection and recognition research. |
| `05-Pose-And-Landmark-Estimation/` | Human pose, keypoint, and landmark annotations. |
| `06-OCR-And-Document-Understanding/` | Document images, text regions, and OCR annotations. |
| `07-Video-Understanding/` | Video datasets for action recognition and visual event analysis. |
| `08-Depth-And-3D-Vision/` | Depth maps, point clouds, and 3D visual data. |
| `09-Medical-Computer-Vision/` | Medical image datasets for research, subject to strict privacy and usage requirements. |
| `10-Other-Computer-Vision/` | Other computer vision datasets that do not fit the above categories. |

---

## 🔬 Common Applications

- Image classification
- Object detection
- Image segmentation
- Face detection
- Pose estimation
- Optical character recognition (OCR)
- Object tracking
- Action recognition
- Depth estimation
- 3D scene understanding

---

## ⚙️ Common Dataset Preparation Techniques

- Image resizing and normalization
- Annotation format conversion
- Bounding-box validation
- Mask and segmentation validation
- Image augmentation
- Class distribution analysis
- Duplicate image detection
- Train, validation, and test splitting
- Annotation visualization
- Dataset quality checks

---

## 🛠️ Common Python Libraries And Tools

- **OpenCV** — image and video processing
- **Pillow** — image manipulation
- **NumPy** — numerical operations
- **Matplotlib** — visualization
- **PyTorch / torchvision** — computer vision model development
- **TensorFlow / Keras** — deep learning workflows
- **Ultralytics** — YOLO-based computer vision workflows
- **Albumentations** — image augmentation
- **CVAT** — image and video annotation
- **Label Studio** — data labeling and annotation

---

## 📝 Dataset Documentation

Each dataset should include a README or dataset card documenting:

- Dataset overview and intended task
- Original source and creator
- Source URL
- License and usage restrictions
- Number of images or videos, where known
- Image dimensions and formats
- Class labels and annotation types
- Annotation format (YOLO, COCO, Pascal VOC, etc.)
- Train, validation, and test split details
- Preprocessing history
- Known limitations and potential applications

---

## 📌 Data Management Guidelines

1. Preserve original images, videos, and annotations.
2. Keep annotation files correctly matched with their corresponding samples.
3. Document annotation formats and coordinate conventions.
4. Validate bounding boxes, segmentation masks, and labels before training.
5. Avoid duplicate copies of datasets already stored in another primary category.
6. Consider large storage requirements before committing datasets to GitHub.
7. Respect privacy, consent, copyright, and licensing restrictions.
8. Do not redistribute restricted or sensitive visual data without permission.

---

*Part of the AI-ML-Journey dataset library.*