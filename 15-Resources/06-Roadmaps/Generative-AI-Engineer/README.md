# Generative AI Engineer Roadmap

This roadmap covers the skills required to build, evaluate, and deploy applications powered by Large Language Models (LLMs), retrieval systems, AI agents, and other generative AI technologies.

The focus is on understanding the underlying concepts, building reliable applications, and developing projects that demonstrate practical engineering ability.

## 1. Learning Path

```text
Python and Software Engineering
            ↓
Mathematics and Machine Learning
            ↓
Deep Learning and NLP
            ↓
Transformers and LLM Fundamentals
            ↓
LLM APIs and Open-Source Models
            ↓
Prompt Engineering and Structured Outputs
            ↓
Embeddings and Vector Search
            ↓
Retrieval-Augmented Generation (RAG)
            ↓
Evaluation and Fine-Tuning
            ↓
AI Agents and Tool Calling
            ↓
Backend Development and Deployment
            ↓
Production-Ready Generative AI Systems
```

## 2. Python and Software Engineering Foundations

Develop the programming and engineering skills needed to build maintainable AI applications.

### Topics

- Python fundamentals, functions, OOP, and exception handling
- Iterators, generators, decorators, and context managers
- Type hints, dataclasses, and modern Python features
- NumPy, Pandas, and data processing
- Modules, packages, and virtual environments
- Git, GitHub, debugging, and logging
- Unit testing with `pytest`
- Dependency management and project structure
- Basic algorithms, data structures, and complexity analysis

**Goal:** Write clean, reusable, testable Python code before adding AI components.

## 3. Mathematics, Machine Learning, and Deep Learning

Understand the foundations behind the models used in generative AI.

### Topics

- Linear algebra: vectors, matrices, dot products, and matrix multiplication
- Probability and statistics
- Calculus and gradients
- Loss functions and optimization
- Supervised and unsupervised learning
- Neural networks and backpropagation
- Embeddings and representation learning
- Attention mechanisms
- Transformer architecture
- Training, validation, and generalization

**Goal:** Understand the core ideas behind model training and inference rather than treating models as unexplained black boxes.

## 4. Natural Language Processing and Transformers

Learn how text is represented and processed by modern language models.

### Topics

- Text preprocessing and tokenization
- Vocabulary, tokens, and token IDs
- Word and sentence embeddings
- Positional information
- Self-attention and multi-head attention
- Encoder-only, decoder-only, and encoder-decoder architectures
- Pretraining and fine-tuning
- Context windows and sequence length
- Sampling, temperature, and generation strategies

**Goal:** Understand how transformer-based models process text and generate responses.

## 5. Large Language Models

Learn to work with hosted models and open-source language models.

### Topics

- LLM capabilities and limitations
- Model selection based on task, cost, latency, and quality
- API-based model inference
- Local inference with suitable open-source models
- Token counting and context-window management
- System, user, and assistant messages
- Streaming responses
- Structured outputs and schema validation
- Function calling and tool calling
- Retries, timeouts, rate limits, and error handling

**Goal:** Build applications that use language models reliably, with appropriate validation and failure handling.

## 6. Prompt Engineering

Learn to design prompts that produce consistent and useful outputs.

### Topics

- Clear instructions and context
- Zero-shot and few-shot prompting
- Role and task specification
- Examples and output constraints
- Prompt templates and reusable components
- Structured JSON outputs
- Decomposition of complex tasks
- Prompt versioning and testing
- Handling ambiguous or incomplete requests
- Prompt injection awareness

**Goal:** Improve output quality systematically through testing, not just trial and error.

## 7. Embeddings and Vector Search

Understand semantic representations and retrieval systems.

### Topics

- Text embeddings and semantic similarity
- Cosine similarity and distance metrics
- Embedding model selection
- Chunking strategies
- Metadata filtering
- Vector indexes and approximate nearest-neighbor search
- Vector databases and local vector stores
- Hybrid retrieval: keyword and semantic search
- Reranking retrieved results

**Goal:** Retrieve relevant information from documents and datasets instead of relying only on the model's internal knowledge.

## 8. Retrieval-Augmented Generation (RAG)

Build applications that answer questions using external documents or other trusted data sources.

### Topics

- Document ingestion and parsing
- Cleaning and normalizing source content
- Chunking and metadata extraction
- Embedding generation and indexing
- Query processing
- Retrieval and reranking
- Context construction
- Citation and source attribution
- Handling missing evidence and unsupported answers
- Updating and deleting indexed documents
- RAG evaluation and failure analysis

### Project progression

1. Searchable document collection
2. PDF question-answering application
3. RAG application with source citations
4. Hybrid retrieval and reranking
5. RAG evaluation pipeline

**Goal:** Build a grounded question-answering system and measure whether it retrieves relevant evidence and produces faithful answers.

## 9. Fine-Tuning and Model Adaptation

Learn when adapting model weights is useful and when prompting or RAG is a better solution.

### Topics

- Prompting versus RAG versus fine-tuning
- Dataset preparation and quality control
- Training, validation, and test splits
- Supervised fine-tuning
- Parameter-efficient fine-tuning
- LoRA and QLoRA concepts
- Training configurations and hyperparameters
- GPU memory requirements
- Model checkpoints and experiment tracking
- Evaluating adapted models against a baseline

