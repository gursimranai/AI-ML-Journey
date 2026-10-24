# MLOps Interview Questions

This directory contains interview questions and preparation materials covering Machine Learning Operations (MLOps), from foundational concepts to production-level machine learning systems.

MLOps combines machine learning, software engineering, data engineering, automation, and infrastructure practices to build, deploy, monitor, and maintain reliable machine learning systems.

## Contents

### 1. MLOps Fundamentals
- What is MLOps, and why is it important?
- ML development lifecycle versus the MLOps lifecycle
- DevOps versus MLOps
- Reproducibility, automation, scalability, and reliability
- Challenges of deploying machine learning models in production

### 2. Experiment Tracking and Reproducibility
- Experiment tracking and run metadata
- Tracking parameters, metrics, artifacts, and model versions
- Reproducible training environments
- Random seeds and sources of nondeterminism
- Comparing experiments and selecting models

### 3. Data and Model Versioning
- Dataset versioning and data lineage
- Model versioning and artifact management
- Data validation and schema changes
- Training data versus inference data
- Reproducing a model from a previous experiment

### 4. ML Pipelines and Orchestration
- What is an ML pipeline?
- Data ingestion, validation, preprocessing, training, and evaluation
- Pipeline dependencies and scheduling
- Pipeline caching, retries, and failure handling
- Batch processing versus real-time inference

### 5. CI/CD/CT for Machine Learning
- Continuous Integration (CI)
- Continuous Delivery and Continuous Deployment (CD)
- Continuous Training (CT)
- Automated testing and model validation
- Triggering retraining when data or performance changes
- Deployment approval and rollback strategies

### 6. Testing and Validation
- Unit, integration, and end-to-end testing
- Data quality and schema validation
- Model performance and regression testing
- Training-serving consistency
- Testing pipelines before production deployment

### 7. Model Deployment and Serving
- Batch inference, online inference, and streaming inference
- REST APIs and model-serving services
- Model packaging and dependency management
- Containerization with Docker
- Deployment strategies: blue-green, canary, and shadow deployment
- Latency, throughput, scalability, and availability

### 8. Model Registry and Feature Stores
- What is a model registry?
- Model stages, versions, and approval workflows
- Model artifacts and metadata
- What is a feature store?
- Offline versus online feature stores
- Feature reuse and training-serving consistency

### 9. Monitoring and Maintenance
- Monitoring model performance in production
- Data drift, concept drift, and prediction drift
- Monitoring latency, throughput, errors, and resource usage
- Detecting performance degradation
- Retraining triggers and model rollback
- Logging, alerting, and incident response

### 10. Infrastructure and Cloud
- Virtual environments and dependency management
- Docker images and containers
- Kubernetes fundamentals
- Cloud storage, compute, and managed ML services
- Infrastructure automation and configuration management
- Resource optimization and cost monitoring

### 11. Security, Governance, and Responsible ML
- Managing secrets and credentials
- Access control and permissions
- Data privacy and sensitive information
- Model and dataset access policies
- Audit trails and experiment traceability
- Bias monitoring and responsible deployment

### 12. Scenario-Based Questions
Practice explaining how you would handle situations such as:

- A model performs well during training but poorly in production.
- The production data schema changes unexpectedly.
- Model predictions become less accurate over time.
- A deployment increases prediction latency.
- A new model performs worse than the currently deployed model.
- Training results cannot be reproduced.
- A pipeline fails halfway through execution.
- A model needs to be rolled back without significant downtime.
- Cloud infrastructure costs increase unexpectedly.
- Training and inference produce different features.

## Suggested File Organization

Keep the existing filenames and folders in this directory. If you need to organize new materials, the following names are examples:

```text
MLOps/
├── README.md
├── 01-MLOps-Fundamentals.md
├── 02-Experiment-Tracking.md
├── 03-Data-And-Model-Versioning.md
├── 04-ML-Pipelines.md
├── 05-CI-CD-CT.md
├── 06-Testing-And-Validation.md
├── 07-Model-Deployment.md
├── 08-Model-Registry-And-Feature-Stores.md
├── 09-Monitoring-And-Drift.md
├── 10-Infrastructure-And-Cloud.md
└── 11-Scenario-Based-Questions.md
```

## How to Prepare

For each question, aim to understand:

1. **Definition:** Explain the concept clearly.
2. **Purpose:** Describe the problem it solves.
3. **Workflow:** Explain how it works in practice.
4. **Tools:** Identify relevant tools and their roles.
5. **Trade-offs:** Discuss limitations and alternatives.
6. **Example:** Connect the concept to a realistic production scenario.

For scenario-based questions, structure answers around the problem, investigation, solution, validation, and prevention of recurrence.

## Useful Documentation

- [MLflow Documentation](https://mlflow.org/docs/latest/)
- [Docker Documentation](https://docs.docker.com/)
- [Kubernetes Documentation](https://kubernetes.io/docs/)
- [scikit-learn Documentation](https://scikit-learn.org/stable/)

Use official documentation to verify technical details and keep tool-specific notes up to date.