# Dataset Guidelines

This repository may contain datasets and examples for Data Science and Machine Learning learning activities.

## Before Adding a Dataset

- Check the dataset's license and redistribution permissions.
- Prefer public datasets from trusted sources.
- Include the original source URL and relevant attribution.
- Record the dataset license when known.
- Never upload private, confidential, or personally identifiable information without proper authorization.
- Avoid committing large datasets when a download script or source link is sufficient.

## Recommended Dataset Documentation

For each dataset, document:

- Dataset name and purpose.
- Source URL.
- License and usage restrictions.
- File format and approximate size.
- Relevant preprocessing steps.
- Known limitations or potential bias.

## Suggested Organization

- `raw/`: Original, unmodified data; generally keep downloaded data out of Git.
- `processed/`: Cleaned or transformed data used in examples.
- `sample/`: Small, appropriately licensed samples suitable for version control.

Adapt these directory names to the actual dataset structure in the repository.

## Reproducibility

Document the steps needed to obtain and prepare a dataset so that another learner can reproduce the analysis.

Do not assume that a publicly accessible dataset is automatically permitted to be redistributed.