**Goal:** Understand model adaptation and complete a small, measurable experiment when suitable hardware and data are available.

## 10. AI Agents and Tool Calling

Learn to build systems that can select tools and execute controlled multi-step workflows.

### Topics

- Tool and function schemas
- Model-directed tool selection
- Workflow orchestration
- State management
- Short-term and long-term memory design
- Planning and task decomposition
- Multi-step execution
- Retries and recovery
- Human approval for consequential actions
- Tool permissions and sandboxing
- Agent evaluation and trace inspection

**Goal:** Build useful, bounded workflows instead of adding agent complexity where a simple deterministic pipeline would work better.

## 11. Backend and Application Development

Develop the engineering skills needed to expose AI functionality through applications and services.

### Topics

- FastAPI and REST APIs
- Request validation and response schemas
- Asynchronous programming
- SQL and database fundamentals
- Authentication and authorization
- File uploads and document processing
- Background jobs and queues
- Caching and rate limiting
- Configuration and secret management
- Frontend integration
- API testing and documentation

**Goal:** Turn experimental notebooks into maintainable applications that other people can use.

## 12. Evaluation, Security, and Reliability

A working demo is not enough. Production systems must be tested for quality, safety, and operational performance.

### Topics

- Building representative evaluation datasets
- Testing correctness and instruction following
- RAG retrieval and answer-quality evaluation
- Groundedness and citation checks
- Regression testing across prompt or model changes
- Human evaluation
- Latency, throughput, and token-cost measurement
- Logging, tracing, and observability
- Prompt injection and untrusted document handling
- Privacy and sensitive-data protection
- Output validation and access control
- Failure handling and fallback strategies

**Goal:** Demonstrate that the application works consistently, not merely on a few hand-picked examples.

## 13. Deployment and MLOps

Learn how to ship, maintain, and monitor generative AI applications.

### Topics

- Docker and containerization
- Environment configuration
- CI/CD pipelines
- Cloud deployment fundamentals
- Model and prompt versioning
- Experiment tracking
- Monitoring latency, errors, and cost
- Caching and batching
- Scaling and concurrency
- Secrets management
- Rollbacks and release testing

**Goal:** Deploy an application reproducibly and monitor its performance after release.

## 14. Portfolio Projects

Build projects in increasing order of complexity. Every project should include a clear README, setup instructions, architecture, tests, limitations, and reproducible examples.

### Beginner

- LLM-powered text summarizer
- Structured information extractor
- Question-answering application using an LLM API
- Document or email classification tool

### Intermediate

- PDF chatbot with source citations
- RAG application with metadata filtering
- Research assistant with retrieval and references
- AI application with validated structured outputs
- Domain-specific assistant with a documented evaluation dataset

### Advanced

- RAG system with hybrid search, reranking, and evaluation
- Fine-tuning experiment comparing a baseline with an adapted model
- Tool-using agent with permissions, logging, and human approval
- Multi-step research workflow with traceable outputs
- Production-style AI service with authentication, tests, monitoring, and deployment

**Project quality matters more than project count.** Explain the problem, design decisions, evaluation results, failure cases, and limitations of each project.

## 15. Recommended Learning Resources

| Resource | What to Learn |
|---|---|
| [Hugging Face Learn](https://huggingface.co/learn) | NLP, transformers, LLMs, and model workflows |
| [Transformers Documentation](https://huggingface.co/docs/transformers) | Using transformer models |
| [Sentence Transformers](https://www.sbert.net/) | Embeddings and semantic search |
| [PyTorch Tutorials](https://pytorch.org/tutorials/) | Deep learning and model implementation |
| [FastAPI Documentation](https://fastapi.tiangolo.com/) | Building Python APIs |
| [Docker Documentation](https://docs.docker.com/) | Containers and deployment |
| [MLflow Documentation](https://mlflow.org/docs/latest/) | Experiment tracking and model lifecycle |
| [OpenAI API Documentation](https://platform.openai.com/docs/) | Hosted model APIs and structured application development |

Prefer official documentation and practical exercises. Use frameworks after understanding the underlying concepts well enough to debug them.

## 16. Engineering Principles

- Start with the simplest solution that meets the requirements.
- Learn the fundamentals before depending heavily on orchestration frameworks.
- Measure quality, latency, and cost instead of assuming a larger model is always better.
- Keep API keys and credentials out of source control.
- Validate model outputs before using them in downstream systems.
- Treat retrieved documents and external content as untrusted input.
- Use explicit permissions and human approval for consequential actions.
- Include tests, evaluation examples, and known limitations in every serious project.
- Read documentation and inspect errors rather than relying entirely on generated code.

## Related Sections

- [All Roadmaps](../README.md)
- [AI-ML-Journey Repository](../../../README.md)
- [Generative AI Resources](../../05-Research-Papers/Generative-AI/README.md)
- [Deep Learning Cheat Sheets](../../02-Cheat-Sheets/Deep-Learning/README.md)
- [NLP and LLM Interview Questions](../../03-Interview-Questions/NLP-And-LLMs/README.md)
